struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

}

void RegisterAllClasses()
{
	//Total: 73 classes
	//0. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//1. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//2. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//3. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//4. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//5. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//6. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//7. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//8. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//9. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//10. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//11. NetworkView
	void RegisterClass_NetworkView();
	RegisterClass_NetworkView();

	//12. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//13. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//14. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//15. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//16. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//17. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//18. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//19. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//20. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//21. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//22. BoxCollider
	void RegisterClass_BoxCollider();
	RegisterClass_BoxCollider();

	//23. SphereCollider
	void RegisterClass_SphereCollider();
	RegisterClass_SphereCollider();

	//24. MeshCollider
	void RegisterClass_MeshCollider();
	RegisterClass_MeshCollider();

	//25. CapsuleCollider
	void RegisterClass_CapsuleCollider();
	RegisterClass_CapsuleCollider();

	//26. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//27. PolygonCollider2D
	void RegisterClass_PolygonCollider2D();
	RegisterClass_PolygonCollider2D();

	//28. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//29. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//30. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//31. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//32. TextMesh
	void RegisterClass_TextMesh();
	RegisterClass_TextMesh();

	//33. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//34. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//35. CanvasGroup
	void RegisterClass_CanvasGroup();
	RegisterClass_CanvasGroup();

	//36. CanvasRenderer
	void RegisterClass_CanvasRenderer();
	RegisterClass_CanvasRenderer();

	//37. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//38. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//39. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//40. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//41. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//42. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//43. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//44. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//45. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//46. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//47. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//48. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//49. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//50. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//51. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//52. AnimationClip
	void RegisterClass_AnimationClip();
	RegisterClass_AnimationClip();

	//53. Motion
	void RegisterClass_Motion();
	RegisterClass_Motion();

	//54. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//55. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//56. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//57. AnimatorController
	void RegisterClass_AnimatorController();
	RegisterClass_AnimatorController();

	//58. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//59. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//60. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//61. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//62. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//63. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//64. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//65. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//66. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//67. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//68. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//69. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//70. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//71. LightProbes
	void RegisterClass_LightProbes();
	RegisterClass_LightProbes();

	//72. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

}
