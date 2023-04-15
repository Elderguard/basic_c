#include<iostream>
using namespace std;

//variables
float price, finalPrice;
int type; //1=national, 2=import


//code
int main(){
	cout<<"What is the product price? \n";
	cin>> price;
	cout<<"Is this a national or import product? Type 1 for national and 2 for import \n";
	cin>> type;
	
	if(type==1) //national
		finalPrice=price+0.05*price;
	else //import
		finalPrice=price+0.10*price;
	
	cout<<"The final cost of the product is "<<finalPrice;
}
