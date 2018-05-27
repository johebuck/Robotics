
tMotor LEFT_MOTOR = motorD;
tMotor RIGHT_MOTOR =motorA;

task main()
{
	SensorType[S1] = sensorEV3_Color;

	string colorDetected;
  string white;

	while(true){
		setMotorSpeed(LEFT_MOTOR, 35);
		setMotorSpeed(RIGHT_MOTOR, 35);

		if(getColorReflected(S1) >5){
		white = getColorReflected(S1);
		displayString(1,white );
	}

			if(getColorReflected(S1) < 15){
				setMotorSpeed(LEFT_MOTOR, 25);
				setMotorSpeed(RIGHT_MOTOR, 25);
				sleep(100);
				colorDetected = getColorReflected(S1);
				displayString(5, colorDetected);
				setMotorSyncEncoder(LEFT_MOTOR, RIGHT_MOTOR, 0, 350, -50);
				waitUntilMotorStop(RIGHT_MOTOR);
				setMotorSyncEncoder(LEFT_MOTOR, RIGHT_MOTOR, 50, (250 + rand()%500), 50);
				waitUntilMotorStop(RIGHT_MOTOR);
			}
			eraseDisplay();
			colorDetected = "";
	}
}
