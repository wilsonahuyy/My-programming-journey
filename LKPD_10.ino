PK    zeY               wokwi-project.txtDownloaded from https://wokwi.com/projects/413700719927989249

Simulate this project on https://wokwi.com
PK��_�m   m   PK    zeY            
   sketch.ino//Wilka Nusantara
//XI TAV 2
const int buttonPin = 26;
void setup() {
  PinMode(buttonPin, INPUT);
  Serial.begin(9600);
}
void loop() {
int buttonState = digitalRead(buttonpin);
Serial.print("Tombol ditekan: ");
if (buttonState == HIGH) {
  Serial.println("YA");
} else {
  Serial.println("TIDAK");
delay(100);
}
}

PKj�ġ=  =  PK    zeY               diagram.json{
  "version": 1,
  "author": "Wilka Nusantara",
  "editor": "wokwi",
  "parts": [ { "type": "board-esp32-devkit-c-v4", "id": "esp", "top": 0, "left": 0, "attrs": {} } ],
  "connections": [ [ "esp:TX", "$serialMonitor:RX", "", [] ], [ "esp:RX", "$serialMonitor:TX", "", [] ] ],
  "dependencies": {}
}PK�9h,  ,  PK    zeY��_�m   m              ��    wokwi-project.txtPK    zeYj�ġ=  =  
           ���   sketch.inoPK    zeY�9h,  ,             ��!  diagram.jsonPK      �   �    