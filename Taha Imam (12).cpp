#include<iostream>
using namespace std;
int main()
{
	int A;
	char grade;
	cout<<"Enter your grade:"<<endl;
	cin>>grade;
		if(grade=='a'||grade=='A')
		{
			cout<<"your average must be 90-100";
		}
		else if (grade=='b'||grade=='B')
		{
			cout<<"your average must be 80-89";
		}
		else if(grade=='c'||grade=='c')
		{
			cout<<"your average must be 70-79";
		}
		else if(grade=='d'||grade=='D')
		{
			cout<<"your average must be 60-69";
		}
		else
		{
			cout<<"wrong operator";
		}
}	
	
