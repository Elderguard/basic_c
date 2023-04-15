#include<iostream>
#include<math.h>
using namespace std;

//variaveis
float A, B, C, delta, x1, x2;

//codigo
int main(){
	cout<<"Inform the value of A for the equation (A*x^2)+(B*x)+C=0 \n";
	cin>>A;
	cout<<"Inform the value of B for the equation (A*x^2)+(B*x)+C=0 \n";
	cin>>B;
	cout<<"Inform the value of C for the equation (A*x^2)+(B*x)+C=0 \n";
	cin>>C;
	
	//calculating delta
	delta=(B*B)-(4*A*C);
	cout<<"Delta is: "<<delta<<endl;
	
	if(delta>=0){

		x1= (-B+sqrt(delta))/(2*A);
		cout<<"\n X1 equals: "<<x1;
		x2= (-B+sqrt(delta))/(2*A);
		cout<<"\n X2 equals: "<<x2;
	}
	else
		cout<<"Delta is negative, there's no solution without imaginary numbers";
}
