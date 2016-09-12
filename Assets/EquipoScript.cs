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

	public Image logo;
	public string logoString;
	public Sprite mySprite;

	public GameObject textVersion;
	public GameObject textId;
	public GameObject textUltimaConexion;
	public GameObject textHora;
	public GameObject textModelo;
	public GameObject textIdPunto;

	public bool showingBasic = true;

	public void handleWhatToShow ()
	{
		if (showingBasic) {
			textVersion.SetActive (true);
			textId.SetActive (true);
			textUltimaConexion.SetActive (true);
			textHora.SetActive (true);
			textModelo.SetActive (false);
			textIdPunto.SetActive (false);
		} else {
			textVersion.SetActive (false);
			textId.SetActive (true);
			textUltimaConexion.SetActive (false);
			textHora.SetActive (false);
			textModelo.SetActive (true);
			textIdPunto.SetActive (true);
		}
	}

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

	public void toggleShowingBasic ()
	{
		showingBasic = !showingBasic;
		handleWhatToShow ();
	}



}
