#include<iostream>
#include<cmath>
using namespace std;
int main()
{
		string name;
		int sentinel=0;
		int order = 1;

	int Q;
	cout<<"Welcome, What is your name?"<<endl;
	cin>>name;
	{
		cout<<"-----Our Brreakfast Menu-----"<<endl;
		cout<<"Number of items are"<<endl;
		cout<<" 1) Paratha-----------------------------------Rs 25"<<endl;
		cout<<" 2) Chese and mashroom omlet------------------Rs 50"<<endl;
		cout<<" 3) Sausage-----------------------------------Rs 220"<<endl;
		cout<<" 4)French Toast-------------------------------Rs 45"<<endl;
		cout<<" 5)Tea----------------------------------------Rs 40"<<endl;
		cout<<" 6)Coffe--------------------------------------Rs 120"<<endl;
		cout<<" 7)Pan cake with Nutella serving--------------Rs 395"<<endl;
		cout<<"--------------------------------------------------"<<endl;
		
	}
	while (order != sentinel)
	{
		int Q;
		cout<<"Customer name is "<<name<<endl;
		cout<<"Enter Quantity"<<endl;
		cin>>Q;
		cout<<"total Quantity "<<Q<<endl;
		char od;
		cout<<"Enter Order Please"<<endl;
		cin>>od;
        
		if (od== '1')
	
		{
		     cout<<"Your order is Paratha and your bill is="<<25*Q<<endl;
	    }
		else if (od== '2')
		{
            cout<<"Your order is Chese and mashroom omlet and your bill is ="<<50*Q<<endl;
        }
        else if (od== '3')
		{
		    cout<<"Your order is Sausage and your bill is ="<<220*Q<<endl;
	    }
		else if (od=='4')
		{
	         cout<<"Your order is French Toast and your bill is ="<<45*Q<<endl;
		}
		else if (od=='5')
		{
			cout<<"your order is Tea and your bill is ="<<40*Q<<endl;
		}
		else if (od=='6')
		{
			cout<<"your order is coffe and your bill is ="<<120*Q<<endl;
		}
		else if (od=='7')
		{
			cout<<"Your order is Pan cake with Nutella serving and your bill is="<<395*Q<<endl;
		}
		else  	
		{
			cout<<"Out of the menu"<<endl;
		}
		
 	}
 
 }	
