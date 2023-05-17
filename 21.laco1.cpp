#include<iostream>
using namespace std;

//variaveis
int x, soma;


//codigo
int main(){
	soma=0;
	x=1;
	while(x<=10){
		cout<<"Valor de x: "<<x<<endl;
		soma = soma + x;
		cout<<"valor de soma: "<<soma<<endl;
		x++;
	}
}
