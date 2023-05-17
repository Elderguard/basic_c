#include<iostream>
#include<locale.h>
using namespace std;

//variaveis
int x, n;
float peso, soma, mediaPeso;


//codigo
int main(){
	setlocale(LC_ALL, "Portuguese");
	soma=0;
	x=1;
	
	cout<<"Quantas pessoas estarão no elevador?"<<endl;
	cin>>n;
	
	while(x<=n){
		cout<<"Informe o peso da primeira pessoa: \n";
		cin>>peso;
		soma = soma + peso;
		cout<<"Soma dos pesos informados = "<<soma<<"KG"<<endl;
		x++;
	}
	mediaPeso=soma/n;
	cout<<"Peso medio das pessoas:"<<mediaPeso;
	
}
