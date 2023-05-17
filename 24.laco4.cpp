#include<iostream>
#include<locale.h>
using namespace std;

//variaveis
int x, itensNoCarrinho;
float valor, soma, mediaPrecos;


//codigo
int main(){
	setlocale(LC_ALL, "Portuguese");
	soma=0;
	x=1;
	valor = 1;
	
	while(valor>0){
		cout<<"Informe o valor do primeiro produto "<<x<<": R$";
		cin>>valor;
		soma = soma + valor;
		cout<<"valor do carrinho: R$"<<soma<<endl;
		x++;
	}
	itensNoCarrinho=x-2;
	cout<<"Quantidade de itens no carrinho: "<<itensNoCarrinho<<endl;
	mediaPrecos=soma/itensNoCarrinho;
	cout<<"Preço medio dos produtos: R$"<<mediaPrecos;
	
}
