#include<iostream>
#include<locale.h>
using namespace std;

//variaveis
int x,n;
float valor, soma;


//codigo
int main(){
	setlocale(LC_ALL, "Portuguese");
	soma=0;
	x=1;
	cout<<"Quantos itens você comprou?"<<endl;
	cin>>n;
	
	while(x<=n){
		cout<<"Informe o valor do primeiro produto: R$";
		cin>>valor;
		soma = soma + valor;
		cout<<"valor do carrinho: R$"<<soma<<endl;
		x++;
	}
}
