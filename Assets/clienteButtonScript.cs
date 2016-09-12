using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class clienteButtonScript : MonoBehaviour {

	public Controller controller;
	public Text cliente;
	public Text porcentaje;

	public void ButtonPressed ()
	{
		controller.clienteSelected = gameObject.name;
		controller.InstantiateSucursales ();
		//controller.GoToProductoPanel();
	}

	public void ChangeText ()
	{
		//cliente.text = gameObject.name.ToString();
	}
}
