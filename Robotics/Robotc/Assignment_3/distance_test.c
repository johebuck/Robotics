
task main(){
SensorType[S2] = sensorEV3_Ultrasonic;
string toshow;

while(true){

	toshow = getUSDistance(S2);
	toshow+=" CM";
	displayBigTextLine(3, toshow);
 }
}
