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
		while(p1<=100||p2<=100){
		int x1,x2;
		cout<<"Player 1 turn"<<"\n";
		srand(time(NULL));	
		x1=rand()%6+1;
		p1=x1+p1;
		cout<<"Player 1 got"<<p1<<"\n";
		if(p1==7||p1==99){
			S_L();
		}
		cout<<"Player 2 turn"<<"\n";
		srand(time(NULL));	
		x2=rand()%6+1;
		p2=x2+p2;
		cout<<"Player 2 got"<<p2<<"\n";
		if(p2==7||p2==99){
			S_L();
		}
		
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
	int b;
	cout<<"--Welcome to underground snake and ladder--"<<"\n";
	int *ptr;
	int n;
	cout<<"Enter the number of bet you will be having";
	cin>>n;
	ptr=new int[n];
	cout<<"Enter the different amounts that you will be gambling for"<<"\n";
	for(int i=0;i<n;i++){
		cin>>ptr[i];
	}
	cout<<"Now lets randomly select what amount we'd use for betting"<<"\n";
	int y;
	for(int j=0;j<n;j++){
	srand(time(NULL));	
	y=rand()%1000+1;
	ptr[j]=y*1000;
}
	int x;

	srand(time(NULL));	
	x=rand()%n+1;
	cout<<x<<"\n";
	cout<<"So we have got the betting amount"<<"\n";
	for(int j=0;j<n;j++){
		b=ptr[x];
	}
	Sleep(2000);
	cout<<b<<"\n";
	g.Add();
	
	
}
