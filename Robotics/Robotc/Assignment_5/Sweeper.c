tMotor LEFT_MOTOR = motorD;
tMotor RIGHT_MOTOR =motorA;

task main(){
	SensorType[S1] = sensorEV3_Color;
	SensorType[S2] = sensorEV3_Ultrasonic;

	string colorDetected;
	clearTimer(T1);

	while(time1[T1]<10000){
		setMotorSpeed(LEFT_MOTOR, -15);
		setMotorSpeed(RIGHT_MOTOR, 15);
		sleep(400);
		if(getUSDistance(S2)<45){
			setMotorSync(LEFT_MOTOR, RIGHT_MOTOR, 0, 0);
			sleep(500);
			setMotorSync(LEFT_MOTOR, RIGHT_MOTOR, 0, 40);
			waitUntil(getColorReflected(S1) < 15);
				colorDetected = getColorReflected(S1);
				displayString(5, colorDetected);
				setMotorSyncEncoder(LEFT_MOTOR, RIGHT_MOTOR, 0, 600, 40);
				waitUntilMotorStop(RIGHT_MOTOR);
				setMotorSyncEncoder(LEFT_MOTOR, RIGHT_MOTOR, 0, 950, -40);
				waitUntilMotorStop(RIGHT_MOTOR);
				clearTimer(T1);
		}
	}
}
