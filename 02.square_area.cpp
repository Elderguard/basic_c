#include<iostream>
using namespace std;

//variables//
float side, area;

int main(){
	//read data//
	cout<<"what is the size of the square side? (in meters) \n";
	cin>>side;
	
	//calculate the area of the square//
	area= side*side;
	
	//show result//
	cout<<"Area = "<<area<<" squared meters";
}
