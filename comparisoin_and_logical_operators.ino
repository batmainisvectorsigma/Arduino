//trying to see some of the comparison operators
/*
There are six comparison operators 
< , > , <= , >= , == , !=
  */
void setup(){
 int variableOne=9;
 int variableTwo=8;
  Serial.begin(9600);
  Serial.println(variableOne==VariableTwo) // This will return 0 as these are not equal
}
void loop(){

}

//Trying to see some of the logical operators
//There are three kinds of logical operators
/*
and operators &&
or operators ||
not operators !

*/
void setup(){
  Serial.begin(9600);
  Serial.println("The lessons about is operator");
  Serial.println("true and true is:");
  Serial.print(true&&true);
  //or Serial.print(2>1&&1>0); here both of the expressions are true
  Serial.print("true and false is :");
  Serial.print(true&&false);
  Serial.print("false and true is:");
  Serial.print(false&&true);
  Serial.print("false and false is:);
  Serial.print(false&&false);

  Serial.println();
  Serial.println();
  Serial.println();

  Serial.println("The lessons about || operator");

  Serial.print("true or true is:");
  Serial.println(true||true);
  Serial.print("true or false is:");
  Serial.print(true||false);
  Serial.print("false or true is :");
  Serial.print(false||true);
  Serial.print("false or false is:");
  Serial.println(false||false);

   Serial.println();
   Serial.println();
   Serial.println();

  Serial.println("The lessons about ! operator");
  Serial.print("The not of true is :");
  Serial.println(!true);
  Serial.print("The not of false is ");
  Serial.println(!false);
}
void loop(){
//put your main code here to run repeatedly
}

/*
The lessons about && operator 
true and true is: 1
true and false is :0
false and true is : 0
false and false is: 0

The lessons about || operator
true or true is :1
true or false is :1
false or true is: 1
false or false is :0

The lessons about ! operator 
The not of true is: 0
The not of false is: 1

*/
