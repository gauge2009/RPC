/* soapWeatherWebServiceSoapProxy.h
   Generated by gSOAP 2.8.22 from WeatherWeb.h

Copyright(C) 2000-2015, Robert van Engelen, Genivia Inc. All Rights Reserved.
The generated code is released under one of the following licenses:
GPL or Genivia's license for commercial use.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
*/

#ifndef soapWeatherWebServiceSoapProxy_H
#define soapWeatherWebServiceSoapProxy_H
#include "soapH.h"

class SOAP_CMAC WeatherWebServiceSoapProxy : public soap
{ public:
	/// Endpoint URL of service 'WeatherWebServiceSoapProxy' (change as needed)
	const char *soap_endpoint;
	/// Variables globally declared in WeatherWeb.h (non-static)
	/// Constructor
	WeatherWebServiceSoapProxy();
	/// Construct from another engine state
	WeatherWebServiceSoapProxy(const struct soap&);
	/// Constructor with endpoint URL
	WeatherWebServiceSoapProxy(const char *url);
	/// Constructor with engine input+output mode control
	WeatherWebServiceSoapProxy(soap_mode iomode);
	/// Constructor with URL and input+output mode control
	WeatherWebServiceSoapProxy(const char *url, soap_mode iomode);
	/// Constructor with engine input and output mode control
	WeatherWebServiceSoapProxy(soap_mode imode, soap_mode omode);
	/// Destructor frees deserialized data
	virtual	~WeatherWebServiceSoapProxy();
	/// Initializer used by constructors
	virtual	void WeatherWebServiceSoapProxy_init(soap_mode imode, soap_mode omode);
	/// Delete all deserialized data (with soap_destroy and soap_end)
	virtual	void destroy();
	/// Delete all deserialized data and reset to default
	virtual	void reset();
	/// Disables and removes SOAP Header from message
	virtual	void soap_noheader();
	/// Get SOAP Header structure (NULL when absent)
	virtual	const SOAP_ENV__Header *soap_header();
	/// Get SOAP Fault structure (NULL when absent)
	virtual	const SOAP_ENV__Fault *soap_fault();
	/// Get SOAP Fault string (NULL when absent)
	virtual	const char *soap_fault_string();
	/// Get SOAP Fault detail as string (NULL when absent)
	virtual	const char *soap_fault_detail();
	/// Close connection (normally automatic, except for send_X ops)
	virtual	int soap_close_socket();
	/// Force close connection (can kill a thread blocked on IO)
	virtual	int soap_force_close_socket();
	/// Print fault
	virtual	void soap_print_fault(FILE*);
#ifndef WITH_LEAN
	/// Print fault to stream
#ifndef WITH_COMPAT
	virtual	void soap_stream_fault(std::ostream&);
#endif

	/// Put fault into buffer
	virtual	char *soap_sprint_fault(char *buf, size_t len);
#endif

	/// Web service operation 'getSupportCity' (returns error code or SOAP_OK)
	virtual	int getSupportCity(_Weather1__getSupportCity *Weather1__getSupportCity, _Weather1__getSupportCityResponse &Weather1__getSupportCityResponse) { return this->getSupportCity(NULL, NULL, Weather1__getSupportCity, Weather1__getSupportCityResponse); }
	virtual	int getSupportCity(const char *endpoint, const char *soap_action, _Weather1__getSupportCity *Weather1__getSupportCity, _Weather1__getSupportCityResponse &Weather1__getSupportCityResponse);

	/// Web service operation 'getSupportProvince' (returns error code or SOAP_OK)
	virtual	int getSupportProvince(_Weather1__getSupportProvince *Weather1__getSupportProvince, _Weather1__getSupportProvinceResponse &Weather1__getSupportProvinceResponse) { return this->getSupportProvince(NULL, NULL, Weather1__getSupportProvince, Weather1__getSupportProvinceResponse); }
	virtual	int getSupportProvince(const char *endpoint, const char *soap_action, _Weather1__getSupportProvince *Weather1__getSupportProvince, _Weather1__getSupportProvinceResponse &Weather1__getSupportProvinceResponse);

	/// Web service operation 'getSupportDataSet' (returns error code or SOAP_OK)
	virtual	int getSupportDataSet(_Weather1__getSupportDataSet *Weather1__getSupportDataSet, _Weather1__getSupportDataSetResponse &Weather1__getSupportDataSetResponse) { return this->getSupportDataSet(NULL, NULL, Weather1__getSupportDataSet, Weather1__getSupportDataSetResponse); }
	virtual	int getSupportDataSet(const char *endpoint, const char *soap_action, _Weather1__getSupportDataSet *Weather1__getSupportDataSet, _Weather1__getSupportDataSetResponse &Weather1__getSupportDataSetResponse);

	/// Web service operation 'getWeatherbyCityName' (returns error code or SOAP_OK)
	virtual	int getWeatherbyCityName(_Weather1__getWeatherbyCityName *Weather1__getWeatherbyCityName, _Weather1__getWeatherbyCityNameResponse &Weather1__getWeatherbyCityNameResponse) { return this->getWeatherbyCityName(NULL, NULL, Weather1__getWeatherbyCityName, Weather1__getWeatherbyCityNameResponse); }
	virtual	int getWeatherbyCityName(const char *endpoint, const char *soap_action, _Weather1__getWeatherbyCityName *Weather1__getWeatherbyCityName, _Weather1__getWeatherbyCityNameResponse &Weather1__getWeatherbyCityNameResponse);

	/// Web service operation 'getWeatherbyCityNamePro' (returns error code or SOAP_OK)
	virtual	int getWeatherbyCityNamePro(_Weather1__getWeatherbyCityNamePro *Weather1__getWeatherbyCityNamePro, _Weather1__getWeatherbyCityNameProResponse &Weather1__getWeatherbyCityNameProResponse) { return this->getWeatherbyCityNamePro(NULL, NULL, Weather1__getWeatherbyCityNamePro, Weather1__getWeatherbyCityNameProResponse); }
	virtual	int getWeatherbyCityNamePro(const char *endpoint, const char *soap_action, _Weather1__getWeatherbyCityNamePro *Weather1__getWeatherbyCityNamePro, _Weather1__getWeatherbyCityNameProResponse &Weather1__getWeatherbyCityNameProResponse);

	/// Web service operation 'getSupportCity' (returns error code or SOAP_OK)
	virtual	int getSupportCity_(_Weather1__getSupportCity *Weather1__getSupportCity, _Weather1__getSupportCityResponse &Weather1__getSupportCityResponse) { return this->getSupportCity_(NULL, NULL, Weather1__getSupportCity, Weather1__getSupportCityResponse); }
	virtual	int getSupportCity_(const char *endpoint, const char *soap_action, _Weather1__getSupportCity *Weather1__getSupportCity, _Weather1__getSupportCityResponse &Weather1__getSupportCityResponse);

	/// Web service operation 'getSupportProvince' (returns error code or SOAP_OK)
	virtual	int getSupportProvince_(_Weather1__getSupportProvince *Weather1__getSupportProvince, _Weather1__getSupportProvinceResponse &Weather1__getSupportProvinceResponse) { return this->getSupportProvince_(NULL, NULL, Weather1__getSupportProvince, Weather1__getSupportProvinceResponse); }
	virtual	int getSupportProvince_(const char *endpoint, const char *soap_action, _Weather1__getSupportProvince *Weather1__getSupportProvince, _Weather1__getSupportProvinceResponse &Weather1__getSupportProvinceResponse);

	/// Web service operation 'getSupportDataSet' (returns error code or SOAP_OK)
	virtual	int getSupportDataSet_(_Weather1__getSupportDataSet *Weather1__getSupportDataSet, _Weather1__getSupportDataSetResponse &Weather1__getSupportDataSetResponse) { return this->getSupportDataSet_(NULL, NULL, Weather1__getSupportDataSet, Weather1__getSupportDataSetResponse); }
	virtual	int getSupportDataSet_(const char *endpoint, const char *soap_action, _Weather1__getSupportDataSet *Weather1__getSupportDataSet, _Weather1__getSupportDataSetResponse &Weather1__getSupportDataSetResponse);

	/// Web service operation 'getWeatherbyCityName' (returns error code or SOAP_OK)
	virtual	int getWeatherbyCityName_(_Weather1__getWeatherbyCityName *Weather1__getWeatherbyCityName, _Weather1__getWeatherbyCityNameResponse &Weather1__getWeatherbyCityNameResponse) { return this->getWeatherbyCityName_(NULL, NULL, Weather1__getWeatherbyCityName, Weather1__getWeatherbyCityNameResponse); }
	virtual	int getWeatherbyCityName_(const char *endpoint, const char *soap_action, _Weather1__getWeatherbyCityName *Weather1__getWeatherbyCityName, _Weather1__getWeatherbyCityNameResponse &Weather1__getWeatherbyCityNameResponse);

	/// Web service operation 'getWeatherbyCityNamePro' (returns error code or SOAP_OK)
	virtual	int getWeatherbyCityNamePro_(_Weather1__getWeatherbyCityNamePro *Weather1__getWeatherbyCityNamePro, _Weather1__getWeatherbyCityNameProResponse &Weather1__getWeatherbyCityNameProResponse) { return this->getWeatherbyCityNamePro_(NULL, NULL, Weather1__getWeatherbyCityNamePro, Weather1__getWeatherbyCityNameProResponse); }
	virtual	int getWeatherbyCityNamePro_(const char *endpoint, const char *soap_action, _Weather1__getWeatherbyCityNamePro *Weather1__getWeatherbyCityNamePro, _Weather1__getWeatherbyCityNameProResponse &Weather1__getWeatherbyCityNameProResponse);
};
#endif
