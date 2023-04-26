#include<iostream>
using namespace std;

//variables
int type
float s1, s1Percentual, s2, s2Percentual, s3, s3Percentual, s4, s4Percentual, s5, s5Percentual, s6, s6Percentual, percentual, productPrice, taxes, finalPrice;


//code
int main(){
	//taxes for each State
	s1Percentual = 35;
	s1 = s1Percentual/100;
	s2Percentual = 25;
	s2 = s2Percentual/100;
	s3Percentual = 15;
	s3 = s3Percentual/100;
	s4Percentual = 10;
	s4 = s4Percentual/100;
	s5Percentual = 5;
	s5 = 5/100;
	s6Percentual = 0;
	s6 = s6Percentual/100;
	
	cout<<"Inform the price of the product you want to apply taxes";
	cin>>productPrice;
	cout<<"The price of the product is "<<productPrice;
	cout<<"Inform the code of the State you want the taxes applied \n";
	cin>>type;
	cout<<"You informed the State of code "<<type;
	
	if (type==1){
		percentual = s1;
		
		
	}
	
	
}

