#include <iostream>
using namespace std;
int main(){
	
	
		cout<<"---------------------------------Menu---------------------------------"<<endl;
		cout<<"No Items						                   Prices"<<endl;
		cout<<endl;
		cout<<"1) Sausage						               Rs:220"<<endl;
		cout<<"2) Cheese and Mushroom Omelet				   Rs:50"<<endl;
		cout<<"3) Paratha						               Rs:25"<<endl;
		cout<<"4) French Toast						           Rs:45"<<endl;
		cout<<"5) Coffee						               Rs:120"<<endl;
		cout<<"6) Tea							               Rs:40"<<endl;
		cout<<"7) Pan cake with Nutella serving			       Rs:395"<<endl;
		cout<<"----------------------------------------------------------------------"<<endl;
	
	
		string Name;
		char Od;
		int Q;
	
		
		cout << "Customer Name: ";
		cin >>Name;
		
		cout<<"What is your order no: ";
		cin>>Od;
		
		cout<<"Enter your quantity: ";
		cin>>Q;
		
		
		
		cout << "============================" <<endl;
		cout << "Your name is: " <<Name<<endl;
		cout<<"Your quantity: "<<Q<<endl;
			
			if (Od== '1'){
					cout<<"Your Order Is Sausage and Total Price is :"<<220*Q<<endl;
			}else if (Od=='2'){
					cout<<"Your Order Is Cheese and Mushroom Omelet and Total Price is :"<<50*Q<<endl;
			}else if (Od=='3'){
					cout<<"Your Order Is Paratha and Total Price is :"<<25*Q<<endl;
			}else if (Od=='4'){
					cout<<"Your Order Is French Toast and Total Price is :"<<45*Q<<endl;
			}else if (Od=='5'){
					cout<<"Your Order Is coffe and Total Price is :"<<120*Q<<endl;
			}else if (Od=='6'){
					cout<<"Your Order Is Tea and Total Price is :"<<40*Q<<endl;
			}else if (Od=='7'){
					cout<<"Your Order Is Pan cake with Nutella serving and Total Price is :"<<395*Q<<endl;
			}else{
				cout<<"Not Avaliable";
			}
		
	return 0;
}
