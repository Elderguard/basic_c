#include<iostream>
using namespace std;

//variaveis
int x;
float valor, soma;


//codigo
int main(){
	soma=0;
	x=1;
	while(x<=5){
		cout<<"Informe o valor do primeiro produto: R$";
		cin>>valor;
		soma = soma + valor;
		cout<<"valor do carrinho: R$"<<soma<<endl;
		x++;
	}
}
