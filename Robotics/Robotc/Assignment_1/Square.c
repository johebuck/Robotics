tMotor LEFT_MOTOR = motorD;
tMotor RIGHT_MOTOR =motorA;

task main(){
	//Forward
	setMotorSyncEncoder(LEFT_MOTOR, RIGHT_MOTOR, 0, 1000, 50);
	waitUntilMotorStop(RIGHT_MOTOR);

	//RightTurn
	setMotorSyncEncoder(RIGHT_MOTOR, LEFT_MOTOR, -75, 258, 50);
	sleep(300);
	waitUntilMotorStop(RIGHT_MOTOR);

	//Forward
	setMotorSyncEncoder(LEFT_MOTOR, RIGHT_MOTOR, 0, 1000, 50);
	waitUntilMotorStop(RIGHT_MOTOR);

	//RightTurn
	setMotorSyncEncoder(RIGHT_MOTOR, LEFT_MOTOR, -75, 258, 50);
	sleep(300);
	waitUntilMotorStop(RIGHT_MOTOR);

	//Forward
	setMotorSyncEncoder(LEFT_MOTOR, RIGHT_MOTOR, 0, 1000, 50);
	waitUntilMotorStop(RIGHT_MOTOR);

	//RightTurn
	setMotorSyncEncoder(RIGHT_MOTOR, LEFT_MOTOR, -75, 258, 50);
	sleep(300);
	waitUntilMotorStop(RIGHT_MOTOR);

	//Forward
	setMotorSyncEncoder(LEFT_MOTOR, RIGHT_MOTOR, 0, 1000, 50);
	waitUntilMotorStop(RIGHT_MOTOR);

	//RightTurn
	setMotorSyncEncoder(RIGHT_MOTOR, LEFT_MOTOR, -75, 258, 50);
	sleep(300);
	waitUntilMotorStop(RIGHT_MOTOR);
}
