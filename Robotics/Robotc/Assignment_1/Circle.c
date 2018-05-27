tMotor LEFT_MOTOR = motorD;
tMotor RIGHT_MOTOR =motorA;

task main()
{

setMotorSpeed(LEFT_MOTOR, 100);
setMotorSpeed(RIGHT_MOTOR, 40);
sleep(3500);
waitUntilMotorStop(RIGHT_MOTOR);

}
