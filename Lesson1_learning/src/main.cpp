#include <Arduino.h>

void setup()
{
	// put your setup code here, to run once:

	
	// Set 13 to output
	pinMode(13, OUTPUT);

	
}

void loop()
{
	// put your main code here, to run repeatedly:

	// Set 13 to high
	digitalWrite(13, HIGH); 

	// delay 1
	delay(500);

	// Set 13 to low
	digitalWrite(13, LOW);

	// delay 2
	delay(500);

}