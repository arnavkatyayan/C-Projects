#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<Windows.h>
#include<unistd.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
class Game{
	
	
	private:
		int p1=1;
		int p2=1;
		string dice1;
		string dice2;
		string name1;
		string name2;
		
				
	public :void Add(){
		cout<<"Please Enter the name of first player"<<"\n";
		cin>>name1;
		cout<<"Please Enter the name of Second player"<<"\n";
		cin>>name2;
		
		cout<<name1<<"Please tell which colour dice you want";
		cin>>dice1;
		cout<<name2<<"Please tell which colour dice you want";
		cin>>dice2;
		game();
	}
	public :void game(){
		while(p1<=100 && p2<=100){
		int x1,x2;
		cout<<"Player 1 turn"<<"\n";
		srand(time(NULL));	
		x1=rand()%6+1;
		p1=x1+p1;
		cout<<"Player 1 got"<<x1<<"\n";
		if(p1==7||p1==99){
			cout<<"Bonus"<<"\n";
			S_L();
		}
		cout<<"Total of Player1 will be"<<p1<<"\n";
		Sleep(2000);
		cout<<"Player 2 turn"<<"\n";
			
		x2=rand()%6+1;
		p2=x2+p2;
		cout<<"Player 2 got"<<x2<<"\n";
		if(p2==7||p2==99){
			cout<<"Bonus"<<"\n";
			S_L();
		}
		cout<<"Total of Player2 will be"<<p2<<"\n";
		Sleep(2000);
	
			
			
			
	
		
		}
		Display();
}


	public :void S_L(){
		if(p1==7){
			p1=56;
		}
		if(p2==7){
			p2=56;
		}
		if(p1==99){
			p1=6;
		}
		if(p2==99){
			p2=6;
		}
		
	}
	public :void Display(){
		if(p1>p2){
			cout<<"Great job"<<name1<<"You won"<<"\n";
		}
		else{
			cout<<"Great job"<<name2<<"You won"<<"\n";
		}
	
	}
	
		
};
int main(){
	
Game g;
cout<<"---Welcome to underground Snake and Ladder Game---"<<"\n";
long p;
cout<<"Now we will get the total amount some proportion of it will go for game and rest for us"<<"\n";
cout<<"Maximum range is 10 lakh"<<"\n";
srand(time(NULL));	
	p=rand()%1000000*10;
	cout<<"The amount estimated that got generated through internet"<<p<<"\n";
	

cout<<"Now we will find out what will be betting amount"<<"\n";
cout<<"In 5 Seconds we will get the betting amount"<<"\n";
Sleep(5000);
long y;
y=rand()%p;
cout<<y<<"\n";
g.Add();	
cout<<"Congrtulations for winning"<<"Rs"<<""<<y;
	
}

