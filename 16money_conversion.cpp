#include<iostream>
using namespace std;

//variables//
float real, dollar, euro, pound, peso, converted;
int type;

//code//
int main(){
	dollar=4.91;
	euro=5.45;
	pound=6.1;
	peso=0.023;
	cout<<"Inform the amount you need to convert in R$ (Brazilian currency) \n";
	cin>>real;
	cout<<"Type the number of the currency you need your money converted to: 1-Dollar, 2-Euro, 3-Libra, 4-Sterline Pound \n";
	cin>>type;
	if (type==1) //dollar//
		converted=real/dollar;
	else if (type==2) //euro//
		converted==real/euro;
	else if (type==3) //pound//
		converted=real/pound;
	else if (type==4) //peso//
		converted=real/peso;
	else
		cout<<"You didn't type a correct information";
	
	if (type==1 or type==2 or type==3 or type==4)
	cout<<"The amount of money converted is equal "<<converted;

	
	
}
