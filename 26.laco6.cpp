#include<iostream>
#include<locale.h>
using namespace std;

//var
int x, contadorF, contadorM;
char genero;

//code

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	contadorF=0;
	contadorM=0;
	x=1;
	
	while (x<=5){
		cout<<"Informe o gênero da pessoa "<<x<<"(F para Feminino e M para masculino)"<<endl;
		cin>>genero;
		if(genero == 'F'){
			contadorF++;
	} 	else if (genero == 'M'){
			contadorM++;
	}
	x++;
	cout<<"Quantidade de pessoas do gênero feminino "<<contadorF<<endl;
	cout<<"Quantidade de pessoas do gênero masculino "<<contadorM<<endl;
	}
}
