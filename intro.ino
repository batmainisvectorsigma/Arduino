void setup() {
  // put your setup code here, to run once:

  //contains all the code that we want arduino to run 
  //when it is turned on
}

void loop() {
  // put your main code here, to run repeatedly:
  //whatever the code we want to run repeatedly

}

// if you don't use these two functions you will probably get an error
//comments in arduino ino is same as in java
// arduino is case sensitive













// Example No 1
// Blink Example
/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);    //pinmode has two arguments the first argument is the pin number that we want to configure and second tells the configuration which we wanted to act as 
                                  //this build-in led is connected to pin number 13 of arduino so we are telling ardino to set the configuration of pin number 13 as outour
                                   //LED_BUILTIN is equivalent to pin number 13
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)   digitalWrite is a build in function is used to manipulate the digital pins
                                    // and we can also manipulate analog pins using digital write if the pin is decaled as outputin steup using pin mode digital write will write a value of 5 vold
                                     //if we use high and to 0 if we use low but make sure that uuou have declared the pin as output otherwise you will see an unexpected results then after this 
                                    //line we have delay the value of 1000 in that as the name suggests for a speccific time which is 1 second
  
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
                                      //here it will turn off
  delay(1000);                       // wait for a second
  //delay(500)                       //will blink faster            
}
