#include<iostream>
using namespace std;

//variables

float front, side, area, unitPrice, finalPrice;

int main(){
	cout<<"Inform the dimension of the front of the land (in meters) \n";
	cin>>front;
	cout<<"Inform the dimension of the side of the land (in meters) \n";
	cin>>side;
	cout<<"Inform the value of 1 squared meter \n";
	cin>>unitPrice;
	area=front*side;
	finalPrice=area*unitPrice;
	cout<<"The total value of the land is R$"<<finalPrice;	
}

