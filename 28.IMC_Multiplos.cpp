#include<iostream>
#include<locale.h>
using namespace std;

//variaveis
int x, contMagro, contNormal, contGordo;
float peso, altura, imc;

//code
int main(){
	setlocale(LC_ALL, "Portuguese");
	x=1;
	cout<<"Este programa classificar� e contar� quantas pessoas est�o em cada categoria de peso."<<endl;
	while(x<=5){
		cout<<"Informe o peso da pessoa n�mero "<<x<<endl;
		cin>>peso;
		cout<<"Informe a altura da pessoa n�mero "<<x<<endl;
		cin>>altura;
		imc = (peso/(altura*altura));
		cout<<imc;
		cout<<"O IMC da pessoa n�mero "<<x<<" �: "<<imc<<endl;
		if (imc<18.5){
			contMagro++;
		}
		else if (imc>=18.5 && imc<25){
			contNormal++;
		}
		else if (imc>25){
			contGordo++;
		}
		x++;
	} 
	cout<<"Existem "<<contMagro<<" pessoas magras, "<<contNormal<<" em situa��o normal e "<<contGordo<<" acima do peso.";
}
