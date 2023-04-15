#include <iostream>
using namespace std;

//variables
float radius, height, volume;

int main () {
	cout<<"Inform the radius of the cilinder \n";
	cin>>radius;
	cout<<"Inform the height of the cilinder \n";
	cin>>height;
	//calculate volume
	volume = 3.1415*radius*radius*height;
	
	cout<<endl<<"\n Volume"<<volume;	
}


