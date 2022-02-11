#include<iostream>
using namespace std;
int main()
{
	bool want_to_start;
	int age;
	cout<<"Do you want to start the application? [0:No][1:yes]"<<endl;
	cin>> want_to_start;//An input of 0 is 'false',and 1 is 'true'
	
	if(!want_to_start)
     cout<<"Then why open the application?i am starting anyway. "<<endl;
     cout<<"Application starting."<<endl;
    cout<<"Enter your age"<<endl;
     cin>>age;
     if (age>=35 && age<=80)
     {
     	cout<<"you are between 35 and 80 and can save money on your can insurance!"<<endl;
	 }
	 else if(age <0||age>160)
	 {
	 	cout<<"you are lying you can not be that age."<<endl;
	 }
	 else
	 {
	 	cout<<"Sorry,we do not have any deals for you today!"<<endl;
	 }
}
