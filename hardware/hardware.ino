#include <Wire.h>
#include <FaBo9Axis_MPU9250.h>

FaBo9Axis fabo_9axis;

void setup() {
  Serial.begin(9600);

  fabo_9axis.begin();
  
}

void loop() {
  float ax,ay,az;
  float gx,gy,gz;
  float mx,my,mz;
  float temp;

  fabo_9axis.readAccelXYZ(&ax,&ay,&az);
  fabo_9axis.readGyroXYZ(&gx,&gy,&gz);
  fabo_9axis.readMagnetXYZ(&mx,&my,&mz);
  fabo_9axis.readTemperature(&temp);

  Serial.print("{ ");
  Serial.print("'ax': ");
  Serial.print(ax);
  Serial.print(",");
  Serial.print(" 'ay': ");
  Serial.print(ay);
  Serial.print(",");
  Serial.print(" 'az': ");
  Serial.print(az);
  Serial.print(",");

  Serial.print(" 'gx': ");
  Serial.print(gx);
  Serial.print(",");
  Serial.print(" 'gy': ");
  Serial.print(gy);
  Serial.print(",");
  Serial.print(" 'gz': ");
  Serial.print(gz);
  Serial.print(",");

  Serial.print(" 'mx': ");
  Serial.print(mx);
  Serial.print(",");
  Serial.print(" 'my': ");
  Serial.print(my);
  Serial.print(",");
  Serial.print(" 'mz': ");
  Serial.print(mz);
  Serial.print(",");


  Serial.print(" 'temp': ");
  Serial.print(temp);
  Serial.println(" }");

  delay(1000);
}
