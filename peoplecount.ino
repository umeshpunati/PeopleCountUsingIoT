#include <ESP8266HTTPClient.h>

void publishCount() {
  if (WiFi.status() == WL_CONNECTED) {
    HTTPClient http;
    http.begin("https://script.google.com/macros/s/YOUR_SCRIPT_ID/exec");
    http.addHeader("Content-Type", "application/x-www-form-urlencoded");
    String payload = "count=" + String(count);
    int httpResponseCode = http.POST(payload);
    Serial.println("Sent to Google Sheets, Response: " + String(httpResponseCode));
    http.end();
  }
}
