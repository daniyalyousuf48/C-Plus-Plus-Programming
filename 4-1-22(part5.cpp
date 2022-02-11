#include <iostream>
using namespace std;
int main()
{
	int time,sal,inc;
	cout<<"enter time"<<endl;
	cin>>time;
	cout<<"enter your salary"<<endl;
	cin>>sal;
	
	if(time>=2 && time<3)
		{
			cout<<"highly efficent"<<endl;
		}
	else if(time>=3 || time<=4)
		{
			cout<<"improve speed"<<endl;
			inc=sal*5;
			cout<<"your new salary is =" <<inc<<endl;
		}
	else if(time>4)
		{
			cout<<"asked to leave the country"<<endl;
		}
	else
		{
			cout<<"invalid"<<endl;
		}		
		return 0;
			
}
