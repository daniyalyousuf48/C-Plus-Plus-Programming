#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cout<< "enter any two number" <<endl;
	cin>>a>>b;
	char op;
	cout<<"enter operator(+,-,*,/)"<<endl;
	cin>>op;
	if (op=='+')
		{
			cout<<"the sum of two number"<<a+b<<endl;
		}
	else if(op=='-')
		{
			cout<<"the subtraction ot two number"<<a-b<<endl;
		}
	else if(op=='*')
		{
			cout<<"the multiplication of two number"<<a*b<<endl;
		}	
	else
		{
			cout<<"the division of two number";
		}
	return 0;	
	
	
	
}
