void setup() {
  Serial.begin(19200);         // 启动串行连接，波特率为19200
}

void loop() {
  if(Serial.available() > 0){                         // 检查缓冲区内是否有可用的字节可供读取
    String str = Serial.readString();                 // 读取字节为字符串
     Serial.println(str);
    }
 }
