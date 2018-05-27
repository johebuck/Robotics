tMotor LEFT_MOTOR = motorD;
tMotor RIGHT_MOTOR =motorA;

task main()
{

setMotorSpeed(LEFT_MOTOR, 100);
setMotorSpeed(RIGHT_MOTOR, 40);
sleep(1800);
waitUntilMotorStop(RIGHT_MOTOR);

setMotorSpeed(LEFT_MOTOR, 40);
setMotorSpeed(RIGHT_MOTOR, 100);
sleep(1600);
waitUntilMotorStop(RIGHT_MOTOR);

}
