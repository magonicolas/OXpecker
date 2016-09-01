using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class EquipoScript : MonoBehaviour 
{
	public Color onlineColor;
	public Color offlineColor;
	public Image onlineImage;
	public bool online;
	public string id;
	public Text idText;
	public string ultimaConexion;
	public Text ultimaconexionText;
	public string hora;
	public Text horaText;
	public string idPunto;
	public Text idPuntoText;
	public string version;
	public Text versionText;
	public string mac;
	public Text macText;



	public void SetEquipos ()
	{
		if(online)
			onlineImage.color = onlineColor;
		else
			onlineImage.color = offlineColor;
		idText.text = id;
		ultimaconexionText.text = ultimaConexion;
		horaText.text = hora;
		idPuntoText.text = idPunto;
		versionText.text = version;
		macText.text = mac;
	}

}
