using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class ToggleScript : MonoBehaviour {

	public string name;
	public Controller controller;
	public Text myLabel;

	public Toggle myToggle;

	void Start ()
	{
		myToggle.group = gameObject.transform.parent.GetComponent<ToggleGroup>();
	}

	public void SetProducto ()
	{
		controller.SetProducto (name);
	}
}
