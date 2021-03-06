#ifndef WF_H_
#define WF_H_

#include <Arduino.h>
#include <WiFi.h>
#include <WebServer.h>

#include "config.h"
#include "SPImem.h"
#include "WFIndexHtml.h"
#include "WFDoneHtml.h"

class WF{
    public:
        void init(void);
        void initAP(void);
        void initWebServer(void);

        void runWebServer(void);

        int wfDisconnect(void);
        int getTime(int* day, int* month, int* year, int* wday, int* hour, int* min, int*seg);
        int getStatus(void);
        String getSignalStrength(void);


    private:
        SMEM smem;

        String ssid;
        String pass;
        
        char ssid_str[30] = "Red Visita";
        char pass_str[20] =  "$visita$$";
        char host_str[50] = "Red Visita";
        char path_str[50] =  "$visita$$";

        WebServer * server = NULL;
};
#endif
