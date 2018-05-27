
tMotor LEFT_MOTOR = motorD;
tMotor RIGHT_MOTOR =motorA;


task main(){
SensorType[S1] = sensorEV3_Touch;
SensorType[S4] = sensorEV3_Touch;
SensorType[S2] = sensorEV3_Ultrasonic;
string toshow;

while(true){
	setMotorSpeed(motorD, 50);
  setMotorSpeed(motorA, 50);
	toshow = getUSDistance(S2);
	toshow+=" CM";
	displayBigTextLine(3, toshow);

	if(getUSDistance(S2)<13){
		 setMotorSpeed(motorD, 25);
     setMotorSpeed(motorA, 25);
     sleep(150);
     setMotorSpeed(motorD, 15);
     setMotorSpeed(motorA, 15);
     sleep(150);
     setMotorSpeed(motorD, 0);
     setMotorSpeed(motorA, 0);
     playSound(soundException);
     setMotorSyncEncoder(LEFT_MOTOR, RIGHT_MOTOR, 0, 350, -50);
		 waitUntilMotorStop(RIGHT_MOTOR);
		 setMotorSyncEncoder(LEFT_MOTOR, RIGHT_MOTOR, 50, (250+rand()%500), 50);
	   sleep(300);
	   waitUntilMotorStop(RIGHT_MOTOR);
	 }


    if(getTouchValue(S4)==1&&getTouchValue(S1)==1){
  	setMotorSpeed(motorD, 0);
     setMotorSpeed(motorA, 0);
     playSound(soundBeepBeep);
     setMotorSyncEncoder(LEFT_MOTOR, RIGHT_MOTOR, 0, 800, -50);
		 waitUntilMotorStop(RIGHT_MOTOR);
		 setMotorSyncEncoder(RIGHT_MOTOR, LEFT_MOTOR, -50, 700, 50);
	   sleep(300);
	   waitUntilMotorStop(RIGHT_MOTOR);
	 }

   if(getTouchValue(S1) == 1){
     setMotorSpeed(motorD, 0);
     setMotorSpeed(motorA, 0);
     setMotorSyncEncoder(LEFT_MOTOR, RIGHT_MOTOR, 0, 350, -50);
		 waitUntilMotorStop(RIGHT_MOTOR);
		 setMotorSyncEncoder(LEFT_MOTOR, RIGHT_MOTOR, 50, (500+rand()%500), 50);

	   sleep(300);
	   waitUntilMotorStop(RIGHT_MOTOR);
  }
  if(getTouchValue(S4)==1){
  	setMotorSpeed(motorD,0);
  	setMotorSpeed(motorA,0);
    setMotorSyncEncoder(LEFT_MOTOR, RIGHT_MOTOR, 0, 350, -50);
  	waitUntilMotorStop(RIGHT_MOTOR);
    setMotorSyncEncoder(LEFT_MOTOR, RIGHT_MOTOR, -50, (500+rand()%500), 50);
  	sleep(300);
  	waitUntilMotorStop(RIGHT_MOTOR);
  }
 }
}
