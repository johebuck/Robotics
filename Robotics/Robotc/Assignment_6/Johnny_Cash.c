tMotor leftMotor = motorD;
tMotor rightMotor = motorA;

task main(){
  int power;
  power = 30;

  while (true){
  	if(getColorReflected(S1)<=8){
    setMotorSpeed(leftMotor, power);
    setMotorSpeed(rightMotor, -7);
  }
  if(getColorReflected(S1)>13 && getColorReflected(S1)<19){
  	setMotorSpeed(leftMotor,(power-12));
  	setMotorSpeed(rightMotor,6);
  }
  if(getColorReflected(S1)>18 && getColorReflected(S1)<24){
  	setMotorSpeed(leftMotor,(power-18));
  	setMotorSpeed(rightMotor,12);
  }
  if(getColorReflected(S1)>23 && getColorReflected(S1)<28){
  	setMotorSpeed(leftMotor,0);
  	setMotorSpeed(rightMotor,18);
  }
   if(getColorReflected(S1)>=28){
     setMotorSpeed(leftMotor,-7);
     setMotorSpeed(rightMotor,power);
  }
 }
}
