#include<iostream>
using namespace std;

//variables
float travelledDistance, totalTime, averageSpeed;

//code
int main(){
	cout<<"Inform the travelled distance in kilometers \n";
	cin>>travelledDistance;
	cout<<"Inform the time spent traveling in hours \n";
	cin>>totalTime;
	averageSpeed=travelledDistance/totalTime;
	cout<<"The average of speed is "<<averageSpeed<<"Km/h";
}
