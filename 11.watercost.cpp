#include<iostream>
using namespace std;

//variables
float consumed, price, finalCost;
int type; //1=home, 2=commerce


//code
int main(){
	cout<<"How much water was consumed? (in liters) \n";
	cin>>consumed;
	cout<<"What kind of building is it? Type 1 for home and 2 for commerce";
	cin>>type;
	
	if (type==1) //home
		finalCost=consumed*0.03;
	else //commerce
		finalCost=consumed*0.05;
		
	cout<<" Final cost:R$"<<finalCost;
	
}
