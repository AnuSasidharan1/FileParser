Action()
{

	

	web_set_user("AP.CAT.COM\\sasida", 
		lr_decrypt("58c8f75bc01b9803a674bf0fc843"), 
		"login.cat.com:443");
	
	web_set_sockets_option("SSL_VERSION", "TLS");

	web_add_header("content-type","text/html");
	web_add_auto_header("Authorization","Bearer eyJhbGciOiJIUzI1NiIsImtpZCI6IjEifQ.eyJjYXRhZmx0bm9yZ2NvZGUiOiJXSyIsImNhdGxvZ2luaWQiOiJzYXNpZGEiLCJjYXRyZWNpZCI6IlBJUC0xMDc2MTAwNCIsImNhdGFmbHRuY29kZSI6IjAwMSIsInVjaWQiOiIiLCJleHAiOjE0ODk1Njg0NDIsInNjb3BlIjpbXSwiY2xpZW50X2lkIjoidmlzdWFsaXphdGlvbl91aV9hY19jbGllbnQiLCJpc3MiOiJodHRwczovL2ZlZGxvZ2luLmNhdC5jb20iLCJhdWQiOiJDQ0RTIn0.s-KxQg7eXMIKNCsBXewNejdaO1FI4whr4eQ093lrxAw");

	
	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_start_transaction("000_GuideViz_Launch");

	web_custom_request("guide", 
		"URL=https://stage-dataviz-ui.azurewebsites.net/guide", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t88.inf", 
		"Mode=HTTP", 
		LAST);

	
	web_add_header("Upgrade-Insecure-Requests", 
		"1");

/*Correlation comment - Do not change!  Original value='cm6QR' Name ='FedLogin' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=FedLogin",
		"RegExp=https://fedlogin\\.cat\\.com:443/as/(.*?)/resume",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);

	web_custom_request("login.htm", 
		"URL=https://login.cat.com/CwsLogin/cws/login.htm?appid=login", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://fedlogin.cat.com/as/authorization.oauth2?pfidpadapterid=OAuthAdapterCCDS&response_type=code&redirect_uri=https%3A%2F%2Fstage-dataviz-ui.azurewebsites.net%2F&client_id=visualization_ui_ac_client", 
		"Snapshot=t94.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_custom_request("jquery.mobile-1.3.1.min.css", 
		"URL=https://login.cat.com/CwsLogin/Resources/style/jquery.mobile-1.3.1.min.css", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://login.cat.com/CwsLogin/cws/login.htm?appid=login", 
		"Snapshot=t95.inf", 
		LAST);

	web_custom_request("login.css", 
		"URL=https://login.cat.com/CwsLogin/Resources/style/Default/CSS/login.css?version=2.0", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://login.cat.com/CwsLogin/cws/login.htm?appid=login", 
		"Snapshot=t96.inf", 
		LAST);

	web_custom_request("common-styles.css", 
		"URL=https://login.cat.com/CwsLogin/Resources/style/common-styles.css", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://login.cat.com/CwsLogin/cws/login.htm?appid=login", 
		"Snapshot=t97.inf", 
		LAST);

	web_custom_request("jquery-1.11.3.min.js", 
		"URL=https://login.cat.com/CwsLogin/Resources/scripts/jquery-1.11.3.min.js", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=https://login.cat.com/CwsLogin/cws/login.htm?appid=login", 
		"Snapshot=t98.inf", 
		LAST);

	web_custom_request("login.js", 
		"URL=https://login.cat.com/CwsLogin/Resources/scripts/login.js?version=2.0", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=https://login.cat.com/CwsLogin/cws/login.htm?appid=login", 
		"Snapshot=t99.inf", 
		LAST);

	web_custom_request("jquery.mobile-1.3.1.min.js", 
		"URL=https://login.cat.com/CwsLogin/Resources/scripts/jquery.mobile-1.3.1.min.js", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=https://login.cat.com/CwsLogin/cws/login.htm?appid=login", 
		"Snapshot=t100.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_concurrent_start(NULL);

	web_custom_request("ajax-loader.gif", 
		"URL=https://login.cat.com/CwsLogin/Resources/style/images/ajax-loader.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://login.cat.com/CwsLogin/Resources/style/jquery.mobile-1.3.1.min.css", 
		"Snapshot=t101.inf", 
		LAST);

	web_custom_request("header-gradient.png", 
		"URL=https://login.cat.com/CwsLogin/Resources/style/images/header-gradient.png", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=https://login.cat.com/CwsLogin/Resources/style/Default/CSS/login.css?version=2.0", 
		"Snapshot=t102.inf", 
		LAST);

	web_custom_request("caterpillar-logo-white2.png", 
		"URL=https://login.cat.com/CwsLogin/Resources/style/images/caterpillar-logo-white2.png", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=https://login.cat.com/CwsLogin/Resources/style/Default/CSS/login.css?version=2.0", 
		"Snapshot=t103.inf", 
		LAST);

	web_custom_request("icons-18-white.png", 
		"URL=https://login.cat.com/CwsLogin/Resources/style/images/icons-18-white.png", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=https://login.cat.com/CwsLogin/Resources/style/jquery.mobile-1.3.1.min.css", 
		"Snapshot=t104.inf", 
		LAST);

	web_custom_request("dialog-warning-small.png", 
		"URL=https://login.cat.com/CwsLogin/Resources/style/images/dialog-warning-small.png", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=https://login.cat.com/CwsLogin/Resources/style/Default/CSS/login.css?version=2.0", 
		"Snapshot=t105.inf", 
		LAST);

	web_custom_request("globe_white.png", 
		"URL=https://login.cat.com/CwsLogin/Resources/style/images/globe_white.png", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=https://login.cat.com/CwsLogin/Resources/style/Default/CSS/login.css?version=2.0", 
		"Snapshot=t106.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_end_transaction("000_GuideViz_Launch", LR_AUTO);


	lr_start_transaction("001_GuideViz_Login");

	lr_save_string(lr_decrypt("58c8f759b6f7fe7b2358762c2fd6"), "PasswordParameter");

//	lr_save_string(lr_decrypt("58c8f759b6f7fe7b2358762c2fd6"), "PasswordParameter");

	web_add_header("Origin", 
		"https://login.cat.com");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_custom_request("processlogin.htm", 
		"URL=https://login.cat.com/CwsLogin/cws/processlogin.htm", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://login.cat.com/CwsLogin/cws/login.htm?appid=login", 
		"Snapshot=t108.inf", 
		"Mode=HTTP", 
		"Body=cwsUID=sasida&cwsPwd={PasswordParameter}&langSelect=%2FCwsLogin%2Fcws%2Flogin.htm%3Flanguage%3Den", 
		LAST);


/*Correlation comment - Do not change!  Original value='2cf3aa1e3ed978a1fa3b' Name ='CorrelationParameter' Type ='ResponseBased'*/
/*	web_reg_save_param_regexp(
		"ParamName=CorrelationParameter",
		"RegExp=vendor\\.bundle\\.js\\?(.*?)\"></script",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=Yes",
		"RequestUrl=*///guide*",
		//LAST);

	web_custom_request("authorization.ping",
		"URL=https://fedlogin.cat.com/as/{FedLogin}/resume/as/authorization.ping",
		"Method=GET",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://login.cat.com/CwsLogin/cws/processlogin.htm",
		"Snapshot=t109.inf",
		"Mode=HTTP",
		LAST);
		
		lr_end_transaction("001_GuideViz_Login",LR_AUTO);

	web_concurrent_start(NULL);
	
	
	lr_start_transaction("002_GuideViz_HomePage");


	web_custom_request("jquery.min.js", 
		"URL=https://stage-dataviz-ui.azurewebsites.net/node_modules/jquery/dist/jquery.min.js", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://stage-dataviz-ui.azurewebsites.net/guide", 
		"Snapshot=t110.inf", 
		LAST);

	web_custom_request("d3.min.js", 
		"URL=https://stage-dataviz-ui.azurewebsites.net/node_modules/d3/d3.min.js", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://stage-dataviz-ui.azurewebsites.net/guide", 
		"Snapshot=t111.inf", 
		LAST);

	web_custom_request("appBundle.js", 
		"URL=https://stage-dataviz-ui.azurewebsites.net/build/appBundle.js?2cf3aa1e3ed978a1fa3b", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://stage-dataviz-ui.azurewebsites.net/guide", 
		"Snapshot=t112.inf", 
		LAST);

	web_custom_request("vendor.bundle.js", 
		"URL=https://stage-dataviz-ui.azurewebsites.net/build/vendor.bundle.js?2cf3aa1e3ed978a1fa3b", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://stage-dataviz-ui.azurewebsites.net/guide", 
		"Snapshot=t113.inf", 
		LAST);

/*	web_custom_request("bootstrap.min.css", 
		"URL=https://maxcdn.bootstrapcdn.com/bootstrap/3.3.4/css/bootstrap.min.css", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://stage-dataviz-ui.azurewebsites.net/guide", 
		"Snapshot=t114.inf", 
		LAST);

	

	web_custom_request("underscore-min.js", 
		"URL=https://cdnjs.cloudflare.com/ajax/libs/underscore.js/1.8.3/underscore-min.js", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://stage-dataviz-ui.azurewebsites.net/guide", 
		"Snapshot=t116.inf", 
		LAST);

	web_custom_request("nv.d3.min.js", 
		"URL=https://cdnjs.cloudflare.com/ajax/libs/nvd3/1.8.4/nv.d3.min.js", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://stage-dataviz-ui.azurewebsites.net/guide", 
		"Snapshot=t117.inf", 
		LAST);

	web_custom_request("es6-shim.min.js", 
		"URL=https://cdnjs.cloudflare.com/ajax/libs/es6-shim/0.33.3/es6-shim.min.js", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://stage-dataviz-ui.azurewebsites.net/guide", 
		"Snapshot=t118.inf", 
		LAST);

	web_custom_request("system-polyfills.js", 
		"URL=https://cdnjs.cloudflare.com/ajax/libs/systemjs/0.19.20/system-polyfills.js", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://stage-dataviz-ui.azurewebsites.net/guide", 
		"Snapshot=t119.inf", 
		LAST);

	web_custom_request("highstock.js", 
		"URL=https://code.highcharts.com/stock/highstock.js", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://stage-dataviz-ui.azurewebsites.net/guide", 
		"Snapshot=t120.inf", 
		LAST);

	web_custom_request("shims_for_IE.js", 
		"URL=https://npmcdn.com/angular2/es6/dev/src/testing/shims_for_IE.js", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://stage-dataviz-ui.azurewebsites.net/guide", 
		"Snapshot=t121.inf", 
		LAST);*/

	web_custom_request("d3.tip.min.js", 
		"URL=https://dev-dataviz-ui.azurewebsites.net/cdn/d3.tip.min.js", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://stage-dataviz-ui.azurewebsites.net/guide", 
		"Snapshot=t122.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_concurrent_start(NULL);

	
	web_custom_request("2ec330e49e2d57d12048ebe737cfc479.svg", 
		"URL=https://stage-dataviz-ui.azurewebsites.net/build/2ec330e49e2d57d12048ebe737cfc479.svg", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/svg+xml", 
		"Referer=https://stage-dataviz-ui.azurewebsites.net/", 
		"Snapshot=t127.inf", 
		LAST);

	web_custom_request("resources-locale_en-US.json", 
		"URL=https://stage-dataviz-ui.azurewebsites.net/i18n/resources-locale_en-US.json", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=https://stage-dataviz-ui.azurewebsites.net/guide", 
		"Snapshot=t128.inf", 
		LAST);

	web_custom_request("apigetdata", 
		"URL=https://stage-dataviz-ui.azurewebsites.net/apigetdata?handlerURL=https:%2F%2Fstage-datavizui-services.azurewebsites.net%2FGuide%2FFilters%2FFiltersList&params=", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=https://stage-dataviz-ui.azurewebsites.net/guide", 
		"Snapshot=t129.inf", 
		LAST);

	

	web_add_header("Origin", 
		"https://stage-dataviz-ui.azurewebsites.net");

	web_custom_request("7cf5cb59243bcc62c6ab82eafb7e4779.ttf", 
		"URL=https://stage-dataviz-ui.azurewebsites.net/build/7cf5cb59243bcc62c6ab82eafb7e4779.ttf", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/x-font-ttf", 
		"Referer=https://stage-dataviz-ui.azurewebsites.net/", 
		"Snapshot=t132.inf", 
		LAST);

	web_add_header("Origin", 
		"https://stage-dataviz-ui.azurewebsites.net");

	web_custom_request("e22062b3188c8199283ef2aa835d4653.ttf", 
		"URL=https://stage-dataviz-ui.azurewebsites.net/build/e22062b3188c8199283ef2aa835d4653.ttf", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/x-font-ttf", 
		"Referer=https://stage-dataviz-ui.azurewebsites.net/", 
		"Snapshot=t133.inf", 
		LAST);

	
	web_concurrent_end(NULL);

	//web_add_cookie("NID=90=oSMoRqHgXtDfiP3QEpPbhsFV2UF15ghGieWH0qnZphakjBtfR_KihIe5CiTGljBVfRckScJk7wLv_xljSvroC3dDO-kJi89cIuc4VAQgi7Z95tMs_T4Gh7ZJwSM0Y7AG; DOMAIN=safebrowsing.google.com");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	

	web_add_header("Origin", 
		"https://stage-dataviz-ui.azurewebsites.net");

	web_custom_request("82b3ebfbeae04c7223dc068653403dbb.woff", 
		"URL=https://stage-dataviz-ui.azurewebsites.net/build/82b3ebfbeae04c7223dc068653403dbb.woff", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/font-woff", 
		"Referer=https://stage-dataviz-ui.azurewebsites.net/", 
		"Snapshot=t143.inf", 
		LAST);

	
lr_end_transaction("002_GuideViz_HomePage", LR_AUTO);

	

	lr_think_time(5);

	
	lr_start_transaction("003_Events_TotalEventCOunt_SelectEvents");

	web_add_auto_header("Origin", 
		"https://stage-dataviz-ui.azurewebsites.net");

	web_custom_request("apipostdata", 
		"URL=https://stage-dataviz-ui.azurewebsites.net/apipostdata", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage-dataviz-ui.azurewebsites.net/guide", 
		"Snapshot=t144.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"params\":{\"makeSerialNumberList\":\"CAT|SLM00560,CAT|RSD00240,CAT|SLM00561,CAT|RSD00239\",\"startTime\":\"03/09/2017 00:00:00\",\"endTime\":\"03/15/2017 23:59:59\",\"zone\":\"UTC\",\"available\":true,\"groupId\":\"1efe7bc8-f721-4bc9-8338-7bafc7299a61\"},\"handlerURL\":\"https://stage-datavizui-services.azurewebsites.net/Guide/Events/EventsList\"}", 
		LAST);

	web_custom_request("apipostdata_2", 
		"URL=https://stage-dataviz-ui.azurewebsites.net/apipostdata", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage-dataviz-ui.azurewebsites.net/guide", 
		"Snapshot=t145.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"params\":{\"makeSerialNumberList\":\"CAT|SLM00560,CAT|RSD00240,CAT|SLM00561,CAT|RSD00239\",\"startTime\":\"03/09/2017 00:00:00\",\"endTime\":\"03/15/2017 23:59:59\",\"zone\":\"UTC\",\"available\":false,\"groupId\":\"1efe7bc8-f721-4bc9-8338-7bafc7299a61\"},\"handlerURL\":\"https://stage-datavizui-services.azurewebsites.net/Guide/Events/EventsList\"}", 
		LAST);

	lr_end_transaction("003_Events_TotalEventCOunt_SelectEvents",LR_AUTO);

	lr_think_time(5);

	lr_start_transaction("004_Events_TotalEventCOunt_Chart");

	web_custom_request("apipostdata_3", 
		"URL=https://stage-dataviz-ui.azurewebsites.net/apipostdata", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage-dataviz-ui.azurewebsites.net/guide", 
		"Snapshot=t146.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"params\":{\"makeSerialNumberList\":\"CAT|SLM00560,CAT|RSD00240,CAT|SLM00561,CAT|RSD00239\",\"startTime\":\"03/09/2017 00:00:00\",\"endTime\":\"03/15/2017 23:59:59\",\"aggregation\":\"count\",\"groupBy\":\"level\",\"zone\":\"UTC\",\"groupId\":\"1efe7bc8-f721-4bc9-8338-7bafc7299a61\",\"language\":\"english\",\"xAxis\":\"\",\"yAxis\":\"\",\"chartType\":\"Total Event Count\",\"datatype\":\"event\",\"make\":\"CAT\",\"eventId\":\"274-3-1,168-3,110-15-3,110-0-3,2774-8-3,2774-10-3,2775-3-3,"
		"2775-3-3,2775-3,105-15-3,100-3-1,175-15-3,361-2,197-2,539-2,639-9-3,639-9-3,639-3,91-8-1,91-8-1\",\"limit\":\"0\",\"offset\":\"0\",\"sortBy\":\"\",\"orderBy\":\"\"},\"handlerURL\":\"https://stage-datavizui-services.azurewebsites.net/Guide/Events/Summary\"}", 
		LAST);

	lr_end_transaction("004_Events_TotalEventCOunt_Chart",LR_AUTO);

	lr_think_time(5);

	
	lr_start_transaction("005_Events_EventCOuntForSelectedDays_SelectEvents");

	web_custom_request("apipostdata_4", 
		"URL=https://stage-dataviz-ui.azurewebsites.net/apipostdata", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage-dataviz-ui.azurewebsites.net/guide", 
		"Snapshot=t147.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"params\":{\"makeSerialNumberList\":\"CAT|SLM00560,CAT|RSD00240,CAT|SLM00561,CAT|RSD00239\",\"startTime\":\"03/09/2017 00:00:00\",\"endTime\":\"03/15/2017 23:59:59\",\"zone\":\"UTC\",\"available\":false,\"groupId\":\"1efe7bc8-f721-4bc9-8338-7bafc7299a61\"},\"handlerURL\":\"https://stage-datavizui-services.azurewebsites.net/Guide/Events/EventsList\"}", 
		LAST);

	web_custom_request("apipostdata_5", 
		"URL=https://stage-dataviz-ui.azurewebsites.net/apipostdata", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage-dataviz-ui.azurewebsites.net/guide", 
		"Snapshot=t148.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"params\":{\"makeSerialNumberList\":\"CAT|SLM00560,CAT|RSD00240,CAT|SLM00561,CAT|RSD00239\",\"startTime\":\"03/09/2017 00:00:00\",\"endTime\":\"03/15/2017 23:59:59\",\"zone\":\"UTC\",\"available\":true,\"groupId\":\"1efe7bc8-f721-4bc9-8338-7bafc7299a61\"},\"handlerURL\":\"https://stage-datavizui-services.azurewebsites.net/Guide/Events/EventsList\"}", 
		LAST);

	lr_end_transaction("005_Events_EventCOuntForSelectedDays_SelectEvents",LR_AUTO);

	lr_think_time(5);

	lr_start_transaction("006_Events_EventCOuntForSelectedDays_Chart");

	web_custom_request("apipostdata_6", 
		"URL=https://stage-dataviz-ui.azurewebsites.net/apipostdata", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage-dataviz-ui.azurewebsites.net/guide", 
		"Snapshot=t149.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"params\":{\"makeSerialNumberList\":\"CAT|SLM00560,CAT|RSD00240,CAT|SLM00561,CAT|RSD00239\",\"startTime\":\"03/09/2017 00:00:00\",\"endTime\":\"03/15/2017 23:59:59\",\"aggregation\":\"count\",\"groupBy\":\"level,date\",\"zone\":\"UTC\",\"groupId\":\"1efe7bc8-f721-4bc9-8338-7bafc7299a61\",\"language\":\"english\",\"xAxis\":\"Event Count\",\"yAxis\":\"Date\",\"chartType\":\"Event Count for Selected Days\",\"datatype\":\"event\",\"make\":\"CAT\",\"eventId\":\"110-15-3,110-0-3,2775-3-3,2775-3-3"
		",2775-3,105-15-3,100-3-1,175-15-3,361-2,197-2,539-2,639-9-3,639-9-3,639-3,91-8-1,91-8-1\",\"limit\":7,\"offset\":\"0\",\"sortBy\":\"\",\"orderBy\":\"\"},\"handlerURL\":\"https://stage-datavizui-services.azurewebsites.net/Guide/Events/Count\"}", 
		LAST);

	lr_end_transaction("006_Events_EventCOuntForSelectedDays_Chart",LR_AUTO);

	lr_think_time(5);

	
	lr_start_transaction("007_Events_Top10Equipments_SelectEvents");

	web_add_auto_header("Origin", 
		"https://stage-dataviz-ui.azurewebsites.net");

	web_custom_request("apipostdata_7", 
		"URL=https://stage-dataviz-ui.azurewebsites.net/apipostdata", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage-dataviz-ui.azurewebsites.net/guide", 
		"Snapshot=t152.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"params\":{\"makeSerialNumberList\":\"CAT|SLM00560,CAT|RSD00240,CAT|SLM00561,CAT|RSD00239\",\"startTime\":\"03/09/2017 00:00:00\",\"endTime\":\"03/15/2017 23:59:59\",\"zone\":\"UTC\",\"available\":false,\"groupId\":\"1efe7bc8-f721-4bc9-8338-7bafc7299a61\"},\"handlerURL\":\"https://stage-datavizui-services.azurewebsites.net/Guide/Events/EventsList\"}", 
		LAST);

	web_custom_request("apipostdata_8", 
		"URL=https://stage-dataviz-ui.azurewebsites.net/apipostdata", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage-dataviz-ui.azurewebsites.net/guide", 
		"Snapshot=t153.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"params\":{\"makeSerialNumberList\":\"CAT|SLM00560,CAT|RSD00240,CAT|SLM00561,CAT|RSD00239\",\"startTime\":\"03/09/2017 00:00:00\",\"endTime\":\"03/15/2017 23:59:59\",\"zone\":\"UTC\",\"available\":true,\"groupId\":\"1efe7bc8-f721-4bc9-8338-7bafc7299a61\"},\"handlerURL\":\"https://stage-datavizui-services.azurewebsites.net/Guide/Events/EventsList\"}", 
		LAST);

	lr_end_transaction("007_Events_Top10Equipments_SelectEvents",LR_AUTO);

	lr_think_time(5);

	lr_start_transaction("008_Events_Top10Equipments_Chart");

	web_custom_request("apipostdata_9", 
		"URL=https://stage-dataviz-ui.azurewebsites.net/apipostdata", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage-dataviz-ui.azurewebsites.net/guide", 
		"Snapshot=t154.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"params\":{\"makeSerialNumberList\":\"CAT|SLM00560,CAT|RSD00240,CAT|SLM00561,CAT|RSD00239\",\"startTime\":\"03/09/2017 00:00:00\",\"endTime\":\"03/15/2017 23:59:59\",\"aggregation\":\"count\",\"groupBy\":\"make,serialNumber,level\",\"zone\":\"UTC\",\"groupId\":\"1efe7bc8-f721-4bc9-8338-7bafc7299a61\",\"language\":\"english\",\"xAxis\":\"Event Count\",\"yAxis\":\"Equipments\",\"chartType\":\"Top 10 Equipments\",\"datatype\":\"event\",\"make\":\"CAT\",\"eventId\":\"110-15-3,110-0-3,2775-3-3,"
		"2775-3-3,2775-3,105-15-3,100-3-1,175-15-3,361-2,197-2,539-2,639-9-3,639-9-3,639-3,91-8-1,91-8-1\",\"limit\":\"10\",\"offset\":\"0\",\"sortBy\":\"\",\"orderBy\":\"\"},\"handlerURL\":\"https://stage-datavizui-services.azurewebsites.net/Guide/Events/EventCountByEquipment\"}", 
		LAST);

	lr_end_transaction("008_Events_Top10Equipments_Chart",LR_AUTO);

	lr_think_time(5);

	lr_start_transaction("009_Events_Top10Events_SelectEvents");

	web_custom_request("apipostdata_10", 
		"URL=https://stage-dataviz-ui.azurewebsites.net/apipostdata", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage-dataviz-ui.azurewebsites.net/guide", 
		"Snapshot=t155.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"params\":{\"makeSerialNumberList\":\"CAT|SLM00560,CAT|RSD00240,CAT|SLM00561,CAT|RSD00239\",\"startTime\":\"03/09/2017 00:00:00\",\"endTime\":\"03/15/2017 23:59:59\",\"zone\":\"UTC\",\"available\":false,\"groupId\":\"1efe7bc8-f721-4bc9-8338-7bafc7299a61\"},\"handlerURL\":\"https://stage-datavizui-services.azurewebsites.net/Guide/Events/EventsList\"}", 
		LAST);

	web_custom_request("apipostdata_11", 
		"URL=https://stage-dataviz-ui.azurewebsites.net/apipostdata", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage-dataviz-ui.azurewebsites.net/guide", 
		"Snapshot=t156.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"params\":{\"makeSerialNumberList\":\"CAT|SLM00560,CAT|RSD00240,CAT|SLM00561,CAT|RSD00239\",\"startTime\":\"03/09/2017 00:00:00\",\"endTime\":\"03/15/2017 23:59:59\",\"zone\":\"UTC\",\"available\":true,\"groupId\":\"1efe7bc8-f721-4bc9-8338-7bafc7299a61\"},\"handlerURL\":\"https://stage-datavizui-services.azurewebsites.net/Guide/Events/EventsList\"}", 
		LAST);

	lr_end_transaction("009_Events_Top10Events_SelectEvents",LR_AUTO);

	lr_think_time(5);

	lr_start_transaction("010_Events_Top10Events_Chart");

	web_custom_request("apipostdata_12", 
		"URL=https://stage-dataviz-ui.azurewebsites.net/apipostdata", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage-dataviz-ui.azurewebsites.net/guide", 
		"Snapshot=t157.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"params\":{\"makeSerialNumberList\":\"CAT|SLM00560,CAT|RSD00240,CAT|SLM00561,CAT|RSD00239\",\"startTime\":\"03/09/2017 00:00:00\",\"endTime\":\"03/15/2017 23:59:59\",\"aggregation\":\"count\",\"groupBy\":\"codeCombination,level\",\"zone\":\"UTC\",\"groupId\":\"1efe7bc8-f721-4bc9-8338-7bafc7299a61\",\"language\":\"english\",\"xAxis\":\"Event Count\",\"yAxis\":\"Event ID\",\"chartType\":\"Top 10 Events\",\"datatype\":\"event\",\"make\":\"CAT\",\"eventId\":\"110-15-3,110-0-3,2775-3-3,2775-3-3,"
		"2775-3,105-15-3,100-3-1,175-15-3,361-2,197-2,539-2,639-9-3,639-9-3,639-3,91-8-1,91-8-1\",\"limit\":\"10\",\"offset\":\"0\",\"sortBy\":\"\",\"orderBy\":\"\"},\"handlerURL\":\"https://stage-datavizui-services.azurewebsites.net/Guide/Events/Count\"}", 
		LAST);

	lr_end_transaction("010_Events_Top10Events_Chart",LR_AUTO);

	lr_think_time(5);

	lr_start_transaction("011_Utilization_TotalFuel_Chart");

	web_custom_request("apipostdata_13", 
		"URL=https://stage-dataviz-ui.azurewebsites.net/apipostdata", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage-dataviz-ui.azurewebsites.net/guide", 
		"Snapshot=t158.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"params\":{\"make\":\"CAT\",\"makeSerialNumberList\":\"CAT|SLM00560,CAT|RSD00240,CAT|SLM00561,CAT|RSD00239\",\"startTime\":\"03/09/2017 00:00:00\",\"endTime\":\"03/15/2017 23:59:59\",\"zone\":\"UTC\",\"chartType\":\"fuel\",\"groupBy\":\"make,serialNumber,day\",\"offset\":\"1\",\"limit\":\"25\",\"groupId\":\"1efe7bc8-f721-4bc9-8338-7bafc7299a61\",\"datatype\":\"utilization\"},\"handlerURL\":\"https://stage-datavizui-services.azurewebsites.net/Guide/Utilization/Summary\"}", 
		LAST);

	lr_end_transaction("011_Utilization_TotalFuel_Chart",LR_AUTO);

	lr_think_time(5);

	lr_start_transaction("012_Utilization_TotalHours_Chart");

	web_custom_request("apipostdata_14", 
		"URL=https://stage-dataviz-ui.azurewebsites.net/apipostdata", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage-dataviz-ui.azurewebsites.net/guide", 
		"Snapshot=t159.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"params\":{\"make\":\"CAT\",\"makeSerialNumberList\":\"CAT|SLM00560,CAT|RSD00240,CAT|SLM00561,CAT|RSD00239\",\"startTime\":\"03/09/2017 00:00:00\",\"endTime\":\"03/15/2017 23:59:59\",\"zone\":\"UTC\",\"chartType\":\"hours\",\"groupBy\":\"make,serialNumber,day\",\"offset\":\"1\",\"limit\":\"25\",\"groupId\":\"1efe7bc8-f721-4bc9-8338-7bafc7299a61\",\"datatype\":\"utilization\"},\"handlerURL\":\"https://stage-datavizui-services.azurewebsites.net/Guide/Utilization/Summary\"}", 
		LAST);

	lr_end_transaction("012_Utilization_TotalHours_Chart",LR_AUTO);

	lr_think_time(5);

	lr_start_transaction("013_Utilization_TotalFuelPERHour_Chart");

	web_custom_request("apipostdata_15", 
		"URL=https://stage-dataviz-ui.azurewebsites.net/apipostdata", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage-dataviz-ui.azurewebsites.net/guide", 
		"Snapshot=t160.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"params\":{\"make\":\"CAT\",\"makeSerialNumberList\":\"CAT|SLM00560,CAT|RSD00240,CAT|SLM00561,CAT|RSD00239\",\"startTime\":\"03/09/2017 00:00:00\",\"endTime\":\"03/15/2017 23:59:59\",\"zone\":\"UTC\",\"chartType\":\"fuelPerHour\",\"groupBy\":\"make,serialNumber,day\",\"offset\":\"1\",\"limit\":\"25\",\"groupId\":\"1efe7bc8-f721-4bc9-8338-7bafc7299a61\",\"datatype\":\"utilization\"},\"handlerURL\":\"https://stage-datavizui-services.azurewebsites.net/Guide/Utilization/Summary\"}", 
		LAST);

	lr_end_transaction("013_Utilization_TotalFuelPERHour_Chart",LR_AUTO);

	lr_think_time(5);

	return 0;
}