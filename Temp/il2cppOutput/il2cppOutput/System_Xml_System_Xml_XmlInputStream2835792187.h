﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Text.Encoding
struct Encoding_t180559927;
// System.IO.Stream
struct Stream_t219029575;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Xml.XmlException
struct XmlException_t3490696160;

#include "mscorlib_System_IO_Stream219029575.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlInputStream
struct  XmlInputStream_t2835792187  : public Stream_t219029575
{
public:
	// System.Text.Encoding System.Xml.XmlInputStream::enc
	Encoding_t180559927 * ___enc_2;
	// System.IO.Stream System.Xml.XmlInputStream::stream
	Stream_t219029575 * ___stream_3;
	// System.Byte[] System.Xml.XmlInputStream::buffer
	ByteU5BU5D_t58506160* ___buffer_4;
	// System.Int32 System.Xml.XmlInputStream::bufLength
	int32_t ___bufLength_5;
	// System.Int32 System.Xml.XmlInputStream::bufPos
	int32_t ___bufPos_6;

public:
	inline static int32_t get_offset_of_enc_2() { return static_cast<int32_t>(offsetof(XmlInputStream_t2835792187, ___enc_2)); }
	inline Encoding_t180559927 * get_enc_2() const { return ___enc_2; }
	inline Encoding_t180559927 ** get_address_of_enc_2() { return &___enc_2; }
	inline void set_enc_2(Encoding_t180559927 * value)
	{
		___enc_2 = value;
		Il2CppCodeGenWriteBarrier(&___enc_2, value);
	}

	inline static int32_t get_offset_of_stream_3() { return static_cast<int32_t>(offsetof(XmlInputStream_t2835792187, ___stream_3)); }
	inline Stream_t219029575 * get_stream_3() const { return ___stream_3; }
	inline Stream_t219029575 ** get_address_of_stream_3() { return &___stream_3; }
	inline void set_stream_3(Stream_t219029575 * value)
	{
		___stream_3 = value;
		Il2CppCodeGenWriteBarrier(&___stream_3, value);
	}

	inline static int32_t get_offset_of_buffer_4() { return static_cast<int32_t>(offsetof(XmlInputStream_t2835792187, ___buffer_4)); }
	inline ByteU5BU5D_t58506160* get_buffer_4() const { return ___buffer_4; }
	inline ByteU5BU5D_t58506160** get_address_of_buffer_4() { return &___buffer_4; }
	inline void set_buffer_4(ByteU5BU5D_t58506160* value)
	{
		___buffer_4 = value;
		Il2CppCodeGenWriteBarrier(&___buffer_4, value);
	}

	inline static int32_t get_offset_of_bufLength_5() { return static_cast<int32_t>(offsetof(XmlInputStream_t2835792187, ___bufLength_5)); }
	inline int32_t get_bufLength_5() const { return ___bufLength_5; }
	inline int32_t* get_address_of_bufLength_5() { return &___bufLength_5; }
	inline void set_bufLength_5(int32_t value)
	{
		___bufLength_5 = value;
	}

	inline static int32_t get_offset_of_bufPos_6() { return static_cast<int32_t>(offsetof(XmlInputStream_t2835792187, ___bufPos_6)); }
	inline int32_t get_bufPos_6() const { return ___bufPos_6; }
	inline int32_t* get_address_of_bufPos_6() { return &___bufPos_6; }
	inline void set_bufPos_6(int32_t value)
	{
		___bufPos_6 = value;
	}
};

struct XmlInputStream_t2835792187_StaticFields
{
public:
	// System.Text.Encoding System.Xml.XmlInputStream::StrictUTF8
	Encoding_t180559927 * ___StrictUTF8_1;
	// System.Xml.XmlException System.Xml.XmlInputStream::encodingException
	XmlException_t3490696160 * ___encodingException_7;

public:
	inline static int32_t get_offset_of_StrictUTF8_1() { return static_cast<int32_t>(offsetof(XmlInputStream_t2835792187_StaticFields, ___StrictUTF8_1)); }
	inline Encoding_t180559927 * get_StrictUTF8_1() const { return ___StrictUTF8_1; }
	inline Encoding_t180559927 ** get_address_of_StrictUTF8_1() { return &___StrictUTF8_1; }
	inline void set_StrictUTF8_1(Encoding_t180559927 * value)
	{
		___StrictUTF8_1 = value;
		Il2CppCodeGenWriteBarrier(&___StrictUTF8_1, value);
	}

	inline static int32_t get_offset_of_encodingException_7() { return static_cast<int32_t>(offsetof(XmlInputStream_t2835792187_StaticFields, ___encodingException_7)); }
	inline XmlException_t3490696160 * get_encodingException_7() const { return ___encodingException_7; }
	inline XmlException_t3490696160 ** get_address_of_encodingException_7() { return &___encodingException_7; }
	inline void set_encodingException_7(XmlException_t3490696160 * value)
	{
		___encodingException_7 = value;
		Il2CppCodeGenWriteBarrier(&___encodingException_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
