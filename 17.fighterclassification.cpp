#include<iostream>
using namespace std;

//variables//
float weight;

//code//
int main(){
	cout<<"Inform the fighters weight in kilograms \n";
	cin>>weight;
	if (weight<60)
		cout<<"This fighter is in category 1 for fighters under 60Kg";
	else if (weight>=60 and weight<=75)
		cout<<"This fighter is in category 2 for fighters between 60Kg and 75Kg";
	else if (weight>75 and weight<=90)
		cout<<"This fighter is in category 3 for fighters between 75Kg and 90Kg";
	else if (weight>90)
		cout<<"This fighter is in category 4 for fighters above 90Kg";
		
}
