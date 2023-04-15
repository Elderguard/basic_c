#include<iostream>
using namespace std;

//variaveis
float weight, height, idealWeight;
int type;

//codigo
int main(){
	cout<<"Inform your weight \n";
	cin>>weight;
	cout<<"Inform your height \n";
	cin>>height;
	cout<<"Inform your gender. Type 1 for male and 2 for female \n";
	cin>>type;
	if (type==1) //male
		idealWeight= 72.7*height-58;
	else //feminino
		idealWeight=62.1*height-44.7;
		
	cout<<"Ideal weight = "<<idealWeight;
}
