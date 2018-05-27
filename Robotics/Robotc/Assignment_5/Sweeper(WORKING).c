tMotor LEFT_MOTOR = motorD;
tMotor RIGHT_MOTOR =motorA;

task main(){
	SensorType[S1] = sensorEV3_Color;
	SensorType[S2] = sensorEV3_Ultrasonic;

	string colorDetected;

	while(true){
		setMotorSpeed(LEFT_MOTOR, -15);
		setMotorSpeed(RIGHT_MOTOR, 15);
		sleep(400);
		if(getUSDistance(S2)<35){
			setMotorSync(LEFT_MOTOR, RIGHT_MOTOR, 0, 0);
			sleep(500);
			setMotorSync(LEFT_MOTOR, RIGHT_MOTOR, 0, 25);
			waitUntil(getColorReflected(S1) < 15);
				colorDetected = getColorReflected(S1);
				displayString(5, colorDetected);
				setMotorSyncEncoder(LEFT_MOTOR, RIGHT_MOTOR, 0, 350, -25);
				waitUntilMotorStop(RIGHT_MOTOR);
		}
	}
}
