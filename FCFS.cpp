#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<Windows.h>
#include<string.h>
#include<unistd.h>
using namespace std;
int main(){
//coding an OS algorithm(FCFS)
//components needed-processes name,Arrival time,Execute Time,Service time
//wait time:Service-Arrival
//Thats It Lets start coding..

char *ptr1;
int *ptr2;
int *ptr3;
int *ptr4;
int n;
int i,j;
int *Wait_Time;
float avg=0;
cout<<"Enter how many processes you want"<<"\n";
cin>>n;
ptr1=new char[n];
ptr2=new int[n];
ptr3=new int[n];
ptr4=new int[n];
Wait_Time=new int[n];

	cout<<"Enter the name of "<<n<<"Processes"<<"\n";
	for(i=0;i<n;i++){
		cin>>ptr1[i];
	}
	cout<<"Enter the Arrival time"<<n<<"\n";
	for(i=0;i<n;i++){
		cin>>ptr2[i];
	}
	cout<<"Enter the Execution time"<<n<<"\n";
	for(i=0;i<n;i++){
		cin>>ptr3[i];
	}
	cout<<"Enter the Service time"<<n<<"\n";
	for(i=0;i<n;i++){
		cin>>ptr4[i];
	}
	for(i=0;i<n;i++){
		Wait_Time[i]=ptr4[i]-ptr2[i];
	}
	for(i=0;i<n;i++){
		cout<<Wait_Time[i]<<"\n";
		Sleep(1000);
	}
	
	for(i=0;i<n;i++){
		avg=avg+Wait_Time[i];
	}
	cout<<"The Average Waiting time will be"<<"\n";
	Sleep(2000);
	avg=avg/n;
	cout<<avg;
	
return 0;
}
