#include<iostream>
using namespace std;

//variables//
int type, gold, silver, bronze;
float goldPrice, silverPrice, bronzePrice, consumedQuantity, goldPackageLimit, silverPackageLimit, bronzePackageLimit, 
extraPackage, extraPackageCost, goldExtraPrice, silverExtraPrice, bronzeExtraPrice, finalPrice;

//code//
int main(){
	//package prices
	goldPrice = 150;
	silverPrice = 100;
	bronzePrice = 80;
	//data usage limit for each package
	goldPackageLimit = 200;
	silverPackageLimit = 150;
	goldPackageLimit = 100;
	//extra usage prices
	goldExtraPrice = 0.2;
	silverExtraPrice = 0.3;
	bronzeExtraPrice = 0.5;
	extraPackage = 0;
	
	cout<<"Inform the amount of data consumed \n";
	cin>>consumedQuantity;
	cout<<"Inform the type of contract. Type 1 for Gold, 2 for Silver and 3 for Bronze. \n ";
	cin>>type;
	cout<<type<<endl;
	if (type==1){
		if (consumedQuantity>goldPackageLimit){
			goldPackageLimit = 200;
			cout<<"The value of goldPackageLimit is"<<goldPackageLimit;
			extraPackage = extraPackage + consumedQuantity - goldPackageLimit;
			cout<<"The value of extraPackage is "<<extraPackage<<endl;
			extraPackageCost = goldExtraPrice*extraPackage;
			cout<<"The value of extraPackageCost is "<<extraPackageCost<<endl;
			finalPrice = goldPrice + extraPackageCost;
			cout<<"The value of finalPrice is "<<finalPrice<<endl;
		}
		else {
			finalPrice = goldPrice;
			cout<<finalPrice;
		}	
		
	}
	if (type==2){
		if (consumedQuantity>silverPackageLimit){
			silverPackageLimit = 150;
			cout<<"The value of silverPackageLimit is"<<silverPackageLimit;
			extraPackage = extraPackage + consumedQuantity - silverPackageLimit;
			cout<<extraPackage<<endl;
			extraPackageCost = silverExtraPrice*extraPackage;
			cout<<extraPackageCost<<endl;
			finalPrice = silverPrice + extraPackageCost;
			cout<<finalPrice<<endl;
		}
		else {
			finalPrice = silverPrice;
			cout<<finalPrice;
		}	
		
	}
	if (type==3){
		if (consumedQuantity>goldPackageLimit){
			bronzePackageLimit = 100;
			cout<<"The value of bronzePackageLimit is"<<bronzePackageLimit;
			extraPackage = extraPackage + consumedQuantity - 100;
			cout<<extraPackage<<endl;
			extraPackageCost = bronzeExtraPrice*extraPackage;
			cout<<extraPackageCost<<endl;
			finalPrice = bronzePrice + extraPackageCost;
			cout<<finalPrice<<endl;
		}
		else {
			finalPrice = bronzePrice;
			cout<<finalPrice;
		}	
		
	}
	cout<<"Your final cost is "<<finalPrice;
}
