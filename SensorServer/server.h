#define HTTP_404_CODE         404
#define HTTP_501_CODE         501
#define HTTP_200_SCSS         200
#define HTTP_SVR_PORT         80

#define CONTENT_TYPE_TEXT     "text/text"
#define HTTP_404_MESSAGE      "404 Not Found"
#define HTTP_501_MESSAGE      "501 Not Implemented"

#include <ESP8266WebServer.h>

ESP8266WebServer webServer(HTTP_SVR_PORT);

void handleClientRequest(){
  pinMode(D0,INPUT);
  webServer.handleClient();
}

#include "http_routes.h"

void initHttp(){

  webServer.onNotFound(notFound);
  webServer.on("/", notImplementedRoute);   
  webServer.on("/ms", getUptimeMS);
  webServer.on("/value", getSensorValue);
  
  webServer.begin();
}
