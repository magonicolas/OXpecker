﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t3253021914;

#include "System_Xml_System_Xml_XmlNode3592213601.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlLinkedNode
struct  XmlLinkedNode_t3253021914  : public XmlNode_t3592213601
{
public:
	// System.Xml.XmlLinkedNode System.Xml.XmlLinkedNode::nextSibling
	XmlLinkedNode_t3253021914 * ___nextSibling_6;

public:
	inline static int32_t get_offset_of_nextSibling_6() { return static_cast<int32_t>(offsetof(XmlLinkedNode_t3253021914, ___nextSibling_6)); }
	inline XmlLinkedNode_t3253021914 * get_nextSibling_6() const { return ___nextSibling_6; }
	inline XmlLinkedNode_t3253021914 ** get_address_of_nextSibling_6() { return &___nextSibling_6; }
	inline void set_nextSibling_6(XmlLinkedNode_t3253021914 * value)
	{
		___nextSibling_6 = value;
		Il2CppCodeGenWriteBarrier(&___nextSibling_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
