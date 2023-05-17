#include<iostream>
using namespace std;


//variables
double a, b;

//code
int main(){
	a= 5;
	b= a++;
	cout<<a<<endl;
	cout<<b<<endl;
	b=++a;
	cout<<a<<endl;
	cout<<b<<endl;
}
