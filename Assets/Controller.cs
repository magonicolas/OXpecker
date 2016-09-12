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
	public string imagen;
}

public  class Controller : MonoBehaviour 
{
	public GameObject sucursalContainer;
	public GameObject sucursalShowSeleccionaText;
	public float conectividaGeneral;
	public Image conectividadGeneralCircle;
	public int equiposRegistrados;
	public Text textConectividaGeneral;
	public Text textEquiposRegistrados;
	public Text seleccioneClienteSucursalText;
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
	public GameObject equipoBlancoPrefab;
	public GameObject pingPrefab;
	public Transform equiposContent;
	public GameObject clientePrefab;
	public GameObject sucursalPrefab;
	public Transform sucursalContent;
	public Transform clienteContent;
	public GameObject togglePrefab;
	public Transform toggleContent;
	public ScrollRect scrollRectToggle;
	public GameObject textSinInternet;
	public Text textSinInternetText;
	public Image reloadImage;
	public bool ping;
	float online;
	float totalEquipos;
	float onlineTotalPorSucursal;
	float onlineTotal;
	float totalEquiposTotal;
	//public Text porcentajeTotalText;
	public GameObject mainbackButton;

	void Start ()
	{
		UpdateInfo();
		mainbackButton.SetActive (false);
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
			DestroyCliente ();
			DestroySucursal();
			textSinInternetText.text = "Actualizado Exitosamente";
			textSinInternet.gameObject.SetActive(true);
			clientes = JsonConvert.DeserializeObject<List<Cliente>>(www.text);
			print (www.text);
			InstantiateClientes ();
			//InstantiateSucursales();
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
		for(int i = 0; i < clientes[idClienteSelected].sucursales.Length; i++)
		{
			if (clientes [idClienteSelected].sucursales [i].sucursal.ToLower() == sucursalSelected.ToLower()) {
				idSucursalSelected = i;
			}
		}
		productoSelected = clientes [idClienteSelected].sucursales [idSucursalSelected].producto [0].producto;

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

	public void DestroyCliente ()
	{
		foreach(Transform child in clienteContent) 
		{
			Destroy(child.gameObject);
		}

	}

	public void InstantiateEquipos ()
	{
		int index = 0;
		foreach(Equipo acc in clientes [idClienteSelected].sucursales[idSucursalSelected].producto[idProductoSelected].equipos)
		{
			GameObject a = null;
			if (index % 2 == 0) {
				a = Instantiate (equipoPrefab) as GameObject;
			} else {
				a = Instantiate (equipoBlancoPrefab) as GameObject;
			}
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
		mainbackButton.SetActive (true);
		sucursalContainer.SetActive (true);
		sucursalShowSeleccionaText.SetActive (true);
		for(int i = 0; i < clientes.Count; i++)
		{
			if (clientes [i].cliente == clienteSelected) {
				idClienteSelected = i;
			}
		}

		for(int i = 0; i < clientes.Count; i++)
		{
			if (clientes [idClienteSelected].sucursales [i].sucursal.ToLower() == sucursalSelected.ToLower
				()) {
				idSucursalSelected = i;
				print (idSucursalSelected);
			}
		}

		DestroySucursal ();
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
						onlineTotalPorSucursal++;
						//onlineTotal++;
					}
					totalEquipos++;
					totalEquiposTotal++;
					//equiposRegistrados++;
				}
				index2++;
			}
			if(totalEquipos != 0)
				temp.GetComponent<sucursalButtonScript>().porcentaje.text = (Mathf.Floor((online / totalEquipos)*100)).ToString() + "%";
			else
				temp.GetComponent<sucursalButtonScript>().porcentaje.text = "N/A";
			index++;
		}



	//	if(totalEquiposTotal != 0)
	//		porcentajeTotalText.text = (Mathf.Floor((onlineTotal / totalEquiposTotal)*100)).ToString() + "%";
		
	}



	public void BackToClientes ()
	{
		conectividaGeneral = 0;
		onlineTotal = 0;
		equiposRegistrados = 0;
		sucursalContainer.SetActive (false);
		sucursalShowSeleccionaText.SetActive (false);
		equiposRegistrados = 0;
		mainbackButton.SetActive (false);
		DestroySucursal ();
		DestroyChild ();
		idClienteSelected = 0;
		idSucursalSelected = 0;
		productoSelected = "";
		clienteSelected = "";
		InstantiateClientes ();
	}

	public void InstantiateClientes ()
	{
		equiposRegistrados = 0;
		onlineTotal = 0;
		conectividaGeneral = 0;
		DestroyCliente ();
		int ind = 0;
		int index2 = 0;
		int index = 0;

		float tempOnlinePorSucursal = 0;
		float tempEquiposTotalPorSucursal = 0;

		//foreach(Sucursal s in sucursal)
		foreach(Cliente s in clientes)
		{
			GameObject temp = Instantiate(clientePrefab) as GameObject;
			temp.name = clientes[ind].cliente.ToString();
			temp.GetComponent<clienteButtonScript>().controller = this.gameObject.GetComponent<Controller>();
			temp.GetComponent<clienteButtonScript>().ChangeText();
			temp.transform.SetParent(clienteContent.transform, false);

			online = 0;
			totalEquipos = 0;

			index = 0;


			foreach (Sucursal suc in clientes[ind].sucursales) {
				index2 = 0;
				foreach(Producto prod in clientes[ind].sucursales[index].producto)
				{

					foreach(Equipo equi in clientes[ind].sucursales[index].producto[index2].equipos)
					{

						if(equi.online)
						{
							online++;
							onlineTotalPorSucursal++;
							onlineTotal++;
							tempOnlinePorSucursal++;

						}
						totalEquipos++;
						totalEquiposTotal++;
						equiposRegistrados++;
						tempEquiposTotalPorSucursal++;

						conectividaGeneral = (Mathf.Floor ((onlineTotal / equiposRegistrados) * 100));
						textConectividaGeneral.text = (conectividaGeneral.ToString() + "%");
					}
					index2++;

				}
				index++;


			}

			if (totalEquiposTotal != 0) {
				temp.GetComponent<clienteButtonScript> ().porcentaje.text = (Mathf.Floor ((tempOnlinePorSucursal / tempEquiposTotalPorSucursal) * 100)).ToString () + "%";
			}
			else
				temp.GetComponent<clienteButtonScript>().porcentaje.text = "N/A";
			tempEquiposTotalPorSucursal = 0;
			tempOnlinePorSucursal = 0;
			ind++;

		}
		conectividaGeneral = (Mathf.Floor ((onlineTotal / equiposRegistrados) * 100));
		textConectividaGeneral.text = (conectividaGeneral.ToString() + "%");
		conectividadGeneralCircle.fillAmount = conectividaGeneral / 100;
		textEquiposRegistrados.text = equiposRegistrados.ToString ();;



	}

	public void InstantiateProductos ()
	{
		int index = 0;
		foreach (Producto p in clientes [idClienteSelected].sucursales[idSucursalSelected].producto) {
		
			GameObject temp = Instantiate (togglePrefab) as GameObject;
			temp.transform.SetParent (toggleContent, false);
			temp.name = clientes [idClienteSelected].sucursales [idSucursalSelected].producto [index].producto.ToString ();
			temp.GetComponent<ToggleScript>().controller = this.gameObject.GetComponent<Controller>();
			temp.GetComponent<ToggleScript> ().name = temp.name;
			temp.GetComponent<ToggleScript> ().myLabel.text = temp.name;
			if (index == 0) {
				temp.GetComponent<Toggle> ().isOn = true;
			}
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

	void OnApplicationFocus(bool focusStatus) 
	{
		if(focusStatus == true)
		{
			//UpdateInfo();
		}
	}


}
