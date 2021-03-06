/* soapWeatherWebServiceSoapProxy.cpp
   Generated by gSOAP 2.8.22 from WeatherWeb.h

Copyright(C) 2000-2015, Robert van Engelen, Genivia Inc. All Rights Reserved.
The generated code is released under one of the following licenses:
GPL or Genivia's license for commercial use.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
*/

#include "soapWeatherWebServiceSoapProxy.h"

WeatherWebServiceSoapProxy::WeatherWebServiceSoapProxy()
{	WeatherWebServiceSoapProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

WeatherWebServiceSoapProxy::WeatherWebServiceSoapProxy(const struct soap &_soap) : soap(_soap)
{ }

WeatherWebServiceSoapProxy::WeatherWebServiceSoapProxy(const char *url)
{	WeatherWebServiceSoapProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
	soap_endpoint = url;
}

WeatherWebServiceSoapProxy::WeatherWebServiceSoapProxy(soap_mode iomode)
{	WeatherWebServiceSoapProxy_init(iomode, iomode);
}

WeatherWebServiceSoapProxy::WeatherWebServiceSoapProxy(const char *url, soap_mode iomode)
{	WeatherWebServiceSoapProxy_init(iomode, iomode);
	soap_endpoint = url;
}

WeatherWebServiceSoapProxy::WeatherWebServiceSoapProxy(soap_mode imode, soap_mode omode)
{	WeatherWebServiceSoapProxy_init(imode, omode);
}

WeatherWebServiceSoapProxy::~WeatherWebServiceSoapProxy()
{ }

void WeatherWebServiceSoapProxy::WeatherWebServiceSoapProxy_init(soap_mode imode, soap_mode omode)
{	soap_imode(this, imode);
	soap_omode(this, omode);
	soap_endpoint = NULL;
	static const struct Namespace namespaces[] =
{
	{"SOAP-ENV", "http://www.w3.org/2003/05/soap-envelope", "http://schemas.xmlsoap.org/soap/envelope/", NULL},
	{"SOAP-ENC", "http://www.w3.org/2003/05/soap-encoding", "http://schemas.xmlsoap.org/soap/encoding/", NULL},
	{"xsi", "http://www.w3.org/2001/XMLSchema-instance", "http://www.w3.org/*/XMLSchema-instance", NULL},
	{"xsd", "http://www.w3.org/2001/XMLSchema", "http://www.w3.org/*/XMLSchema", NULL},
	{"Weather1", "http://WebXml.com.cn/", NULL, NULL},
	{NULL, NULL, NULL, NULL}
};
	soap_set_namespaces(this, namespaces);
}

void WeatherWebServiceSoapProxy::destroy()
{	soap_destroy(this);
	soap_end(this);
}

void WeatherWebServiceSoapProxy::reset()
{	destroy();
	soap_done(this);
	soap_initialize(this);
	WeatherWebServiceSoapProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

void WeatherWebServiceSoapProxy::soap_noheader()
{	this->header = NULL;
}

const SOAP_ENV__Header *WeatherWebServiceSoapProxy::soap_header()
{	return this->header;
}

const SOAP_ENV__Fault *WeatherWebServiceSoapProxy::soap_fault()
{	return this->fault;
}

const char *WeatherWebServiceSoapProxy::soap_fault_string()
{	return *soap_faultstring(this);
}

const char *WeatherWebServiceSoapProxy::soap_fault_detail()
{	return *soap_faultdetail(this);
}

int WeatherWebServiceSoapProxy::soap_close_socket()
{	return soap_closesock(this);
}

int WeatherWebServiceSoapProxy::soap_force_close_socket()
{	return soap_force_closesock(this);
}

void WeatherWebServiceSoapProxy::soap_print_fault(FILE *fd)
{	::soap_print_fault(this, fd);
}

#ifndef WITH_LEAN
#ifndef WITH_COMPAT
void WeatherWebServiceSoapProxy::soap_stream_fault(std::ostream& os)
{	::soap_stream_fault(this, os);
}
#endif

char *WeatherWebServiceSoapProxy::soap_sprint_fault(char *buf, size_t len)
{	return ::soap_sprint_fault(this, buf, len);
}
#endif

int WeatherWebServiceSoapProxy::getSupportCity(const char *endpoint, const char *soap_action, _Weather1__getSupportCity *Weather1__getSupportCity, _Weather1__getSupportCityResponse &Weather1__getSupportCityResponse)
{	struct soap *soap = this;
	struct __Weather1__getSupportCity soap_tmp___Weather1__getSupportCity;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://www.webxml.com.cn/WebServices/WeatherWebService.asmx";
	if (soap_action == NULL)
		soap_action = "http://WebXml.com.cn/getSupportCity";
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_tmp___Weather1__getSupportCity.Weather1__getSupportCity = Weather1__getSupportCity;
	soap_serializeheader(soap);
	soap_serialize___Weather1__getSupportCity(soap, &soap_tmp___Weather1__getSupportCity);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___Weather1__getSupportCity(soap, &soap_tmp___Weather1__getSupportCity, "-Weather1:getSupportCity", NULL)
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
	 || soap_put___Weather1__getSupportCity(soap, &soap_tmp___Weather1__getSupportCity, "-Weather1:getSupportCity", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!&Weather1__getSupportCityResponse)
		return soap_closesock(soap);
	Weather1__getSupportCityResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	Weather1__getSupportCityResponse.soap_get(soap, "Weather1:getSupportCityResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int WeatherWebServiceSoapProxy::getSupportProvince(const char *endpoint, const char *soap_action, _Weather1__getSupportProvince *Weather1__getSupportProvince, _Weather1__getSupportProvinceResponse &Weather1__getSupportProvinceResponse)
{	struct soap *soap = this;
	struct __Weather1__getSupportProvince soap_tmp___Weather1__getSupportProvince;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://www.webxml.com.cn/WebServices/WeatherWebService.asmx";
	if (soap_action == NULL)
		soap_action = "http://WebXml.com.cn/getSupportProvince";
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_tmp___Weather1__getSupportProvince.Weather1__getSupportProvince = Weather1__getSupportProvince;
	soap_serializeheader(soap);
	soap_serialize___Weather1__getSupportProvince(soap, &soap_tmp___Weather1__getSupportProvince);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___Weather1__getSupportProvince(soap, &soap_tmp___Weather1__getSupportProvince, "-Weather1:getSupportProvince", NULL)
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
	 || soap_put___Weather1__getSupportProvince(soap, &soap_tmp___Weather1__getSupportProvince, "-Weather1:getSupportProvince", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!&Weather1__getSupportProvinceResponse)
		return soap_closesock(soap);
	Weather1__getSupportProvinceResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	Weather1__getSupportProvinceResponse.soap_get(soap, "Weather1:getSupportProvinceResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int WeatherWebServiceSoapProxy::getSupportDataSet(const char *endpoint, const char *soap_action, _Weather1__getSupportDataSet *Weather1__getSupportDataSet, _Weather1__getSupportDataSetResponse &Weather1__getSupportDataSetResponse)
{	struct soap *soap = this;
	struct __Weather1__getSupportDataSet soap_tmp___Weather1__getSupportDataSet;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://www.webxml.com.cn/WebServices/WeatherWebService.asmx";
	if (soap_action == NULL)
		soap_action = "http://WebXml.com.cn/getSupportDataSet";
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_tmp___Weather1__getSupportDataSet.Weather1__getSupportDataSet = Weather1__getSupportDataSet;
	soap_serializeheader(soap);
	soap_serialize___Weather1__getSupportDataSet(soap, &soap_tmp___Weather1__getSupportDataSet);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___Weather1__getSupportDataSet(soap, &soap_tmp___Weather1__getSupportDataSet, "-Weather1:getSupportDataSet", NULL)
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
	 || soap_put___Weather1__getSupportDataSet(soap, &soap_tmp___Weather1__getSupportDataSet, "-Weather1:getSupportDataSet", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!&Weather1__getSupportDataSetResponse)
		return soap_closesock(soap);
	Weather1__getSupportDataSetResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	Weather1__getSupportDataSetResponse.soap_get(soap, "Weather1:getSupportDataSetResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int WeatherWebServiceSoapProxy::getWeatherbyCityName(const char *endpoint, const char *soap_action, _Weather1__getWeatherbyCityName *Weather1__getWeatherbyCityName, _Weather1__getWeatherbyCityNameResponse &Weather1__getWeatherbyCityNameResponse)
{	struct soap *soap = this;
	struct __Weather1__getWeatherbyCityName soap_tmp___Weather1__getWeatherbyCityName;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://www.webxml.com.cn/WebServices/WeatherWebService.asmx";
	if (soap_action == NULL)
		soap_action = "http://WebXml.com.cn/getWeatherbyCityName";
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_tmp___Weather1__getWeatherbyCityName.Weather1__getWeatherbyCityName = Weather1__getWeatherbyCityName;
	soap_serializeheader(soap);
	soap_serialize___Weather1__getWeatherbyCityName(soap, &soap_tmp___Weather1__getWeatherbyCityName);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___Weather1__getWeatherbyCityName(soap, &soap_tmp___Weather1__getWeatherbyCityName, "-Weather1:getWeatherbyCityName", NULL)
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
	 || soap_put___Weather1__getWeatherbyCityName(soap, &soap_tmp___Weather1__getWeatherbyCityName, "-Weather1:getWeatherbyCityName", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!&Weather1__getWeatherbyCityNameResponse)
		return soap_closesock(soap);
	Weather1__getWeatherbyCityNameResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	Weather1__getWeatherbyCityNameResponse.soap_get(soap, "Weather1:getWeatherbyCityNameResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int WeatherWebServiceSoapProxy::getWeatherbyCityNamePro(const char *endpoint, const char *soap_action, _Weather1__getWeatherbyCityNamePro *Weather1__getWeatherbyCityNamePro, _Weather1__getWeatherbyCityNameProResponse &Weather1__getWeatherbyCityNameProResponse)
{	struct soap *soap = this;
	struct __Weather1__getWeatherbyCityNamePro soap_tmp___Weather1__getWeatherbyCityNamePro;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://www.webxml.com.cn/WebServices/WeatherWebService.asmx";
	if (soap_action == NULL)
		soap_action = "http://WebXml.com.cn/getWeatherbyCityNamePro";
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_tmp___Weather1__getWeatherbyCityNamePro.Weather1__getWeatherbyCityNamePro = Weather1__getWeatherbyCityNamePro;
	soap_serializeheader(soap);
	soap_serialize___Weather1__getWeatherbyCityNamePro(soap, &soap_tmp___Weather1__getWeatherbyCityNamePro);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___Weather1__getWeatherbyCityNamePro(soap, &soap_tmp___Weather1__getWeatherbyCityNamePro, "-Weather1:getWeatherbyCityNamePro", NULL)
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
	 || soap_put___Weather1__getWeatherbyCityNamePro(soap, &soap_tmp___Weather1__getWeatherbyCityNamePro, "-Weather1:getWeatherbyCityNamePro", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!&Weather1__getWeatherbyCityNameProResponse)
		return soap_closesock(soap);
	Weather1__getWeatherbyCityNameProResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	Weather1__getWeatherbyCityNameProResponse.soap_get(soap, "Weather1:getWeatherbyCityNameProResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int WeatherWebServiceSoapProxy::getSupportCity_(const char *endpoint, const char *soap_action, _Weather1__getSupportCity *Weather1__getSupportCity, _Weather1__getSupportCityResponse &Weather1__getSupportCityResponse)
{	struct soap *soap = this;
	struct __Weather1__getSupportCity_ soap_tmp___Weather1__getSupportCity_;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://www.webxml.com.cn/WebServices/WeatherWebService.asmx";
	if (soap_action == NULL)
		soap_action = "http://WebXml.com.cn/getSupportCity";
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_tmp___Weather1__getSupportCity_.Weather1__getSupportCity = Weather1__getSupportCity;
	soap_serializeheader(soap);
	soap_serialize___Weather1__getSupportCity_(soap, &soap_tmp___Weather1__getSupportCity_);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___Weather1__getSupportCity_(soap, &soap_tmp___Weather1__getSupportCity_, "-Weather1:getSupportCity", NULL)
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
	 || soap_put___Weather1__getSupportCity_(soap, &soap_tmp___Weather1__getSupportCity_, "-Weather1:getSupportCity", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!&Weather1__getSupportCityResponse)
		return soap_closesock(soap);
	Weather1__getSupportCityResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	Weather1__getSupportCityResponse.soap_get(soap, "Weather1:getSupportCityResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int WeatherWebServiceSoapProxy::getSupportProvince_(const char *endpoint, const char *soap_action, _Weather1__getSupportProvince *Weather1__getSupportProvince, _Weather1__getSupportProvinceResponse &Weather1__getSupportProvinceResponse)
{	struct soap *soap = this;
	struct __Weather1__getSupportProvince_ soap_tmp___Weather1__getSupportProvince_;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://www.webxml.com.cn/WebServices/WeatherWebService.asmx";
	if (soap_action == NULL)
		soap_action = "http://WebXml.com.cn/getSupportProvince";
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_tmp___Weather1__getSupportProvince_.Weather1__getSupportProvince = Weather1__getSupportProvince;
	soap_serializeheader(soap);
	soap_serialize___Weather1__getSupportProvince_(soap, &soap_tmp___Weather1__getSupportProvince_);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___Weather1__getSupportProvince_(soap, &soap_tmp___Weather1__getSupportProvince_, "-Weather1:getSupportProvince", NULL)
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
	 || soap_put___Weather1__getSupportProvince_(soap, &soap_tmp___Weather1__getSupportProvince_, "-Weather1:getSupportProvince", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!&Weather1__getSupportProvinceResponse)
		return soap_closesock(soap);
	Weather1__getSupportProvinceResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	Weather1__getSupportProvinceResponse.soap_get(soap, "Weather1:getSupportProvinceResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int WeatherWebServiceSoapProxy::getSupportDataSet_(const char *endpoint, const char *soap_action, _Weather1__getSupportDataSet *Weather1__getSupportDataSet, _Weather1__getSupportDataSetResponse &Weather1__getSupportDataSetResponse)
{	struct soap *soap = this;
	struct __Weather1__getSupportDataSet_ soap_tmp___Weather1__getSupportDataSet_;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://www.webxml.com.cn/WebServices/WeatherWebService.asmx";
	if (soap_action == NULL)
		soap_action = "http://WebXml.com.cn/getSupportDataSet";
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_tmp___Weather1__getSupportDataSet_.Weather1__getSupportDataSet = Weather1__getSupportDataSet;
	soap_serializeheader(soap);
	soap_serialize___Weather1__getSupportDataSet_(soap, &soap_tmp___Weather1__getSupportDataSet_);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___Weather1__getSupportDataSet_(soap, &soap_tmp___Weather1__getSupportDataSet_, "-Weather1:getSupportDataSet", NULL)
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
	 || soap_put___Weather1__getSupportDataSet_(soap, &soap_tmp___Weather1__getSupportDataSet_, "-Weather1:getSupportDataSet", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!&Weather1__getSupportDataSetResponse)
		return soap_closesock(soap);
	Weather1__getSupportDataSetResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	Weather1__getSupportDataSetResponse.soap_get(soap, "Weather1:getSupportDataSetResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int WeatherWebServiceSoapProxy::getWeatherbyCityName_(const char *endpoint, const char *soap_action, _Weather1__getWeatherbyCityName *Weather1__getWeatherbyCityName, _Weather1__getWeatherbyCityNameResponse &Weather1__getWeatherbyCityNameResponse)
{	struct soap *soap = this;
	struct __Weather1__getWeatherbyCityName_ soap_tmp___Weather1__getWeatherbyCityName_;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://www.webxml.com.cn/WebServices/WeatherWebService.asmx";
	if (soap_action == NULL)
		soap_action = "http://WebXml.com.cn/getWeatherbyCityName";
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_tmp___Weather1__getWeatherbyCityName_.Weather1__getWeatherbyCityName = Weather1__getWeatherbyCityName;
	soap_serializeheader(soap);
	soap_serialize___Weather1__getWeatherbyCityName_(soap, &soap_tmp___Weather1__getWeatherbyCityName_);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___Weather1__getWeatherbyCityName_(soap, &soap_tmp___Weather1__getWeatherbyCityName_, "-Weather1:getWeatherbyCityName", NULL)
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
	 || soap_put___Weather1__getWeatherbyCityName_(soap, &soap_tmp___Weather1__getWeatherbyCityName_, "-Weather1:getWeatherbyCityName", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!&Weather1__getWeatherbyCityNameResponse)
		return soap_closesock(soap);
	Weather1__getWeatherbyCityNameResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	Weather1__getWeatherbyCityNameResponse.soap_get(soap, "Weather1:getWeatherbyCityNameResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int WeatherWebServiceSoapProxy::getWeatherbyCityNamePro_(const char *endpoint, const char *soap_action, _Weather1__getWeatherbyCityNamePro *Weather1__getWeatherbyCityNamePro, _Weather1__getWeatherbyCityNameProResponse &Weather1__getWeatherbyCityNameProResponse)
{	struct soap *soap = this;
	struct __Weather1__getWeatherbyCityNamePro_ soap_tmp___Weather1__getWeatherbyCityNamePro_;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://www.webxml.com.cn/WebServices/WeatherWebService.asmx";
	if (soap_action == NULL)
		soap_action = "http://WebXml.com.cn/getWeatherbyCityNamePro";
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_tmp___Weather1__getWeatherbyCityNamePro_.Weather1__getWeatherbyCityNamePro = Weather1__getWeatherbyCityNamePro;
	soap_serializeheader(soap);
	soap_serialize___Weather1__getWeatherbyCityNamePro_(soap, &soap_tmp___Weather1__getWeatherbyCityNamePro_);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___Weather1__getWeatherbyCityNamePro_(soap, &soap_tmp___Weather1__getWeatherbyCityNamePro_, "-Weather1:getWeatherbyCityNamePro", NULL)
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
	 || soap_put___Weather1__getWeatherbyCityNamePro_(soap, &soap_tmp___Weather1__getWeatherbyCityNamePro_, "-Weather1:getWeatherbyCityNamePro", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!&Weather1__getWeatherbyCityNameProResponse)
		return soap_closesock(soap);
	Weather1__getWeatherbyCityNameProResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	Weather1__getWeatherbyCityNameProResponse.soap_get(soap, "Weather1:getWeatherbyCityNameProResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}
/* End of client proxy code */
