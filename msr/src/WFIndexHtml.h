const char index_html[] PROGMEM = R"rawliteral(<!DOCTYPE HTML><html><head> <title>Meteo Station Config</title> <style>input.text{background-color: linen; height: 30px; width: 300px; border-radius: 5px; border-color: black;}input.submit{background-color: rgb(95, 226, 171); height: 30px; width: 307px; border-radius: 5px; border-color: black;}</style></head><body> <form action='/configure' method='POST'> <h1>Meteo Station WiFi and Server Configuration</h1><br><input class='text' type='text' name='SSID' placeholder='wifi ssid'><br><br><input class='text' type='text' name='PASS' placeholder='wifi pass'><br><br><input class='text' type='text' name='HOST' placeholder='server url '><br><br><input class='text' type='text' name='PATH' placeholder='server path'><br><br><input class='submit' type='submit' name='SUBMIT' value='Submit'> </form></body></html>)rawliteral";
