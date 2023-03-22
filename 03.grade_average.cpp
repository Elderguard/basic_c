#include<iostream>
using namespace std;

//variables
float grade1, grade2, finalGrade;

//code
int main(){
	cout<<"Input the first grade \n";
	cin>>grade1;
	cout<<"Input the second grade \n";
	cin>>grade2;
	
	finalGrade=(grade1+grade2)/2;
	cout<<"Your final grade is "<<finalGrade;
}
