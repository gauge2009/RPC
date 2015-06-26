/* soapClient.cpp
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
#include "stdafx.h"

SOAP_SOURCE_STAMP("@(#) soapClient.cpp ver 2.8.22 2015-06-25 13:31:09 GMT")


SOAP_FMAC5 int SOAP_FMAC6 soap_call___JR1__Add(struct soap *soap, const char *soap_endpoint, const char *soap_action, _JR3__Add *JR3__Add, _JR3__AddResponse &JR3__AddResponse)
{	struct __JR1__Add soap_tmp___JR1__Add;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://192.168.1.104:15618/calcservice";
	if (soap_action == NULL)
		soap_action = "http://o2.jrrpc.com/ICalc/Add";
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_tmp___JR1__Add.JR3__Add = JR3__Add;
	soap_serializeheader(soap);
	soap_serialize___JR1__Add(soap, &soap_tmp___JR1__Add);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___JR1__Add(soap, &soap_tmp___JR1__Add, "-JR1:Add", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_url(soap, soap_endpoint, NULL), soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___JR1__Add(soap, &soap_tmp___JR1__Add, "-JR1:Add", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!&JR3__AddResponse)
		return soap_closesock(soap);
	JR3__AddResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	JR3__AddResponse.soap_get(soap, "JR3:AddResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_send_SOAP_ENV__Fault(struct soap *soap, const char *soap_endpoint, const char *soap_action, char *faultcode, char *faultstring, char *faultactor, struct SOAP_ENV__Detail *detail, struct SOAP_ENV__Code *SOAP_ENV__Code, struct SOAP_ENV__Reason *SOAP_ENV__Reason, char *SOAP_ENV__Node, char *SOAP_ENV__Role, struct SOAP_ENV__Detail *SOAP_ENV__Detail)
{	struct SOAP_ENV__Fault soap_tmp_SOAP_ENV__Fault;
	if (soap_action == NULL)
		soap_action = "http://www.w3.org/2005/08/addressing/soap/fault";
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_tmp_SOAP_ENV__Fault.faultcode = faultcode;
	soap_tmp_SOAP_ENV__Fault.faultstring = faultstring;
	soap_tmp_SOAP_ENV__Fault.faultactor = faultactor;
	soap_tmp_SOAP_ENV__Fault.detail = detail;
	soap_tmp_SOAP_ENV__Fault.SOAP_ENV__Code = SOAP_ENV__Code;
	soap_tmp_SOAP_ENV__Fault.SOAP_ENV__Reason = SOAP_ENV__Reason;
	soap_tmp_SOAP_ENV__Fault.SOAP_ENV__Node = SOAP_ENV__Node;
	soap_tmp_SOAP_ENV__Fault.SOAP_ENV__Role = SOAP_ENV__Role;
	soap_tmp_SOAP_ENV__Fault.SOAP_ENV__Detail = SOAP_ENV__Detail;
	soap_serializeheader(soap);
	soap_serialize_SOAP_ENV__Fault(soap, &soap_tmp_SOAP_ENV__Fault);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put_SOAP_ENV__Fault(soap, &soap_tmp_SOAP_ENV__Fault, "SOAP-ENV:Fault", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_url(soap, soap_endpoint, NULL), soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put_SOAP_ENV__Fault(soap, &soap_tmp_SOAP_ENV__Fault, "SOAP-ENV:Fault", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	return SOAP_OK;
}

SOAP_FMAC5 int SOAP_FMAC6 soap_recv_SOAP_ENV__Fault(struct soap *soap, struct SOAP_ENV__Fault *_param_1)
{
	soap_default_SOAP_ENV__Fault(soap, _param_1);
	soap_begin(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	soap_get_SOAP_ENV__Fault(soap, _param_1, "SOAP-ENV:Fault", NULL);
	if (soap->error == SOAP_TAG_MISMATCH && soap->level == 2)
		soap->error = SOAP_OK;
	if (soap->error
	 || soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call___wst__RequestSecurityToken(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct wst__RequestSecurityTokenType *wst__RequestSecurityToken, struct wst__RequestSecurityTokenResponseType *wst__RequestSecurityTokenResponse)
{	struct __wst__RequestSecurityToken soap_tmp___wst__RequestSecurityToken;
	if (soap_action == NULL)
		soap_action = "http://schemas.xmlsoap.org/ws/2005/02/trust/RST/Issue";
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_tmp___wst__RequestSecurityToken.wst__RequestSecurityToken = wst__RequestSecurityToken;
	soap_serializeheader(soap);
	soap_serialize___wst__RequestSecurityToken(soap, &soap_tmp___wst__RequestSecurityToken);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___wst__RequestSecurityToken(soap, &soap_tmp___wst__RequestSecurityToken, "-wst:RequestSecurityToken", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_url(soap, soap_endpoint, NULL), soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___wst__RequestSecurityToken(soap, &soap_tmp___wst__RequestSecurityToken, "-wst:RequestSecurityToken", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!wst__RequestSecurityTokenResponse)
		return soap_closesock(soap);
	soap_default_wst__RequestSecurityTokenResponseType(soap, wst__RequestSecurityTokenResponse);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	soap_get_wst__RequestSecurityTokenResponseType(soap, wst__RequestSecurityTokenResponse, "wst:RequestSecurityTokenResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

#if defined(__BORLANDC__)
#pragma option pop
#pragma option pop
#endif

/* End of soapClient.cpp */
