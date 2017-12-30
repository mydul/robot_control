
int IN1=2;//define I1 interface
int IN2=3;//define I2 interface 
int speedENA=5;//enable motor A
int IN3=11;//define I3 interface 
int IN4=12;//define I4 interface 
int speedENB=6;//enable motor B
int spead =150;//define the spead of motor
int spead1 =100;//define the spead of motor


 
char x; 

void setup(){
 
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  pinMode(speedENA,OUTPUT);
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);
  pinMode(speedENB,OUTPUT);
  
   Serial.begin(9600);   //start te serial monitor	
}
 
void forward()
{
     analogWrite(speedENA,spead);//input a simulation value to set the speed
     analogWrite(speedENB,spead);
     digitalWrite(IN1,HIGH);//turn DC Motor A move clockwise
     digitalWrite(IN2,LOW);
     digitalWrite(IN3,HIGH);//turn DC Motor B move clockwise
     digitalWrite(IN4,LOW);
}
void backward()//
{
     analogWrite(speedENA,spead);//input a simulation value to set the speed
     analogWrite(speedENB,spead);
     digitalWrite(IN1,LOW);//turn DC Motor A move anticlockwise
     digitalWrite(IN2,HIGH);
     digitalWrite(IN3,LOW);//turn DC Motor B move anticlockwise
     digitalWrite(IN4,HIGH);
}
void right()//
{
     analogWrite(speedENA,spead1);//input a simulation value to set the speed
     analogWrite(speedENB,spead1);
     digitalWrite(IN1,LOW);//turn DC Motor A move anticlockwise
     digitalWrite(IN2,HIGH);
     digitalWrite(IN3,HIGH);//turn DC Motor B move clockwise
     digitalWrite(IN4,LOW);
}
void clockwise()//
{
     analogWrite(speedENA,spead1);//input a simulation value to set the speed
     analogWrite(speedENB,spead1);
     digitalWrite(IN1,LOW);//turn DC Motor A move anticlockwise
     digitalWrite(IN2,HIGH);
     digitalWrite(IN3,HIGH);//turn DC Motor B move clockwise
     digitalWrite(IN4,LOW);
}
void left()//
{
     analogWrite(speedENA,spead1);//input a simulation value to set the speed
     analogWrite(speedENB,spead1);
     digitalWrite(IN1,HIGH);//turn DC Motor A move clockwise
     digitalWrite(IN2,LOW);
     digitalWrite(IN3,LOW);//turn DC Motor B move anticlockwise
     digitalWrite(IN4,HIGH);
}
void anticlockwise()//
{
     analogWrite(speedENA,spead1);//input a simulation value to set the speed
     analogWrite(speedENB,spead1);
     digitalWrite(IN1,HIGH);//turn DC Motor A move clockwise
     digitalWrite(IN2,LOW);
     digitalWrite(IN3,LOW);//turn DC Motor B move anticlockwise
     digitalWrite(IN4,HIGH);
}
void Stop()//
{
     //digitalWrite(speedENA,LOW);// Unenble the pin, to stop the motor. this should be done to avid damaging the motor. 
     //digitalWrite(speedENB,LOW);
     digitalWrite(IN1,LOW);//turn DC Motor B move anticlockwise
     digitalWrite(IN2,LOW);
     digitalWrite(IN3,LOW);//turn DC Motor A move clockwise
     digitalWrite(IN4,LOW);
     delay(1000);
 
}

void loop()
{
 
 
 while (Serial.available() > 0) {
    
  x=Serial.read();

    if (x == 'A') //F
    {
        forward();
        //Serial.println("Robot is Moving Forward");
    }

    else  if (x == 'B') //B
    {
        backward();
        //Serial.println("Robot is Moving Backward");
    }
    
    else  if (x == 'C') //L
    {
        left();
        //Serial.println("Robot is Moving Left");
    }
    
    else  if (x == 'D') //R
    {
        right();
        //Serial.println("Robot is Moving Right");
    }
    else  if (x == 'F') //Move 360 Degree
    {
        clockwise();
        //Serial.println("Robot is Moving Clockwise");
    }
    else  if (x == 'G') //Move -360 Degree
    {
        anticlockwise();
        //Serial.println("Robot is Moving Anti-Clockwise");
    }
    else  if (x == 'E') //S
    {
        Stop();
        //Serial.println("Robot is Stopped");
      }
   }
}
//This Code & Robot is Created By Mydul Islam Rashed.

