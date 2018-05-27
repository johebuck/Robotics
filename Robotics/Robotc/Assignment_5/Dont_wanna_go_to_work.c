tMotor LEFT_MOTOR = motorD;
tMotor RIGHT_MOTOR =motorA;

void detecting();
void pushing();

task main(){
	setSoundVolume(100);
	SensorType[S1] = sensorEV3_Color;
	SensorType[S2] = sensorEV3_Ultrasonic;

	clearTimer(T1);

	while(time1[T1]<10000){

				detecting();

		}
	}

void detecting(){

    setMotorSpeed(LEFT_MOTOR, -15);
		setMotorSpeed(RIGHT_MOTOR, 15);
		sleep(400);
		if(getUSDistance(S2)<60){
			pushing();
	  }
}

void pushing(){

      setMotorSync(LEFT_MOTOR, RIGHT_MOTOR, 0, 0);
			sleep(500);
			setMotorSync(LEFT_MOTOR, RIGHT_MOTOR, 0, 40);
			waitUntil(getColorReflected(S1) < 15);
			setMotorSyncEncoder(LEFT_MOTOR, RIGHT_MOTOR, 0, 600, 40);
			waitUntilMotorStop(RIGHT_MOTOR);
			setMotorSyncEncoder(LEFT_MOTOR, RIGHT_MOTOR, 0, 1300, -40);
			waitUntilMotorStop(RIGHT_MOTOR);
			clearTimer(T1);

}
