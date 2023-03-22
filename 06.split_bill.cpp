#include<iostream>

using namespace std;

//variables

	float bill, carlos, carlosPercentage, carlosAmount, andre, andrePercentage, andreAmount, felipe, felipePercentage, felipeAmount;

//code
int main(){

	cout<<"Inform the restaurant bill amount \n";
	cin>>bill;
	cout<<"Inform how much in percentage Carlos will pay \n";
	cin>>carlosPercentage;
	carlos=carlosPercentage/100;
	carlosAmount=carlos*bill;
	cout<<"Inform how much in percentage Andre will pay \n";
	cin>>andrePercentage;
	andre=andrePercentage/100;
	andreAmount=andre*bill;
	cout<<"Felipe will pay the rest \n"<<endl;
	felipePercentage=100-(carlosPercentage+andrePercentage);
	felipe=felipePercentage/100;
	felipeAmount=felipe*bill;
	cout<<"Andre: R$"<<andreAmount<<endl;
	cout<<"Carlos: R$"<<carlosAmount<<endl;
	cout<<"Felipe: R$"<<felipeAmount;
}
