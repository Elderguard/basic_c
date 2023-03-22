#include<iostream>
using namespace std;

//variables
float price, quantity, finalPrice;

//code
int main(){
	cout<<"Input the price of the fuel \n";
	cin>>price;
	cout<<"Input the quantity (liters) of fuel \n";
	cin>>quantity;
	
	finalPrice=price*quantity;
	cout<<"The final price of your purchase is "<<finalPrice;
}
