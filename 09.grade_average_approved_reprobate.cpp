#include<iostream>
using namespace std;

//variables
float grade1, grade2, finalGrade;

//code
int main(){
	cout<<"Informe a primeira nota \n";
	cin>>grade1;
	cout<<"Informe a segunda nota \n";
	cin>>grade2;
	
	finalGrade=(grade1+grade2)/2;
	cout<<"Sua nota final � "<<finalGrade<<"\n";
	
	if(finalGrade>=6)
		cout<<"Situa��o: Aprovado";
	
	else 
		cout<<"Situa��o: Reprovado";
	
}
