using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class clienteButtonScript : MonoBehaviour {

	public Controller controller;
	public Text cliente;
	public Text porcentaje;

	public Image logo;
	public string logoString;
	public Sprite mySprite;

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

	public void LoadImage ()
	{
		StartCoroutine (LoadFromWeb());
	}

	private IEnumerator LoadFromWeb () 
	{
		if(ES2.Exists("myFile.txt?tag=mySprite" + logoString)) 
		{
			mySprite = ES2.Load<Sprite>("myFile.txt?tag=mySprite" + logoString);
			logo.sprite = mySprite;
		}
		else
		{
			WWW imageURLWWW = new WWW(logoString);  

			while(!imageURLWWW.isDone)
			{
				yield return new WaitForSeconds (0.01f);
			}
			if(imageURLWWW.texture != null) {

				Sprite sprite = new Sprite();  
				logo.gameObject.transform.rotation = Quaternion.identity;
				sprite = Sprite.Create(imageURLWWW.texture, new Rect(0, 0, 128, 128), Vector2.zero);  
				mySprite = sprite;
				logo.sprite = mySprite;
				//ES2.Save(link, "link" + imagen);
				ES2.Save(mySprite, "myFile.txt?tag=mySprite" + logoString);

			}
		}
		yield return null;

	}
}
