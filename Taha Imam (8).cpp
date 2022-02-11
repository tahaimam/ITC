#include <iostream>
using namespace std;

int maiin()
{
	
	float F,c;
	cout<<"Enter the temperature of the city in Fahrenheit."<<endl;
	cin>>F;
	c=((F-32)*5)/9;
	cout<<"The temperature of the city in centigrade is: "<<c<<endl;
	return 0;
	
}
