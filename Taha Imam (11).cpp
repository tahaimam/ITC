#include<iostream>
using namespace std;
int main()
{
	int sal;
	float time,inc;
	cout<<"Enter Time"<<endl;
	cin>>time;
	cout<<"Enter salary"<<endl;
	cin>>sal;
	if(time>=2 &&time<3)
	{
		cout<<"highly efficient"<<endl;
	}
	else if(time>=3 && time<=4)
	{
		cout<<"improve yourself"<<endl;
		inc=sal*0.5;
		cout<<"your salary is ="<<sal+inc<<endl;
	 } 
	 else if(time>4)
	 {
	 	cout<<"Kindly go and take rest"<<endl;
	 
	 }
	else
	{
		cout<<"invalid"<<endl;
	}
	return 0;
}
