#include<iostream>
using namespace std;

//variables//
float A, B, C;

//code//
int main(){
	
	cout<<"Inform the dimension of side A of the Triangle";
	cin>>A;
	cout<<"Inform the dimension of side B of the Triangle";
	cin>>B;
	cout<<"Inform the dimension of side C of the Triangle";
	cin>>C;
	
	if (A=B=C)
		cout<<"This is an Equilateral triangle";
	else if (A=B || B=C || C=A)
		cout<<"This is an Isosceles triangle";
	else 
		cout<<"This is a Scalene triangle";

}
