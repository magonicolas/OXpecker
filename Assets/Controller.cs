using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System.Collections.Generic;
using System.Text.RegularExpressions;
using System.Runtime.Serialization.Formatters.Binary;
using System;
using Newtonsoft.Json;

[System.Serializable]
public  class Ping 
{
	public string nombre;
	public string fecha;
}

[System.Serializable]
public  class Producto 
{
	public string producto;
	public Equipo[] equipos;
}

[System.Serializable]
public  class Equipo 
{
	public string uniqueID;
	public bool online;
	public string version;
	public string ultimaConexion;
	public string hora;
	public string modeloReal;
	public string MAC;
	public string idPunto;
}

[System.Serializable]
public  class Sucursal 
{
	public string sucursal;
	public Producto[] producto;
	public Ping[] ping;
}

[System.Serializable]
public  class Cliente 
{
	public string cliente;
	public Sucursal[] sucursales;
}

public  class Controller : MonoBehaviour 
{
	public List <Cliente> clientes = new List<Cliente> ();
	public  List<Sucursal> sucursal = new List<Sucursal>();
	public GameObject homePanel;
	public GameObject productoPanel;
	public Text sucursalText;
	public string clienteSelected;
	public string sucursalSelected;
	public int idSucursalSelected;
	public string productoSelected;
	public int idProductoSelected;
	public int idClienteSelected;
	public GameObject equipoPrefab;
	public GameObject pingPrefab;
	public Transform equiposContent;
	public GameObject sucursalPrefab;
	public Transform sucursalContent;
	public GameObject togglePrefab;
	public Transform toggleContent;
	public ScrollRect scrollRectToggle;
	public GameObject textSinInternet;
	public Text textSinInternetText;
	public Image reloadImage;
	public bool ping;
	float online;
	float totalEquipos;
	float onlineTotal;
	float totalEquiposTotal;
	public Text porcentajeTotalText;

	void Start ()
	{
		UpdateInfo();
	}


	public void UpdateInfo()
	{
		WWWForm form = new WWWForm();
		form.AddField("uniqueID", "idTest");
		//StartCoroutine(GetInfo(form, "http://rinno.cl/rinnomanager/soporteentel/app/getSoporte"));
		StartCoroutine(GetInfo(form, "http://rinno.cl/rinnomanager/oxpecker/app/getdevices"));
	}

	IEnumerator GetInfo (WWWForm form, string myURL)
	{
		textSinInternet.gameObject.SetActive(false);
		//	print("Downloading Planes Info...");
		WWW www = new WWW(myURL, form);
		while(!www.isDone)
		{
			reloadImage.gameObject.transform.Rotate(0,0,-4);
		}
			yield return new WaitForSeconds (0.1f);
		if (string.IsNullOrEmpty(www.error))
		{
			DestroySucursal();
			textSinInternetText.text = "Actualizado Exitosamente";
			print (www.text);
			textSinInternet.gameObject.SetActive(true);
			//sucursal = JsonConvert.DeserializeObject<List<Sucursal>>(www.text);
			clientes = JsonConvert.DeserializeObject<List<Cliente>>(www.text);
			InstantiateSucursales();
			UpdateEquipos();
		}
		else
		{
			print("Descarga Fallo! Sin Internet o Error");
			textSinInternetText.text = "Descarga Fallo! Sin Internet o Error";
			textSinInternet.gameObject.SetActive(true);
		}
		reloadImage.gameObject.transform.rotation = Quaternion.identity;

		yield return www;
	}

	public void GoToProductoPanel ()
	{
		homePanel.SetActive(false);
		productoPanel.SetActive(true);
		sucursalText.text = sucursalSelected;
		InstantiateProductos ();
		UpdateEquipos();
	}

	[ContextMenu ("Update Equipos")]
	public void UpdateEquipos ()
	{
		equiposContent.GetComponent<RectTransform>().localPosition = new Vector2(0,-1585);
		bool temp = false;
		if(productoSelected == "")
			temp = true;
		for(int i = 0; i < clientes.Count; i++)
		{
			if (clientes [idClienteSelected].sucursales [i].sucursal == sucursalSelected) {
				idSucursalSelected = i;
			}

		//	if(sucursal[i].sucursal == sucursalSelected)
		//		idSucursalSelected = i;
		}
		//for(int j = 0; j < sucursal[idSucursalSelected].producto.Length; j++)
		for(int j = 0; j < clientes [idClienteSelected].sucursales[idSucursalSelected].producto.Length; j++)
		{
			if(clientes [idClienteSelected].sucursales[idSucursalSelected].producto[j].producto.ToLower() == productoSelected.ToLower())
			{
				idProductoSelected = j;
				temp = true;
			}
		}
		DestroyChild();
		if(clientes [idClienteSelected].sucursales[idSucursalSelected].producto[idProductoSelected].equipos.Length != 0 && temp)
		{
			InstantiateEquipos();
		}


	}

	public void UpdatePing()
	{
		int index = 0;
		equiposContent.GetComponent<RectTransform>().localPosition = new Vector2(0,-1585);
		foreach(Ping pin in sucursal[idSucursalSelected].ping)
		{
			GameObject a = Instantiate(pingPrefab) as GameObject;
			PingScript temp = a.GetComponent<PingScript>();
			temp.nombreText.text = sucursal[idSucursalSelected].ping[index].nombre;
			temp.fechaText.text = sucursal[idSucursalSelected].ping[index].fecha;
			a.transform.SetParent(equiposContent.transform, false);
			index++;
		}
	}

	public void DestroyChild ()
	{
		foreach(Transform child in equiposContent) 
		{
			Destroy(child.gameObject);
		}
		if(ping)
			UpdatePing();
	}

	public void DestroyChildProducto ()
	{
		foreach(Transform child in toggleContent) 
		{
			Destroy(child.gameObject);
		}
		if(ping)
			UpdatePing();
	}

	public void DestroySucursal ()
	{
		foreach(Transform child in sucursalContent) 
		{
			Destroy(child.gameObject);
		}

	}

	public void InstantiateEquipos ()
	{
		int index = 0;
		foreach(Equipo acc in clientes [idClienteSelected].sucursales[idSucursalSelected].producto[idProductoSelected].equipos)
		{
			GameObject a = Instantiate(equipoPrefab) as GameObject;
			a.name = clientes [idClienteSelected].sucursales[idSucursalSelected].producto[idProductoSelected].equipos[index].ToString();
			EquipoScript temp = a.GetComponent<EquipoScript>();
			temp.online = clientes [idClienteSelected].sucursales[idSucursalSelected].producto[idProductoSelected].equipos[index].online;
			temp.id = clientes [idClienteSelected].sucursales[idSucursalSelected].producto[idProductoSelected].equipos[index].uniqueID;
			temp.ultimaConexion = clientes [idClienteSelected].sucursales[idSucursalSelected].producto[idProductoSelected].equipos[index].ultimaConexion;
			temp.hora = clientes [idClienteSelected].sucursales[idSucursalSelected].producto[idProductoSelected].equipos[index].hora;
			temp.idPunto = clientes [idClienteSelected].sucursales[idSucursalSelected].producto[idProductoSelected].equipos[index].idPunto;
			temp.version = clientes [idClienteSelected].sucursales[idSucursalSelected].producto[idProductoSelected].equipos[index].version;
			temp.mac = clientes [idClienteSelected].sucursales[idSucursalSelected].producto[idProductoSelected].equipos[index].MAC;
			temp.SetEquipos();
			a.transform.SetParent(equiposContent.transform, false);
			index++;
		}
	}

	public void InstantiateSucursales ()
	{
		int index = 0;
		//foreach(Sucursal s in sucursal)
		foreach(Sucursal s in clientes[idClienteSelected].sucursales)
		{
			GameObject temp = Instantiate(sucursalPrefab) as GameObject;
			//temp.name = sucursal[index].sucursal.ToString();
			temp.name = clientes[idClienteSelected].sucursales[index].sucursal.ToString();
			temp.GetComponent<sucursalButtonScript>().controller = this.gameObject.GetComponent<Controller>();
			temp.GetComponent<sucursalButtonScript>().ChangeText();
			temp.transform.SetParent(sucursalContent.transform, false);
			int index2 = 0;
			online = 0;
			totalEquipos = 0;
			foreach(Producto prod in clientes[idClienteSelected].sucursales[index].producto)
			{
				foreach(Equipo equi in clientes[idClienteSelected].sucursales[index].producto[index2].equipos)
				{
					if(equi.online)
					{
						online++;
						onlineTotal++;
					}
					totalEquipos++;
					totalEquiposTotal++;
				}
				index2++;
			}
			if(totalEquipos != 0)
				temp.GetComponent<sucursalButtonScript>().porcentaje.text = (Mathf.Floor((online / totalEquipos)*100)).ToString() + "%";
			else
				temp.GetComponent<sucursalButtonScript>().porcentaje.text = "N/A";
			index++;
		}
		if(totalEquiposTotal != 0)
			porcentajeTotalText.text = (Mathf.Floor((onlineTotal / totalEquiposTotal)*100)).ToString() + "%";
		
	}

	public void InstantiateProductos ()
	{
		// clientes [idClienteSelected].sucursales[idSucursalSelected].producto[j].producto

		int index = 0;
		foreach (Producto p in clientes [idClienteSelected].sucursales[idSucursalSelected].producto) {
		
			GameObject temp = Instantiate (togglePrefab) as GameObject;
			temp.transform.SetParent (toggleContent, false);
			temp.name = clientes [idClienteSelected].sucursales [idSucursalSelected].producto [index].producto.ToString ();
			temp.GetComponent<ToggleScript>().controller = this.gameObject.GetComponent<Controller>();
			temp.GetComponent<ToggleScript> ().name = temp.name;
			temp.GetComponent<ToggleScript> ().myLabel.text = temp.name;

			index++;
		}
		scrollRectToggle.GetComponent<ScrollRect>().enabled = false;
		scrollRectToggle.GetComponent<ScrollRect>().enabled = true;
		Canvas.ForceUpdateCanvases ();
	}

	public void SetProducto (string prod)
	{
		ping = false;
		productoSelected = prod;

		if(productoSelected == "Ping")
		{
			ping = true;
			DestroyChild();
		}
		else
		{
			DestroyChild();
			UpdateEquipos();
		}
	}


}
