#include<iostream>
using namespace std;

//variables//
float price;
int oranges;
//code//
int main (){
	cout<<"The orange's price is 30 cents each if you buy less than a dozen and 25 cents if you buy more than that.";
	cout<<"Inform how many oranges you want to buy. \n";
	cin>>oranges;
	if (oranges<12)
		price = oranges*0.30;
	else
		price = oranges*0.25;
		
	cout<<"The final price is "<<price;
	
}
