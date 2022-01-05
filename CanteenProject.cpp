#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<string.h>
using namespace std;
class Canteen{
	int x;
	private:
		 string Name;
		 string Item;
		 int price;
		 string day;
		
		public :int add(){
			cout<<"Enter the Name please";
			cin>>Name;
			cout<<"Enter the day";
			cin>>day;
			cout<<"Enter the Item";
			cin>>Item;
			cout<<"Enter the price";
			cin>>price;
				if(price>100){
			x=price-price*0.1;		
			}
			else{
				x=price;
			}
			return x;
		}
		
		public :void Display(){
			cout<<Name<<"\n";
			cout<<day<<"\n";
			cout<<Item<<"\n";
			cout<<x<<"\n";
		}
		public :void other(){
			string item;
			cout<<"Hey there May we know what you want to add"<<"\n";
			cin>>item;
			int cost;
			cout<<"Enter the cost please"<<"\n";
			cin>>cost;
				if(cost>100){
			int c1=cost-cost*0.1;
			x=x+c1;		
			}
			else{
				x=x+cost;
			}
			
			cout<<"The final cost will be"<<x<<"\n";
		}
	};
int main(){
	
	cout<<"Welcome to Arnav's Canteen I hope you have a great time"<<"\n";
	Canteen C;
	string admin;
	string password;
	int n=3;
	for(int p=0;p<3;p++){
	cout<<n<<"\n";
	cout<<"Please enter the admin name"<<"\n";
	cin>>admin;
	cout<<"Please enter the password"<<"\n";
	cin>>password;
	if(admin=="Arnav"||admin=="arnav" && password=="User"||password=="user"){
			goto Z;	
	}
	else{
		cout<<"Wrong Entry"<<"\n";	
	}
	n--;
	if(n<1){
		goto b;
	}
}
	Z:
	cout<<"1-Add the details"<<"\n";
	cout<<"2-The display to customer"<<"\n";
	cout<<"3-Would you want something else"<<"\n";
	int y;
	cout<<"Enter the option";
	cin>>y;
	static bool E=false;
	
		if(y==1){
			C.add();
			E=true;
			goto Z;
			
		}
		
		else if(y==2){
			if(E==false){
				cout<<"Sorry nothing to show please add details first"<<"\n";
				goto Z;
			}
			else{
			
			C.Display();
			goto Z;
		}
	}
		else if(y==3){
		while(true){
		
		char a;
		cout<<"Would u like to add some other item also (Y/N)"<<"\n" ;
		cin>>a;
		if(a=='Y'){
			C.other();
		}
		else if(a=='N'){
			goto b;
			}
		else{
			cout<<"Sorry wrong entry"<<"\n";
			goto Z;
		}
		
	}
			}
		while(true){
		if(y>3){
			cout<<"Sorry wrong option"<<"\n";
			cout<<"please Try Again if still not works ask the software engineer to fix the issue"<<"\n";
			break;
		}
	}
	b:
	cout<<"Thanku for using the software"<<"\n";
}
