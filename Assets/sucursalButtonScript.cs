using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class sucursalButtonScript : MonoBehaviour 
{
	public Controller controller;
	public Text sucursal;
	public Text porcentaje;

	public void ButtonPressed ()
	{
		controller.sucursalSelected = gameObject.name;
		controller.GoToProductoPanel();
	}

	public void ChangeText ()
	{
		sucursal.text = gameObject.name.ToString();
	}

}
