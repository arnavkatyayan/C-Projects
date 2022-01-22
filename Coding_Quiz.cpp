#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<string.h>
#include<Windows.h>
#include<unistd.h>
#include<stdlib.h>
#include<time.h>
using namespace std;

//Building A quiz application

class code{
	private:
			short age;
			string name;
			string profession; 
			int price=0;
			
	public :void Add(){
		cout<<"Please Enter your name"<<"\n";
		cin>>name;
		cout<<"Please Enter your age"<<"\n";
		cin>>age;
		cout<<"Please Enter your profession"<<"\n";
		cin>>profession;
		Game();
	}
	public :void Reset_price(){
		price=0;
		
	}
	public :void Game(){
		int x;
		for(int i=0;i<1;i++){
		
		cout<<"So lets play Coding Quiz"<<"\n";
		Sleep(2000);
		cout<<"See! you will get 10 questions if you will answer all the question you will earn 1 crore"<<"\n";
		cout<<"Here comes the first question"<<"\n";
		Sleep(1000);
		cout<<"Who Invented AI"<<"\n";
		Sleep(1000);
		cout<<"1-Elon musk"<<"\n";
		cout<<"2-Bill Gates"<<"\n";
		cout<<"3-Alan Turing"<<"\n";
		cout<<"Please enter your Response"<<"\n";
		cin>>x;
		if(x==3){
			price=price+5000;
			cout<<"Congratulations You have won 5000 Rupees"<<"\n";
		}
		else{
			cout<<"Sorry Wrong response"<<"\n";
			goto x;
			break;
			}
			Reset_price();
			Sleep(2000);
		cout<<"Who Invented JAVA"<<"\n";
		Sleep(1000);
		cout<<"1-James Gosling"<<"\n";
		cout<<"2-Linus torvalds"<<"\n";
		cout<<"3-Mark Zuckerberg"<<"\n";
		cout<<"Please enter your Response"<<"\n";
		cin>>x;
		if(x==1){
			price=price+10000;
			cout<<"Congratulations You have won 10000 Rupees"<<"\n";
		}
		else{
			cout<<"Sorry Wrong response"<<"\n";
			goto x;
			break;
			}
			Reset_price();
			Sleep(2000);
		cout<<"First Programming Language?"<<"\n";
		Sleep(1000);
		cout<<"1-Basic"<<"\n";
		cout<<"2-Fortran"<<"\n";
		cout<<"3-ADA"<<"\n";
		cout<<"Please enter your Response"<<"\n";
		cin>>x;
		if(x==3){
			price=price+20000;
			cout<<"Congratulations You have won 20000 Rupees"<<"\n";
		}
		else{
			cout<<"Sorry Wrong response"<<"\n";
			goto x;
			break;
			}
		Reset_price();
		Sleep(2000);
		cout<<"Manual Memory management is done in which programming language?"<<"\n";
		Sleep(1000);
		cout<<"1-C/C++"<<"\n";
		cout<<"2-Python"<<"\n";
		cout<<"3-Java"<<"\n";
		cout<<"Please enter your Response"<<"\n";
		cin>>x;
		if(x==1){
			price=price+50000;
			cout<<"Congratulations You have won 50000 Rupees"<<"\n";
		}
		else{
			cout<<"Sorry Wrong response"<<"\n";
			goto x;
			break;
			}
			Reset_price();
			Sleep(2000);
		cout<<"Linux Command for Creating a directory?"<<"\n";
		Sleep(1000);
		cout<<"1-create"<<"\n";
		cout<<"2-mkdir"<<"\n";
		cout<<"3-ls"<<"\n";
		cout<<"Please enter your Response"<<"\n";
		cin>>x;
		if(x==2){
			price=price+100000;
			cout<<"Congratulations You have won 100000 Rupees"<<"\n";
		}
		else{
			cout<<"Sorry Wrong response"<<"\n";
			goto x;
			break;
			}
			
			Sleep(2000);
		cout<<"Java Library file for getting started with file Handling"<<"\n";
		Sleep(1000);
		cout<<"1-import java.io.*"<<"\n";
		cout<<"2-import java.io.*.resume"<<"\n";
		cout<<"3-import java.ip"<<"\n";
		cout<<"Please enter your Response"<<"\n";
		cin>>x;
		if(x==1){
			Reset_price();
			price=price+250000;
			cout<<"Congratulations You have won 250000 Rupees"<<"\n";
		}
		else{
			cout<<"Sorry Wrong response"<<"\n";
			goto x;
			break;
			}
			
			Sleep(2000);
		cout<<"Among the given statements, which statement defines closures in JavaScript?"<<"\n";
		Sleep(1000);
		cout<<"1-JavaScript is a function that is enclosed with references to its inner function scope"<<"\n";
		cout<<"2-JavaScript is a function that is enclosed with references to its lexical environment"<<"\n";
		cout<<"3-JavaScript is a function that is enclosed with the object to its inner function scope"<<"\n";
		cout<<"Please enter your Response"<<"\n";
		cin>>x;
		if(x==2){
			Reset_price();
			price=price+500000;
			cout<<"Congratulations You have won 500000 Rupees"<<"\n";
		}
		else{
			cout<<"Sorry Wrong response"<<"\n";
			goto x;
			break;
			}
		}
			x:
			Sleep(2000);
			cout<<"\n";
			Display();
}
	public :void Display(){
		cout<<"Thankyou"<<name<<"For playing the game you have won rs:"<<price<<"\n";
		
	}
};

int main(){
	code c;
	cout<<"Welcome to my Coding Quiz Application Enjoy!"<<"\n";
	Sleep(2000);
	cout<<"Are"<<"\n";
	Sleep(1000);
	cout<<"You"<<"\n";
	Sleep(1000);
	cout<<"Ready"<<"\n";
	Sleep(1000);
	c.Add();
	return 0;
}
