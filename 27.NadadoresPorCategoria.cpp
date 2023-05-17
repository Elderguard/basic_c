#include<iostream>
#include<locale.h>
using namespace std;

//variaveis
int x, idade, contI, contJ, contA;


//code
int main(){
	x=1;
	cout<<"Este programa classificará os nadadores em categorias de acordo com suas idades."<<endl;
	while(x<=10){
		cout<<"Digite a idade do nadador nº "<<x<<endl;
		cin>>idade;
		if (idade>=18){
			contA++;
		}
		else if(idade>=14 && idade<18){
			contJ++;
		}
		else if (idade<14){
			contI++;
		}
		x++;			
	} 
	cout<<"A categoria infantil tem "<<contI<<" competidores."<<endl;
	cout<<"A categoria juvenil tem "<<contJ<<" competidores."<<endl;
	cout<<"A categoria adulta tem "<<contA<<" competidores."<<endl;
}
