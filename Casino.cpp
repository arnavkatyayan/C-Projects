#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<string.h>
#include<Windows.h>
#include<unistd.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
class Casino{
	
	private:
		string name;
		short age;
		char sex;
		long Funds;
		long P_L;
					
	public :void Add_Details(){
		cout<<"Please enter your Full Name"<<"\n";
		cin>>name;
		cout<<"Please Enter your Age"<<"\n";
		cin>>age;
		cout<<"Please enter your Gender"<<"\n";
		cin>>sex;
		cout<<"Please enter the funds you have"<<"\n";
		cin>>Funds;
		P_L=Funds;
		Verification();
	}
	public :void Verification(){
		short count=0;
		cout<<"Please give us 5 seconds we want to verify the details"<<"\n";
		if(age>=22 && Funds>=100000){
			count++;
		}
		else{
			count=0;
		}
		
		if(count>=1){
		Sleep(5000);
		cout<<"You can play the game"<<"\n";
		Game();	
		}
		
		else{
			cout<<"Sorry you can't play the game"<<"\n";
		}
		
		
	}
	public :void Game(){
		int x;
		int y;
		cout<<"For every loss you will lose just Rs-10000 and for every win you will win Double the money"<<"\n";
		cout<<"Enter the number between 1 to 100"<<"\n";
		cin>>x;
		Sleep(2000);
		cout<<"Thanks for Entering the number"<<"\n";
		srand(time(NULL));	
		y=rand()%100+1;
		cout<<y<<"\n";
		Sleep(1000);
		if(x==y){
			cout<<"Congratulations! you have won the game"<<"\n";
			Funds=2*Funds;
			Repeat();
		}
		else{
			cout<<"Oh! so sorry better luck next time"<<"\n";
			Funds=Funds-10000;
			Repeat();
		}
	
}
	public :void Repeat(){
		if(Funds>10000){
		
		cout<<"Would You like to repeat the game"<<"\n";
		Sleep(1000);
		cout<<"Just enter Y/N"<<"\n";
		char R1,R2;
		cin>>R1;
		if(R1=='Y'||R1=='y'){
			Game();
		} 
		else if(R1=='N'||R1=='n'){
			cout<<"OK We accept"<<"\n";
			cout<<"Are you sure about that just enter Y/N"<<"\n";
			cin>>R2;
			if(R2=='N'||R2=='n'){
				Game();
			}
			else{
				
				Display();
			}
		}
		else{
			while(true){
				cout<<"Invalid Choice";
				break;
			}
		}
	}
	if(Funds<10000){
	
	cout<<"Ok Thanks for playing with us"<<"\n";
	Display();
}
		
	}
	public :void Login(){
		int n;
		string admin;
		string password;
		cout<<"You have only 3 chances left"<<"\n";
		for(int i=0;i<3;i++){
		
		cout<<"Please enter the Admin name"<<"\n";
		cin>>admin;
		cout<<"Please enter the password"<<"\n";
		cin>>password;
		if(admin=="Arnav"||admin=="arnav" && password=="User"||password=="user"){
			cout<<"Login Successful"<<"\n";
			Sleep(1000);
			Add_Details();
			break;
			
		}
		else{
			cout<<"Login Failed";
			n--;
		}
	}
	}
	public :void Display(){
		long profit;
		long loss;
		if(P_L>Funds){
			loss=P_L-Funds;
			cout<<"Sorry for your loss"<<"\n";
			cout<<"Your net amount will be"<<loss<<"\n";
		}
		else{
			profit=Funds-P_L;
			cout<<"We are happy for your profits"<<"\n";
			cout<<"Your net amount will be"<<profit<<"\n";
		}
		
	} 	
};

int main(){
	
	cout<<"---Welcome to Arnav's Casino----"<<"\n";
	cout<<"I hope You have a great time here"<<"\n";
	cout<<"You will be redirected to our Login page in 3 seconds"<<"\n";
	cout<<"Enjoy"<<"\n";
	Sleep(3000);
	Casino c;
	c.Login();
	
	
}
