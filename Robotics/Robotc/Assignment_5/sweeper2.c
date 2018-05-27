tMotor LEFT_MOTOR = motorD;
tMotor RIGHT_MOTOR = motorA;

void searching();
void pushing();

task main()
{
	SensorType[S1]= sensorEV3_Color;
	SensorType[S2]= sensorEV3_Ultrasonic;

	int i = 0;
	while(i < 7){
		searching();
		i++;
	}
	setMotorSpeed(LEFT_MOTOR, 0);
	setMotorSpeed(RIGHT_MOTOR, 0);
	waitUntilMotorStop(RIGHT_MOTOR);
	playSound(soundFastUpwardTones)
}

void searching(){
	setMotorSpeed(LEFT_MOTOR, -15);
	setMotorSpeed(RIGHT_MOTOR, 15);

	if(getUSDistance(S2) < 35){
		displayBigTextLine(1, "detected object");
		pushing();
	}

}

void pushing(){
		setMotorSpeed(LEFT_MOTOR, 25);
		setMotorSpeed(RIGHT_MOTOR, 25);
		string colorDetected;
		if(getColorReflected(S1) < 15){
				colorDetected = getColorReflected(S1);
				displayString(5, colorDetected);
				setMotorSyncEncoder(LEFT_MOTOR, RIGHT_MOTOR, 0, 350, -25);
				waitUntilMotorStop(RIGHT_MOTOR);
		}
}
