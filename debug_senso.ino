#define MAX_BUFFER 40
typedef struct Smartcampus
{
  int n;
  float v;
  long t;
} Smartcampus;
#include "senso_eeprom.h"

void setup() {
  EEPROM.begin(EEPROM_SIZE);
  Serial.begin(115200);
  Serial.println("***************************");
  Serial.println("Senso DEBUG - EEPROM READER");
  Serial.println("***************************");
  Serial.println();

  Serial.print("Init timestamp: "); Serial.println(getTimestamp());
  Serial.print("Buffer size: "); Serial.println(getBufferSize());
  Serial.print("Sync: "); Serial.println(getSync());
  Serial.print("Next Sync: "); Serial.println(getNxSync());
  Serial.print("Sampling: "); Serial.println(getSampling());
  Serial.print("Next Sampling: "); Serial.println(getNxSampling());
  Serial.print("Buffer full? "); Serial.println(isBufferFull());
  Serial.print("Buffer empty? "); Serial.println(isBufferEmpty());
  Serial.println();
  Serial.println("DUMP: "); print_eeprom();
}

void loop() {
  // put your main code here, to run repeatedly:

}
