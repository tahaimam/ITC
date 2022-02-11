#include<iostream>
 using namespace std;
int main()
{
	int a,b;
	char op;
	cout<<"Enter any two numbers "<<endl;
	cin>>a>>b;
	cout<<"Enter your operation (+,-,*,/)"<<end;
	cin>>op;
	
	switch(op)
	
	{
		case '+':
			cout<<"Addition of two numbers is"<<a+b<<endl;
			break;
	
	 case '-':
	 	cout<<"Subtraction of two numbers is"<<a-b<<endl;
	 	break;
	 	
	 	case '*':
	 	cout<<"multiplication of two numbers is"<<a*b<<endl;
	 	break;
	 	
	 	case '/':
	 		cout<<"division of two numbers is"<<a/b<<endl;
	 		break;
	 		
	 		default:
	 			cout<<"wrong operation"<<endl;
	}
	return 0;
}
