/* soapServer.cpp
   Generated by gSOAP 2.8.22 from calc.h

Copyright(C) 2000-2015, Robert van Engelen, Genivia Inc. All Rights Reserved.
The generated code is released under one of the following licenses:
GPL or Genivia's license for commercial use.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
*/

#if defined(__BORLANDC__)
#pragma option push -w-8060
#pragma option push -w-8004
#endif
#include "soapH.h"

SOAP_SOURCE_STAMP("@(#) soapServer.cpp ver 2.8.22 2015-06-26 03:49:22 GMT")


extern "C" SOAP_FMAC5 int SOAP_FMAC6 soap_serve(struct soap *soap)
{
#ifndef WITH_FASTCGI
	unsigned int k = soap->max_keep_alive;
#endif
	do
	{
#ifndef WITH_FASTCGI
		if (soap->max_keep_alive > 0 && !--k)
			soap->keep_alive = 0;
#endif
		if (soap_begin_serve(soap))
		{	if (soap->error >= SOAP_STOP)
				continue;
			return soap->error;
		}
		if (soap_serve_request(soap) || (soap->fserveloop && soap->fserveloop(soap)))
		{
#ifdef WITH_FASTCGI
			soap_send_fault(soap);
#else
			return soap_send_fault(soap);
#endif
		}

#ifdef WITH_FASTCGI
		soap_destroy(soap);
		soap_end(soap);
	} while (1);
#else
	} while (soap->keep_alive);
#endif
	return SOAP_OK;
}

#ifndef WITH_NOSERVEREQUEST
extern "C" SOAP_FMAC5 int SOAP_FMAC6 soap_serve_request(struct soap *soap)
{
	soap_peek_element(soap);
	if (!soap_match_tag(soap, soap->tag, "JR2:Add"))
		return soap_serve___wbICalc2__Add(soap);
	if (!soap_match_tag(soap, soap->tag, "SOAP-ENV:Fault"))
		return soap_serve_SOAP_ENV__Fault(soap);
	if (!soap_match_tag(soap, soap->tag, "wst:RequestSecurityToken"))
		return soap_serve___wst__RequestSecurityToken(soap);
	if (!soap_match_tag(soap, soap->tag, "JR2:Add"))
		return soap_serve___wbICalc3__Add(soap);
	return soap->error = SOAP_NO_METHOD;
}
#endif

SOAP_FMAC5 int SOAP_FMAC6 soap_serve___wbICalc2__Add(struct soap *soap)
{	struct __wbICalc2__Add soap_tmp___wbICalc2__Add;
	_JR2__AddResponse JR2__AddResponse;
	JR2__AddResponse.soap_default(soap);
	soap_default___wbICalc2__Add(soap, &soap_tmp___wbICalc2__Add);
	if (!soap_get___wbICalc2__Add(soap, &soap_tmp___wbICalc2__Add, "-wbICalc2:Add", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = __wbICalc2__Add(soap, soap_tmp___wbICalc2__Add.JR2__Add, JR2__AddResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	JR2__AddResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || JR2__AddResponse.soap_put(soap, "JR2:AddResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || JR2__AddResponse.soap_put(soap, "JR2:AddResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_serve_SOAP_ENV__Fault(struct soap *soap)
{	struct SOAP_ENV__Fault soap_tmp_SOAP_ENV__Fault;
	soap_default_SOAP_ENV__Fault(soap, &soap_tmp_SOAP_ENV__Fault);
	if (!soap_get_SOAP_ENV__Fault(soap, &soap_tmp_SOAP_ENV__Fault, "SOAP-ENV:Fault", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = SOAP_ENV__Fault(soap, soap_tmp_SOAP_ENV__Fault.faultcode, soap_tmp_SOAP_ENV__Fault.faultstring, soap_tmp_SOAP_ENV__Fault.faultactor, soap_tmp_SOAP_ENV__Fault.detail, soap_tmp_SOAP_ENV__Fault.SOAP_ENV__Code, soap_tmp_SOAP_ENV__Fault.SOAP_ENV__Reason, soap_tmp_SOAP_ENV__Fault.SOAP_ENV__Node, soap_tmp_SOAP_ENV__Fault.SOAP_ENV__Role, soap_tmp_SOAP_ENV__Fault.SOAP_ENV__Detail);
	if (soap->error)
		return soap->error;
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_serve___wst__RequestSecurityToken(struct soap *soap)
{	struct __wst__RequestSecurityToken soap_tmp___wst__RequestSecurityToken;
	struct wst__RequestSecurityTokenResponseType wst__RequestSecurityTokenResponse;
	soap_default_wst__RequestSecurityTokenResponseType(soap, &wst__RequestSecurityTokenResponse);
	soap_default___wst__RequestSecurityToken(soap, &soap_tmp___wst__RequestSecurityToken);
	if (!soap_get___wst__RequestSecurityToken(soap, &soap_tmp___wst__RequestSecurityToken, "-wst:RequestSecurityToken", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = __wst__RequestSecurityToken(soap, soap_tmp___wst__RequestSecurityToken.wst__RequestSecurityToken, &wst__RequestSecurityTokenResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize_wst__RequestSecurityTokenResponseType(soap, &wst__RequestSecurityTokenResponse);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put_wst__RequestSecurityTokenResponseType(soap, &wst__RequestSecurityTokenResponse, "wst:RequestSecurityTokenResponse", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put_wst__RequestSecurityTokenResponseType(soap, &wst__RequestSecurityTokenResponse, "wst:RequestSecurityTokenResponse", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_serve___wbICalc3__Add(struct soap *soap)
{	struct __wbICalc3__Add soap_tmp___wbICalc3__Add;
	_JR2__AddResponse JR2__AddResponse;
	JR2__AddResponse.soap_default(soap);
	soap_default___wbICalc3__Add(soap, &soap_tmp___wbICalc3__Add);
	if (!soap_get___wbICalc3__Add(soap, &soap_tmp___wbICalc3__Add, "-wbICalc3:Add", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = __wbICalc3__Add(soap, soap_tmp___wbICalc3__Add.JR2__Add, JR2__AddResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	JR2__AddResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || JR2__AddResponse.soap_put(soap, "JR2:AddResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || JR2__AddResponse.soap_put(soap, "JR2:AddResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

#if defined(__BORLANDC__)
#pragma option pop
#pragma option pop
#endif

/* End of soapServer.cpp */