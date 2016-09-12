#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.UI.Image
struct Image_t3354615620;
// UnityEngine.UI.Text
struct Text_t3286458198;
// System.Collections.Generic.List`1<Cliente>
struct List_1_t3322199763;
// System.Collections.Generic.List`1<Sucursal>
struct List_1_t3125891993;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_t284553113;
// UnityEngine.UI.ScrollRect
struct ScrollRect_t1048578170;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Controller
struct  Controller_t2630893500  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject Controller::sucursalContainer
	GameObject_t4012695102 * ___sucursalContainer_2;
	// UnityEngine.GameObject Controller::sucursalShowSeleccionaText
	GameObject_t4012695102 * ___sucursalShowSeleccionaText_3;
	// System.Single Controller::conectividaGeneral
	float ___conectividaGeneral_4;
	// UnityEngine.UI.Image Controller::conectividadGeneralCircle
	Image_t3354615620 * ___conectividadGeneralCircle_5;
	// System.Int32 Controller::equiposRegistrados
	int32_t ___equiposRegistrados_6;
	// UnityEngine.UI.Text Controller::textConectividaGeneral
	Text_t3286458198 * ___textConectividaGeneral_7;
	// UnityEngine.UI.Text Controller::textEquiposRegistrados
	Text_t3286458198 * ___textEquiposRegistrados_8;
	// UnityEngine.UI.Text Controller::seleccioneClienteSucursalText
	Text_t3286458198 * ___seleccioneClienteSucursalText_9;
	// System.Collections.Generic.List`1<Cliente> Controller::clientes
	List_1_t3322199763 * ___clientes_10;
	// System.Collections.Generic.List`1<Sucursal> Controller::sucursal
	List_1_t3125891993 * ___sucursal_11;
	// UnityEngine.GameObject Controller::homePanel
	GameObject_t4012695102 * ___homePanel_12;
	// UnityEngine.GameObject Controller::productoPanel
	GameObject_t4012695102 * ___productoPanel_13;
	// UnityEngine.UI.Text Controller::sucursalText
	Text_t3286458198 * ___sucursalText_14;
	// System.String Controller::clienteSelected
	String_t* ___clienteSelected_15;
	// System.String Controller::sucursalSelected
	String_t* ___sucursalSelected_16;
	// System.Int32 Controller::idSucursalSelected
	int32_t ___idSucursalSelected_17;
	// System.String Controller::productoSelected
	String_t* ___productoSelected_18;
	// System.Int32 Controller::idProductoSelected
	int32_t ___idProductoSelected_19;
	// System.Int32 Controller::idClienteSelected
	int32_t ___idClienteSelected_20;
	// UnityEngine.GameObject Controller::equipoPrefab
	GameObject_t4012695102 * ___equipoPrefab_21;
	// UnityEngine.GameObject Controller::equipoBlancoPrefab
	GameObject_t4012695102 * ___equipoBlancoPrefab_22;
	// UnityEngine.GameObject Controller::pingPrefab
	GameObject_t4012695102 * ___pingPrefab_23;
	// UnityEngine.Transform Controller::equiposContent
	Transform_t284553113 * ___equiposContent_24;
	// UnityEngine.GameObject Controller::clientePrefab
	GameObject_t4012695102 * ___clientePrefab_25;
	// UnityEngine.GameObject Controller::sucursalPrefab
	GameObject_t4012695102 * ___sucursalPrefab_26;
	// UnityEngine.Transform Controller::sucursalContent
	Transform_t284553113 * ___sucursalContent_27;
	// UnityEngine.Transform Controller::clienteContent
	Transform_t284553113 * ___clienteContent_28;
	// UnityEngine.GameObject Controller::togglePrefab
	GameObject_t4012695102 * ___togglePrefab_29;
	// UnityEngine.Transform Controller::toggleContent
	Transform_t284553113 * ___toggleContent_30;
	// UnityEngine.UI.ScrollRect Controller::scrollRectToggle
	ScrollRect_t1048578170 * ___scrollRectToggle_31;
	// UnityEngine.GameObject Controller::textSinInternet
	GameObject_t4012695102 * ___textSinInternet_32;
	// UnityEngine.UI.Text Controller::textSinInternetText
	Text_t3286458198 * ___textSinInternetText_33;
	// UnityEngine.UI.Image Controller::reloadImage
	Image_t3354615620 * ___reloadImage_34;
	// System.Boolean Controller::ping
	bool ___ping_35;
	// System.Single Controller::online
	float ___online_36;
	// System.Single Controller::totalEquipos
	float ___totalEquipos_37;
	// System.Single Controller::onlineTotalPorSucursal
	float ___onlineTotalPorSucursal_38;
	// System.Single Controller::onlineTotal
	float ___onlineTotal_39;
	// System.Single Controller::totalEquiposTotal
	float ___totalEquiposTotal_40;
	// UnityEngine.GameObject Controller::mainbackButton
	GameObject_t4012695102 * ___mainbackButton_41;

public:
	inline static int32_t get_offset_of_sucursalContainer_2() { return static_cast<int32_t>(offsetof(Controller_t2630893500, ___sucursalContainer_2)); }
	inline GameObject_t4012695102 * get_sucursalContainer_2() const { return ___sucursalContainer_2; }
	inline GameObject_t4012695102 ** get_address_of_sucursalContainer_2() { return &___sucursalContainer_2; }
	inline void set_sucursalContainer_2(GameObject_t4012695102 * value)
	{
		___sucursalContainer_2 = value;
		Il2CppCodeGenWriteBarrier(&___sucursalContainer_2, value);
	}

	inline static int32_t get_offset_of_sucursalShowSeleccionaText_3() { return static_cast<int32_t>(offsetof(Controller_t2630893500, ___sucursalShowSeleccionaText_3)); }
	inline GameObject_t4012695102 * get_sucursalShowSeleccionaText_3() const { return ___sucursalShowSeleccionaText_3; }
	inline GameObject_t4012695102 ** get_address_of_sucursalShowSeleccionaText_3() { return &___sucursalShowSeleccionaText_3; }
	inline void set_sucursalShowSeleccionaText_3(GameObject_t4012695102 * value)
	{
		___sucursalShowSeleccionaText_3 = value;
		Il2CppCodeGenWriteBarrier(&___sucursalShowSeleccionaText_3, value);
	}

	inline static int32_t get_offset_of_conectividaGeneral_4() { return static_cast<int32_t>(offsetof(Controller_t2630893500, ___conectividaGeneral_4)); }
	inline float get_conectividaGeneral_4() const { return ___conectividaGeneral_4; }
	inline float* get_address_of_conectividaGeneral_4() { return &___conectividaGeneral_4; }
	inline void set_conectividaGeneral_4(float value)
	{
		___conectividaGeneral_4 = value;
	}

	inline static int32_t get_offset_of_conectividadGeneralCircle_5() { return static_cast<int32_t>(offsetof(Controller_t2630893500, ___conectividadGeneralCircle_5)); }
	inline Image_t3354615620 * get_conectividadGeneralCircle_5() const { return ___conectividadGeneralCircle_5; }
	inline Image_t3354615620 ** get_address_of_conectividadGeneralCircle_5() { return &___conectividadGeneralCircle_5; }
	inline void set_conectividadGeneralCircle_5(Image_t3354615620 * value)
	{
		___conectividadGeneralCircle_5 = value;
		Il2CppCodeGenWriteBarrier(&___conectividadGeneralCircle_5, value);
	}

	inline static int32_t get_offset_of_equiposRegistrados_6() { return static_cast<int32_t>(offsetof(Controller_t2630893500, ___equiposRegistrados_6)); }
	inline int32_t get_equiposRegistrados_6() const { return ___equiposRegistrados_6; }
	inline int32_t* get_address_of_equiposRegistrados_6() { return &___equiposRegistrados_6; }
	inline void set_equiposRegistrados_6(int32_t value)
	{
		___equiposRegistrados_6 = value;
	}

	inline static int32_t get_offset_of_textConectividaGeneral_7() { return static_cast<int32_t>(offsetof(Controller_t2630893500, ___textConectividaGeneral_7)); }
	inline Text_t3286458198 * get_textConectividaGeneral_7() const { return ___textConectividaGeneral_7; }
	inline Text_t3286458198 ** get_address_of_textConectividaGeneral_7() { return &___textConectividaGeneral_7; }
	inline void set_textConectividaGeneral_7(Text_t3286458198 * value)
	{
		___textConectividaGeneral_7 = value;
		Il2CppCodeGenWriteBarrier(&___textConectividaGeneral_7, value);
	}

	inline static int32_t get_offset_of_textEquiposRegistrados_8() { return static_cast<int32_t>(offsetof(Controller_t2630893500, ___textEquiposRegistrados_8)); }
	inline Text_t3286458198 * get_textEquiposRegistrados_8() const { return ___textEquiposRegistrados_8; }
	inline Text_t3286458198 ** get_address_of_textEquiposRegistrados_8() { return &___textEquiposRegistrados_8; }
	inline void set_textEquiposRegistrados_8(Text_t3286458198 * value)
	{
		___textEquiposRegistrados_8 = value;
		Il2CppCodeGenWriteBarrier(&___textEquiposRegistrados_8, value);
	}

	inline static int32_t get_offset_of_seleccioneClienteSucursalText_9() { return static_cast<int32_t>(offsetof(Controller_t2630893500, ___seleccioneClienteSucursalText_9)); }
	inline Text_t3286458198 * get_seleccioneClienteSucursalText_9() const { return ___seleccioneClienteSucursalText_9; }
	inline Text_t3286458198 ** get_address_of_seleccioneClienteSucursalText_9() { return &___seleccioneClienteSucursalText_9; }
	inline void set_seleccioneClienteSucursalText_9(Text_t3286458198 * value)
	{
		___seleccioneClienteSucursalText_9 = value;
		Il2CppCodeGenWriteBarrier(&___seleccioneClienteSucursalText_9, value);
	}

	inline static int32_t get_offset_of_clientes_10() { return static_cast<int32_t>(offsetof(Controller_t2630893500, ___clientes_10)); }
	inline List_1_t3322199763 * get_clientes_10() const { return ___clientes_10; }
	inline List_1_t3322199763 ** get_address_of_clientes_10() { return &___clientes_10; }
	inline void set_clientes_10(List_1_t3322199763 * value)
	{
		___clientes_10 = value;
		Il2CppCodeGenWriteBarrier(&___clientes_10, value);
	}

	inline static int32_t get_offset_of_sucursal_11() { return static_cast<int32_t>(offsetof(Controller_t2630893500, ___sucursal_11)); }
	inline List_1_t3125891993 * get_sucursal_11() const { return ___sucursal_11; }
	inline List_1_t3125891993 ** get_address_of_sucursal_11() { return &___sucursal_11; }
	inline void set_sucursal_11(List_1_t3125891993 * value)
	{
		___sucursal_11 = value;
		Il2CppCodeGenWriteBarrier(&___sucursal_11, value);
	}

	inline static int32_t get_offset_of_homePanel_12() { return static_cast<int32_t>(offsetof(Controller_t2630893500, ___homePanel_12)); }
	inline GameObject_t4012695102 * get_homePanel_12() const { return ___homePanel_12; }
	inline GameObject_t4012695102 ** get_address_of_homePanel_12() { return &___homePanel_12; }
	inline void set_homePanel_12(GameObject_t4012695102 * value)
	{
		___homePanel_12 = value;
		Il2CppCodeGenWriteBarrier(&___homePanel_12, value);
	}

	inline static int32_t get_offset_of_productoPanel_13() { return static_cast<int32_t>(offsetof(Controller_t2630893500, ___productoPanel_13)); }
	inline GameObject_t4012695102 * get_productoPanel_13() const { return ___productoPanel_13; }
	inline GameObject_t4012695102 ** get_address_of_productoPanel_13() { return &___productoPanel_13; }
	inline void set_productoPanel_13(GameObject_t4012695102 * value)
	{
		___productoPanel_13 = value;
		Il2CppCodeGenWriteBarrier(&___productoPanel_13, value);
	}

	inline static int32_t get_offset_of_sucursalText_14() { return static_cast<int32_t>(offsetof(Controller_t2630893500, ___sucursalText_14)); }
	inline Text_t3286458198 * get_sucursalText_14() const { return ___sucursalText_14; }
	inline Text_t3286458198 ** get_address_of_sucursalText_14() { return &___sucursalText_14; }
	inline void set_sucursalText_14(Text_t3286458198 * value)
	{
		___sucursalText_14 = value;
		Il2CppCodeGenWriteBarrier(&___sucursalText_14, value);
	}

	inline static int32_t get_offset_of_clienteSelected_15() { return static_cast<int32_t>(offsetof(Controller_t2630893500, ___clienteSelected_15)); }
	inline String_t* get_clienteSelected_15() const { return ___clienteSelected_15; }
	inline String_t** get_address_of_clienteSelected_15() { return &___clienteSelected_15; }
	inline void set_clienteSelected_15(String_t* value)
	{
		___clienteSelected_15 = value;
		Il2CppCodeGenWriteBarrier(&___clienteSelected_15, value);
	}

	inline static int32_t get_offset_of_sucursalSelected_16() { return static_cast<int32_t>(offsetof(Controller_t2630893500, ___sucursalSelected_16)); }
	inline String_t* get_sucursalSelected_16() const { return ___sucursalSelected_16; }
	inline String_t** get_address_of_sucursalSelected_16() { return &___sucursalSelected_16; }
	inline void set_sucursalSelected_16(String_t* value)
	{
		___sucursalSelected_16 = value;
		Il2CppCodeGenWriteBarrier(&___sucursalSelected_16, value);
	}

	inline static int32_t get_offset_of_idSucursalSelected_17() { return static_cast<int32_t>(offsetof(Controller_t2630893500, ___idSucursalSelected_17)); }
	inline int32_t get_idSucursalSelected_17() const { return ___idSucursalSelected_17; }
	inline int32_t* get_address_of_idSucursalSelected_17() { return &___idSucursalSelected_17; }
	inline void set_idSucursalSelected_17(int32_t value)
	{
		___idSucursalSelected_17 = value;
	}

	inline static int32_t get_offset_of_productoSelected_18() { return static_cast<int32_t>(offsetof(Controller_t2630893500, ___productoSelected_18)); }
	inline String_t* get_productoSelected_18() const { return ___productoSelected_18; }
	inline String_t** get_address_of_productoSelected_18() { return &___productoSelected_18; }
	inline void set_productoSelected_18(String_t* value)
	{
		___productoSelected_18 = value;
		Il2CppCodeGenWriteBarrier(&___productoSelected_18, value);
	}

	inline static int32_t get_offset_of_idProductoSelected_19() { return static_cast<int32_t>(offsetof(Controller_t2630893500, ___idProductoSelected_19)); }
	inline int32_t get_idProductoSelected_19() const { return ___idProductoSelected_19; }
	inline int32_t* get_address_of_idProductoSelected_19() { return &___idProductoSelected_19; }
	inline void set_idProductoSelected_19(int32_t value)
	{
		___idProductoSelected_19 = value;
	}

	inline static int32_t get_offset_of_idClienteSelected_20() { return static_cast<int32_t>(offsetof(Controller_t2630893500, ___idClienteSelected_20)); }
	inline int32_t get_idClienteSelected_20() const { return ___idClienteSelected_20; }
	inline int32_t* get_address_of_idClienteSelected_20() { return &___idClienteSelected_20; }
	inline void set_idClienteSelected_20(int32_t value)
	{
		___idClienteSelected_20 = value;
	}

	inline static int32_t get_offset_of_equipoPrefab_21() { return static_cast<int32_t>(offsetof(Controller_t2630893500, ___equipoPrefab_21)); }
	inline GameObject_t4012695102 * get_equipoPrefab_21() const { return ___equipoPrefab_21; }
	inline GameObject_t4012695102 ** get_address_of_equipoPrefab_21() { return &___equipoPrefab_21; }
	inline void set_equipoPrefab_21(GameObject_t4012695102 * value)
	{
		___equipoPrefab_21 = value;
		Il2CppCodeGenWriteBarrier(&___equipoPrefab_21, value);
	}

	inline static int32_t get_offset_of_equipoBlancoPrefab_22() { return static_cast<int32_t>(offsetof(Controller_t2630893500, ___equipoBlancoPrefab_22)); }
	inline GameObject_t4012695102 * get_equipoBlancoPrefab_22() const { return ___equipoBlancoPrefab_22; }
	inline GameObject_t4012695102 ** get_address_of_equipoBlancoPrefab_22() { return &___equipoBlancoPrefab_22; }
	inline void set_equipoBlancoPrefab_22(GameObject_t4012695102 * value)
	{
		___equipoBlancoPrefab_22 = value;
		Il2CppCodeGenWriteBarrier(&___equipoBlancoPrefab_22, value);
	}

	inline static int32_t get_offset_of_pingPrefab_23() { return static_cast<int32_t>(offsetof(Controller_t2630893500, ___pingPrefab_23)); }
	inline GameObject_t4012695102 * get_pingPrefab_23() const { return ___pingPrefab_23; }
	inline GameObject_t4012695102 ** get_address_of_pingPrefab_23() { return &___pingPrefab_23; }
	inline void set_pingPrefab_23(GameObject_t4012695102 * value)
	{
		___pingPrefab_23 = value;
		Il2CppCodeGenWriteBarrier(&___pingPrefab_23, value);
	}

	inline static int32_t get_offset_of_equiposContent_24() { return static_cast<int32_t>(offsetof(Controller_t2630893500, ___equiposContent_24)); }
	inline Transform_t284553113 * get_equiposContent_24() const { return ___equiposContent_24; }
	inline Transform_t284553113 ** get_address_of_equiposContent_24() { return &___equiposContent_24; }
	inline void set_equiposContent_24(Transform_t284553113 * value)
	{
		___equiposContent_24 = value;
		Il2CppCodeGenWriteBarrier(&___equiposContent_24, value);
	}

	inline static int32_t get_offset_of_clientePrefab_25() { return static_cast<int32_t>(offsetof(Controller_t2630893500, ___clientePrefab_25)); }
	inline GameObject_t4012695102 * get_clientePrefab_25() const { return ___clientePrefab_25; }
	inline GameObject_t4012695102 ** get_address_of_clientePrefab_25() { return &___clientePrefab_25; }
	inline void set_clientePrefab_25(GameObject_t4012695102 * value)
	{
		___clientePrefab_25 = value;
		Il2CppCodeGenWriteBarrier(&___clientePrefab_25, value);
	}

	inline static int32_t get_offset_of_sucursalPrefab_26() { return static_cast<int32_t>(offsetof(Controller_t2630893500, ___sucursalPrefab_26)); }
	inline GameObject_t4012695102 * get_sucursalPrefab_26() const { return ___sucursalPrefab_26; }
	inline GameObject_t4012695102 ** get_address_of_sucursalPrefab_26() { return &___sucursalPrefab_26; }
	inline void set_sucursalPrefab_26(GameObject_t4012695102 * value)
	{
		___sucursalPrefab_26 = value;
		Il2CppCodeGenWriteBarrier(&___sucursalPrefab_26, value);
	}

	inline static int32_t get_offset_of_sucursalContent_27() { return static_cast<int32_t>(offsetof(Controller_t2630893500, ___sucursalContent_27)); }
	inline Transform_t284553113 * get_sucursalContent_27() const { return ___sucursalContent_27; }
	inline Transform_t284553113 ** get_address_of_sucursalContent_27() { return &___sucursalContent_27; }
	inline void set_sucursalContent_27(Transform_t284553113 * value)
	{
		___sucursalContent_27 = value;
		Il2CppCodeGenWriteBarrier(&___sucursalContent_27, value);
	}

	inline static int32_t get_offset_of_clienteContent_28() { return static_cast<int32_t>(offsetof(Controller_t2630893500, ___clienteContent_28)); }
	inline Transform_t284553113 * get_clienteContent_28() const { return ___clienteContent_28; }
	inline Transform_t284553113 ** get_address_of_clienteContent_28() { return &___clienteContent_28; }
	inline void set_clienteContent_28(Transform_t284553113 * value)
	{
		___clienteContent_28 = value;
		Il2CppCodeGenWriteBarrier(&___clienteContent_28, value);
	}

	inline static int32_t get_offset_of_togglePrefab_29() { return static_cast<int32_t>(offsetof(Controller_t2630893500, ___togglePrefab_29)); }
	inline GameObject_t4012695102 * get_togglePrefab_29() const { return ___togglePrefab_29; }
	inline GameObject_t4012695102 ** get_address_of_togglePrefab_29() { return &___togglePrefab_29; }
	inline void set_togglePrefab_29(GameObject_t4012695102 * value)
	{
		___togglePrefab_29 = value;
		Il2CppCodeGenWriteBarrier(&___togglePrefab_29, value);
	}

	inline static int32_t get_offset_of_toggleContent_30() { return static_cast<int32_t>(offsetof(Controller_t2630893500, ___toggleContent_30)); }
	inline Transform_t284553113 * get_toggleContent_30() const { return ___toggleContent_30; }
	inline Transform_t284553113 ** get_address_of_toggleContent_30() { return &___toggleContent_30; }
	inline void set_toggleContent_30(Transform_t284553113 * value)
	{
		___toggleContent_30 = value;
		Il2CppCodeGenWriteBarrier(&___toggleContent_30, value);
	}

	inline static int32_t get_offset_of_scrollRectToggle_31() { return static_cast<int32_t>(offsetof(Controller_t2630893500, ___scrollRectToggle_31)); }
	inline ScrollRect_t1048578170 * get_scrollRectToggle_31() const { return ___scrollRectToggle_31; }
	inline ScrollRect_t1048578170 ** get_address_of_scrollRectToggle_31() { return &___scrollRectToggle_31; }
	inline void set_scrollRectToggle_31(ScrollRect_t1048578170 * value)
	{
		___scrollRectToggle_31 = value;
		Il2CppCodeGenWriteBarrier(&___scrollRectToggle_31, value);
	}

	inline static int32_t get_offset_of_textSinInternet_32() { return static_cast<int32_t>(offsetof(Controller_t2630893500, ___textSinInternet_32)); }
	inline GameObject_t4012695102 * get_textSinInternet_32() const { return ___textSinInternet_32; }
	inline GameObject_t4012695102 ** get_address_of_textSinInternet_32() { return &___textSinInternet_32; }
	inline void set_textSinInternet_32(GameObject_t4012695102 * value)
	{
		___textSinInternet_32 = value;
		Il2CppCodeGenWriteBarrier(&___textSinInternet_32, value);
	}

	inline static int32_t get_offset_of_textSinInternetText_33() { return static_cast<int32_t>(offsetof(Controller_t2630893500, ___textSinInternetText_33)); }
	inline Text_t3286458198 * get_textSinInternetText_33() const { return ___textSinInternetText_33; }
	inline Text_t3286458198 ** get_address_of_textSinInternetText_33() { return &___textSinInternetText_33; }
	inline void set_textSinInternetText_33(Text_t3286458198 * value)
	{
		___textSinInternetText_33 = value;
		Il2CppCodeGenWriteBarrier(&___textSinInternetText_33, value);
	}

	inline static int32_t get_offset_of_reloadImage_34() { return static_cast<int32_t>(offsetof(Controller_t2630893500, ___reloadImage_34)); }
	inline Image_t3354615620 * get_reloadImage_34() const { return ___reloadImage_34; }
	inline Image_t3354615620 ** get_address_of_reloadImage_34() { return &___reloadImage_34; }
	inline void set_reloadImage_34(Image_t3354615620 * value)
	{
		___reloadImage_34 = value;
		Il2CppCodeGenWriteBarrier(&___reloadImage_34, value);
	}

	inline static int32_t get_offset_of_ping_35() { return static_cast<int32_t>(offsetof(Controller_t2630893500, ___ping_35)); }
	inline bool get_ping_35() const { return ___ping_35; }
	inline bool* get_address_of_ping_35() { return &___ping_35; }
	inline void set_ping_35(bool value)
	{
		___ping_35 = value;
	}

	inline static int32_t get_offset_of_online_36() { return static_cast<int32_t>(offsetof(Controller_t2630893500, ___online_36)); }
	inline float get_online_36() const { return ___online_36; }
	inline float* get_address_of_online_36() { return &___online_36; }
	inline void set_online_36(float value)
	{
		___online_36 = value;
	}

	inline static int32_t get_offset_of_totalEquipos_37() { return static_cast<int32_t>(offsetof(Controller_t2630893500, ___totalEquipos_37)); }
	inline float get_totalEquipos_37() const { return ___totalEquipos_37; }
	inline float* get_address_of_totalEquipos_37() { return &___totalEquipos_37; }
	inline void set_totalEquipos_37(float value)
	{
		___totalEquipos_37 = value;
	}

	inline static int32_t get_offset_of_onlineTotalPorSucursal_38() { return static_cast<int32_t>(offsetof(Controller_t2630893500, ___onlineTotalPorSucursal_38)); }
	inline float get_onlineTotalPorSucursal_38() const { return ___onlineTotalPorSucursal_38; }
	inline float* get_address_of_onlineTotalPorSucursal_38() { return &___onlineTotalPorSucursal_38; }
	inline void set_onlineTotalPorSucursal_38(float value)
	{
		___onlineTotalPorSucursal_38 = value;
	}

	inline static int32_t get_offset_of_onlineTotal_39() { return static_cast<int32_t>(offsetof(Controller_t2630893500, ___onlineTotal_39)); }
	inline float get_onlineTotal_39() const { return ___onlineTotal_39; }
	inline float* get_address_of_onlineTotal_39() { return &___onlineTotal_39; }
	inline void set_onlineTotal_39(float value)
	{
		___onlineTotal_39 = value;
	}

	inline static int32_t get_offset_of_totalEquiposTotal_40() { return static_cast<int32_t>(offsetof(Controller_t2630893500, ___totalEquiposTotal_40)); }
	inline float get_totalEquiposTotal_40() const { return ___totalEquiposTotal_40; }
	inline float* get_address_of_totalEquiposTotal_40() { return &___totalEquiposTotal_40; }
	inline void set_totalEquiposTotal_40(float value)
	{
		___totalEquiposTotal_40 = value;
	}

	inline static int32_t get_offset_of_mainbackButton_41() { return static_cast<int32_t>(offsetof(Controller_t2630893500, ___mainbackButton_41)); }
	inline GameObject_t4012695102 * get_mainbackButton_41() const { return ___mainbackButton_41; }
	inline GameObject_t4012695102 ** get_address_of_mainbackButton_41() { return &___mainbackButton_41; }
	inline void set_mainbackButton_41(GameObject_t4012695102 * value)
	{
		___mainbackButton_41 = value;
		Il2CppCodeGenWriteBarrier(&___mainbackButton_41, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
