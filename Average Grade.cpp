#include <iostream>
using namespace std;
int main()
{
	char grade;
	cout<<"enter your grade";
	cin>>grade;
     if (grade=='A'|| grade=='a')
     	{
     		cout<<"your average must be between 90 - 100"<<endl;
     	}
     else if(grade=='B'|| grade=='b')
	 	{
	 		cout<<"your average must be between 80 - 89"<<endl;
	 	}	
	 else	
	 	{
	 		cout<<"your average must be between 60 - 69"<<endl;
	 	}
	 	return 0;
     

}
