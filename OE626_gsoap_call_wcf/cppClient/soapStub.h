/* soapStub.h
   Generated by gSOAP 2.8.22 from calc.h

Copyright(C) 2000-2015, Robert van Engelen, Genivia Inc. All Rights Reserved.
The generated code is released under one of the following licenses:
GPL or Genivia's license for commercial use.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
*/

#ifndef soapStub_H
#define soapStub_H
#define SOAP_NAMESPACE_OF_JR2	"http://o2.jrrpc.com/Imports"
#define SOAP_NAMESPACE_OF_JR3	"http://o2.jrrpc.com/"
#define SOAP_NAMESPACE_OF_JR4	"http://schemas.microsoft.com/2003/10/Serialization/"
#include "stdsoap2.h"
#if GSOAP_VERSION != 20822
# error "GSOAP VERSION 20822 MISMATCH IN GENERATED CODE VERSUS LIBRARY CODE: PLEASE REINSTALL PACKAGE"
#endif


/******************************************************************************\
 *                                                                            *
 * Enumerations                                                               *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Types with Custom Serializers                                              *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Classes and Structs                                                        *
 *                                                                            *
\******************************************************************************/


#if 0 /* volatile type: do not declare here, declared elsewhere */

#endif

#ifndef SOAP_TYPE_xsd__anyType
#define SOAP_TYPE_xsd__anyType (7)
/* Primitive xsd:anyType schema type: */
class SOAP_CMAC xsd__anyType
{
public:
	char *__item;
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 7; } /* = unique type id SOAP_TYPE_xsd__anyType */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         xsd__anyType() { xsd__anyType::soap_default(NULL); }
	virtual ~xsd__anyType() { }
};
#endif

#ifndef SOAP_TYPE_xsd__base64Binary
#define SOAP_TYPE_xsd__base64Binary (9)
/* Base64 schema type: */
class SOAP_CMAC xsd__base64Binary
{
public:
	unsigned char *__ptr;
	int __size;
	char *id;	/* optional element of type xsd:string */
	char *type;	/* optional element of type xsd:string */
	char *options;	/* optional element of type xsd:string */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 9; } /* = unique type id SOAP_TYPE_xsd__base64Binary */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         xsd__base64Binary() { xsd__base64Binary::soap_default(NULL); }
	virtual ~xsd__base64Binary() { }
};
#endif

#ifndef SOAP_TYPE_xsd__ID_
#define SOAP_TYPE_xsd__ID_ (16)
/* Primitive xsd:ID schema type: */
class SOAP_CMAC xsd__ID_ : public xsd__anyType
{
public:
	char *__item;
public:
	virtual int soap_type() const { return 16; } /* = unique type id SOAP_TYPE_xsd__ID_ */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         xsd__ID_() { xsd__ID_::soap_default(NULL); }
	virtual ~xsd__ID_() { }
};
#endif

#ifndef SOAP_TYPE_xsd__IDREF_
#define SOAP_TYPE_xsd__IDREF_ (18)
/* Primitive xsd:IDREF schema type: */
class SOAP_CMAC xsd__IDREF_ : public xsd__anyType
{
public:
	char *__item;
public:
	virtual int soap_type() const { return 18; } /* = unique type id SOAP_TYPE_xsd__IDREF_ */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         xsd__IDREF_() { xsd__IDREF_::soap_default(NULL); }
	virtual ~xsd__IDREF_() { }
};
#endif

#ifndef SOAP_TYPE_xsd__QName
#define SOAP_TYPE_xsd__QName (19)
/* Primitive xsd:QName schema type: */
class SOAP_CMAC xsd__QName : public xsd__anyType
{
public:
	char *__item;
public:
	virtual int soap_type() const { return 19; } /* = unique type id SOAP_TYPE_xsd__QName */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         xsd__QName() { xsd__QName::soap_default(NULL); }
	virtual ~xsd__QName() { }
};
#endif

#ifndef SOAP_TYPE_xsd__anyURI_
#define SOAP_TYPE_xsd__anyURI_ (21)
/* Primitive xsd:anyURI schema type: */
class SOAP_CMAC xsd__anyURI_ : public xsd__anyType
{
public:
	char *__item;
public:
	virtual int soap_type() const { return 21; } /* = unique type id SOAP_TYPE_xsd__anyURI_ */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         xsd__anyURI_() { xsd__anyURI_::soap_default(NULL); }
	virtual ~xsd__anyURI_() { }
};
#endif

#ifndef SOAP_TYPE_xsd__base64Binary_
#define SOAP_TYPE_xsd__base64Binary_ (22)
/* Primitive xsd:base64Binary schema type: */
class SOAP_CMAC xsd__base64Binary_ : public xsd__anyType
{
public:
	xsd__base64Binary __item;
public:
	virtual int soap_type() const { return 22; } /* = unique type id SOAP_TYPE_xsd__base64Binary_ */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         xsd__base64Binary_() { xsd__base64Binary_::soap_default(NULL); }
	virtual ~xsd__base64Binary_() { }
};
#endif

#ifndef SOAP_TYPE_xsd__boolean
#define SOAP_TYPE_xsd__boolean (23)
/* Primitive xsd:boolean schema type: */
class SOAP_CMAC xsd__boolean : public xsd__anyType
{
public:
	bool __item;
public:
	virtual int soap_type() const { return 23; } /* = unique type id SOAP_TYPE_xsd__boolean */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         xsd__boolean() { xsd__boolean::soap_default(NULL); }
	virtual ~xsd__boolean() { }
};
#endif

#ifndef SOAP_TYPE_xsd__byte_
#define SOAP_TYPE_xsd__byte_ (25)
/* Primitive xsd:byte schema type: */
class SOAP_CMAC xsd__byte_ : public xsd__anyType
{
public:
	char __item;
public:
	virtual int soap_type() const { return 25; } /* = unique type id SOAP_TYPE_xsd__byte_ */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         xsd__byte_() { xsd__byte_::soap_default(NULL); }
	virtual ~xsd__byte_() { }
};
#endif

#ifndef SOAP_TYPE_xsd__dateTime
#define SOAP_TYPE_xsd__dateTime (26)
/* Primitive xsd:dateTime schema type: */
class SOAP_CMAC xsd__dateTime : public xsd__anyType
{
public:
	time_t __item;
public:
	virtual int soap_type() const { return 26; } /* = unique type id SOAP_TYPE_xsd__dateTime */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         xsd__dateTime() { xsd__dateTime::soap_default(NULL); }
	virtual ~xsd__dateTime() { }
};
#endif

#ifndef SOAP_TYPE_xsd__decimal_
#define SOAP_TYPE_xsd__decimal_ (29)
/* Primitive xsd:decimal schema type: */
class SOAP_CMAC xsd__decimal_ : public xsd__anyType
{
public:
	char *__item;
public:
	virtual int soap_type() const { return 29; } /* = unique type id SOAP_TYPE_xsd__decimal_ */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         xsd__decimal_() { xsd__decimal_::soap_default(NULL); }
	virtual ~xsd__decimal_() { }
};
#endif

#ifndef SOAP_TYPE_xsd__double
#define SOAP_TYPE_xsd__double (30)
/* Primitive xsd:double schema type: */
class SOAP_CMAC xsd__double : public xsd__anyType
{
public:
	double __item;
public:
	virtual int soap_type() const { return 30; } /* = unique type id SOAP_TYPE_xsd__double */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         xsd__double() { xsd__double::soap_default(NULL); }
	virtual ~xsd__double() { }
};
#endif

#ifndef SOAP_TYPE_xsd__duration_
#define SOAP_TYPE_xsd__duration_ (33)
/* Primitive xsd:duration schema type: */
class SOAP_CMAC xsd__duration_ : public xsd__anyType
{
public:
	char *__item;
public:
	virtual int soap_type() const { return 33; } /* = unique type id SOAP_TYPE_xsd__duration_ */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         xsd__duration_() { xsd__duration_::soap_default(NULL); }
	virtual ~xsd__duration_() { }
};
#endif

#ifndef SOAP_TYPE_xsd__float
#define SOAP_TYPE_xsd__float (34)
/* Primitive xsd:float schema type: */
class SOAP_CMAC xsd__float : public xsd__anyType
{
public:
	float __item;
public:
	virtual int soap_type() const { return 34; } /* = unique type id SOAP_TYPE_xsd__float */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         xsd__float() { xsd__float::soap_default(NULL); }
	virtual ~xsd__float() { }
};
#endif

#ifndef SOAP_TYPE_xsd__int
#define SOAP_TYPE_xsd__int (36)
/* Primitive xsd:int schema type: */
class SOAP_CMAC xsd__int : public xsd__anyType
{
public:
	int __item;
public:
	virtual int soap_type() const { return 36; } /* = unique type id SOAP_TYPE_xsd__int */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         xsd__int() { xsd__int::soap_default(NULL); }
	virtual ~xsd__int() { }
};
#endif

#ifndef SOAP_TYPE_xsd__long
#define SOAP_TYPE_xsd__long (37)
/* Primitive xsd:long schema type: */
class SOAP_CMAC xsd__long : public xsd__anyType
{
public:
	LONG64 __item;
public:
	virtual int soap_type() const { return 37; } /* = unique type id SOAP_TYPE_xsd__long */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         xsd__long() { xsd__long::soap_default(NULL); }
	virtual ~xsd__long() { }
};
#endif

#ifndef SOAP_TYPE_xsd__short
#define SOAP_TYPE_xsd__short (39)
/* Primitive xsd:short schema type: */
class SOAP_CMAC xsd__short : public xsd__anyType
{
public:
	short __item;
public:
	virtual int soap_type() const { return 39; } /* = unique type id SOAP_TYPE_xsd__short */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         xsd__short() { xsd__short::soap_default(NULL); }
	virtual ~xsd__short() { }
};
#endif

#ifndef SOAP_TYPE_xsd__string
#define SOAP_TYPE_xsd__string (41)
/* Primitive xsd:string schema type: */
class SOAP_CMAC xsd__string : public xsd__anyType
{
public:
	char *__item;
public:
	virtual int soap_type() const { return 41; } /* = unique type id SOAP_TYPE_xsd__string */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         xsd__string() { xsd__string::soap_default(NULL); }
	virtual ~xsd__string() { }
};
#endif

#ifndef SOAP_TYPE_xsd__unsignedByte_
#define SOAP_TYPE_xsd__unsignedByte_ (42)
/* Primitive xsd:unsignedByte schema type: */
class SOAP_CMAC xsd__unsignedByte_ : public xsd__anyType
{
public:
	unsigned char __item;
public:
	virtual int soap_type() const { return 42; } /* = unique type id SOAP_TYPE_xsd__unsignedByte_ */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         xsd__unsignedByte_() { xsd__unsignedByte_::soap_default(NULL); }
	virtual ~xsd__unsignedByte_() { }
};
#endif

#ifndef SOAP_TYPE_xsd__unsignedInt
#define SOAP_TYPE_xsd__unsignedInt (43)
/* Primitive xsd:unsignedInt schema type: */
class SOAP_CMAC xsd__unsignedInt : public xsd__anyType
{
public:
	unsigned int __item;
public:
	virtual int soap_type() const { return 43; } /* = unique type id SOAP_TYPE_xsd__unsignedInt */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         xsd__unsignedInt() { xsd__unsignedInt::soap_default(NULL); }
	virtual ~xsd__unsignedInt() { }
};
#endif

#ifndef SOAP_TYPE_xsd__unsignedLong
#define SOAP_TYPE_xsd__unsignedLong (44)
/* Primitive xsd:unsignedLong schema type: */
class SOAP_CMAC xsd__unsignedLong : public xsd__anyType
{
public:
	ULONG64 __item;
public:
	virtual int soap_type() const { return 44; } /* = unique type id SOAP_TYPE_xsd__unsignedLong */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         xsd__unsignedLong() { xsd__unsignedLong::soap_default(NULL); }
	virtual ~xsd__unsignedLong() { }
};
#endif

#ifndef SOAP_TYPE_xsd__unsignedShort
#define SOAP_TYPE_xsd__unsignedShort (46)
/* Primitive xsd:unsignedShort schema type: */
class SOAP_CMAC xsd__unsignedShort : public xsd__anyType
{
public:
	unsigned short __item;
public:
	virtual int soap_type() const { return 46; } /* = unique type id SOAP_TYPE_xsd__unsignedShort */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         xsd__unsignedShort() { xsd__unsignedShort::soap_default(NULL); }
	virtual ~xsd__unsignedShort() { }
};
#endif

#ifndef SOAP_TYPE_JR4__char__
#define SOAP_TYPE_JR4__char__ (51)
/* Primitive JR4:char schema type: */
class SOAP_CMAC JR4__char__ : public xsd__anyType
{
public:
	int __item;
public:
	virtual int soap_type() const { return 51; } /* = unique type id SOAP_TYPE_JR4__char__ */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         JR4__char__() { JR4__char__::soap_default(NULL); }
	virtual ~JR4__char__() { }
};
#endif

#ifndef SOAP_TYPE_JR4__duration__
#define SOAP_TYPE_JR4__duration__ (53)
/* Primitive JR4:duration schema type: */
class SOAP_CMAC JR4__duration__ : public xsd__anyType
{
public:
	char *__item;
public:
	virtual int soap_type() const { return 53; } /* = unique type id SOAP_TYPE_JR4__duration__ */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         JR4__duration__() { JR4__duration__::soap_default(NULL); }
	virtual ~JR4__duration__() { }
};
#endif

#ifndef SOAP_TYPE_JR4__guid__
#define SOAP_TYPE_JR4__guid__ (55)
/* Primitive JR4:guid schema type: */
class SOAP_CMAC JR4__guid__ : public xsd__anyType
{
public:
	char *__item;
public:
	virtual int soap_type() const { return 55; } /* = unique type id SOAP_TYPE_JR4__guid__ */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         JR4__guid__() { JR4__guid__::soap_default(NULL); }
	virtual ~JR4__guid__() { }
};
#endif

#ifndef SOAP_TYPE__JR3__Add
#define SOAP_TYPE__JR3__Add (48)
/* JR3:Add */
class SOAP_CMAC _JR3__Add
{
public:
	double *x;	/* optional element of type xsd:double */
	double *y;	/* optional element of type xsd:double */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 48; } /* = unique type id SOAP_TYPE__JR3__Add */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         _JR3__Add() { _JR3__Add::soap_default(NULL); }
	virtual ~_JR3__Add() { }
};
#endif

#ifndef SOAP_TYPE__JR3__AddResponse
#define SOAP_TYPE__JR3__AddResponse (49)
/* JR3:AddResponse */
class SOAP_CMAC _JR3__AddResponse
{
public:
	double *AddResult;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* optional element of type xsd:double */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 49; } /* = unique type id SOAP_TYPE__JR3__AddResponse */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         _JR3__AddResponse() { _JR3__AddResponse::soap_default(NULL); }
	virtual ~_JR3__AddResponse() { }
};
#endif

#ifndef SOAP_TYPE___JR1__Add
#define SOAP_TYPE___JR1__Add (60)
/* Operation wrapper: */
struct __JR1__Add
{
public:
	_JR3__Add *JR3__Add;	/* optional element of type JR3:Add */
public:
	int soap_type() const { return 60; } /* = unique type id SOAP_TYPE___JR1__Add */
};
#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_SOAP_ENV__Header
#define SOAP_TYPE_SOAP_ENV__Header (61)
/* SOAP Header: */
struct SOAP_ENV__Header
{
public:
	int soap_type() const { return 61; } /* = unique type id SOAP_TYPE_SOAP_ENV__Header */
};
#endif

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_SOAP_ENV__Code
#define SOAP_TYPE_SOAP_ENV__Code (62)
/* SOAP Fault Code: */
struct SOAP_ENV__Code
{
public:
	char *SOAP_ENV__Value;	/* optional element of type xsd:QName */
	struct SOAP_ENV__Code *SOAP_ENV__Subcode;	/* optional element of type SOAP-ENV:Code */
public:
	int soap_type() const { return 62; } /* = unique type id SOAP_TYPE_SOAP_ENV__Code */
};
#endif

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_SOAP_ENV__Detail
#define SOAP_TYPE_SOAP_ENV__Detail (64)
/* SOAP-ENV:Detail */
struct SOAP_ENV__Detail
{
public:
	char *__any;
	int __type;	/* any type of element <fault> (defined below) */
	void *fault;	/* transient */
public:
	int soap_type() const { return 64; } /* = unique type id SOAP_TYPE_SOAP_ENV__Detail */
};
#endif

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_SOAP_ENV__Reason
#define SOAP_TYPE_SOAP_ENV__Reason (67)
/* SOAP-ENV:Reason */
struct SOAP_ENV__Reason
{
public:
	char *SOAP_ENV__Text;	/* optional element of type xsd:string */
public:
	int soap_type() const { return 67; } /* = unique type id SOAP_TYPE_SOAP_ENV__Reason */
};
#endif

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_SOAP_ENV__Fault
#define SOAP_TYPE_SOAP_ENV__Fault (68)
/* SOAP Fault: */
struct SOAP_ENV__Fault
{
public:
	char *faultcode;	/* optional element of type xsd:QName */
	char *faultstring;	/* optional element of type xsd:string */
	char *faultactor;	/* optional element of type xsd:string */
	struct SOAP_ENV__Detail *detail;	/* optional element of type SOAP-ENV:Detail */
	struct SOAP_ENV__Code *SOAP_ENV__Code;	/* optional element of type SOAP-ENV:Code */
	struct SOAP_ENV__Reason *SOAP_ENV__Reason;	/* optional element of type SOAP-ENV:Reason */
	char *SOAP_ENV__Node;	/* optional element of type xsd:string */
	char *SOAP_ENV__Role;	/* optional element of type xsd:string */
	struct SOAP_ENV__Detail *SOAP_ENV__Detail;	/* optional element of type SOAP-ENV:Detail */
public:
	int soap_type() const { return 68; } /* = unique type id SOAP_TYPE_SOAP_ENV__Fault */
};
#endif

#endif

/******************************************************************************\
 *                                                                            *
 * Typedefs                                                                   *
 *                                                                            *
\******************************************************************************/

#ifndef SOAP_TYPE__QName
#define SOAP_TYPE__QName (5)
typedef char *_QName;
#endif

#ifndef SOAP_TYPE__XML
#define SOAP_TYPE__XML (6)
typedef char *_XML;
#endif

#ifndef SOAP_TYPE_xsd__byte
#define SOAP_TYPE_xsd__byte (13)
typedef char xsd__byte;
#endif

#ifndef SOAP_TYPE_xsd__unsignedByte
#define SOAP_TYPE_xsd__unsignedByte (14)
typedef unsigned char xsd__unsignedByte;
#endif

#ifndef SOAP_TYPE_xsd__ID
#define SOAP_TYPE_xsd__ID (15)
typedef char *xsd__ID;
#endif

#ifndef SOAP_TYPE_xsd__IDREF
#define SOAP_TYPE_xsd__IDREF (17)
typedef char *xsd__IDREF;
#endif

#ifndef SOAP_TYPE_xsd__anyURI
#define SOAP_TYPE_xsd__anyURI (20)
typedef char *xsd__anyURI;
#endif

#ifndef SOAP_TYPE_xsd__decimal
#define SOAP_TYPE_xsd__decimal (28)
typedef char *xsd__decimal;
#endif

#ifndef SOAP_TYPE_xsd__duration
#define SOAP_TYPE_xsd__duration (32)
typedef char *xsd__duration;
#endif

#ifndef SOAP_TYPE_JR4__char
#define SOAP_TYPE_JR4__char (50)
typedef int JR4__char;
#endif

#ifndef SOAP_TYPE_JR4__duration
#define SOAP_TYPE_JR4__duration (52)
typedef char *JR4__duration;
#endif

#ifndef SOAP_TYPE_JR4__guid
#define SOAP_TYPE_JR4__guid (54)
typedef char *JR4__guid;
#endif


/******************************************************************************\
 *                                                                            *
 * Externals                                                                  *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Client-Side Call Stubs                                                     *
 *                                                                            *
\******************************************************************************/


SOAP_FMAC5 int SOAP_FMAC6 soap_call___JR1__Add(struct soap *soap, const char *soap_endpoint, const char *soap_action, _JR3__Add *JR3__Add, _JR3__AddResponse &JR3__AddResponse);

#endif

/* End of soapStub.h */
