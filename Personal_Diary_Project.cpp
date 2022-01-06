#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<string.h>
#include<unistd.h>
#include<windows.h>
using namespace std;
class Diary{
	char *ptr;
	int c;
		private:
			int id;
			string Time;
			string day;
			string Other_name;
			string Agenda;
			string Location;
			
		public :void Add(){
			
			cout<<"Thanks for choosing this option"<<"\n";
			int option2;
			Sleep(2000);
			cout<<"1-Adding todos"<<"\n";
			cout<<"2-Meeting Setup"<<"\n";
			cout<<"3-Nothing"<<"\n";
			Sleep(1000);
			cout<<"Choose the option"<<"\n";
			cin>>option2;
			if(option2==1){
				cout<<"Enter how many todos you want for the day"<<"\n";
				cin>>c;
				ptr=new char[c];
				for(int i=0;i<c;i++){
					cout<<"Please Enter The todos you want"<<"\n";
					cin>>ptr[i];
				}
				goto x5;
			}
			else if(option2==2){
				cout<<"Please Specify the Id of the Meeting"<<"\n";
				cin>>id;
				cout<<"Please enter the Time of Meeting"<<"\n";
				cin>>Time;
				cout<<"Please enter the Day"<<"\n";
				cin>>day;
				cout<<"Please enter the name of meeting party"<<"\n";
				cin>>Other_name;
				cout<<"Please enter the Agenda"<<"\n";
				cin>>Agenda;
				cout<<"Please enter the location"<<"\n";
				cin>>Location;
				goto x5;
			}
			else if(option2==3){
			
				goto x6;
			}
			x5:
			cout<<"All the details Added"<<"\n";
			x6:
			cout<<"Thanks for using this function"<<"\n";
		}
		public :void Display(){
			
		int option3;
		cout<<"Please select the option from the following"<<"\n";
		cout<<"1-Displaying your TODO's"<<"\n";
		cout<<"2-Displaying your Meeting Schedules";
		cin>>option3;
		if(option3==1){
			for(int i=0;i<c;i++){
				cout<<"The todos are"<<ptr[i]<<"\n";
			}
	}
	else if(option3==2){
		cout<<"The id is"<<id<<"\n";
		cout<<"The time is"<<Time<<"\n";
		cout<<"The day is"<<day<<"\n";
		cout<<"The Agenda is"<<Agenda<<"\n";
		cout<<"The location is"<<Location<<"\n";
		Sleep(2000+1000);
		cout<<"Thankyou"<<"\n";
	}
		
		
		}
public :void Modify(){
	int ID;
	char z1,z2;
	string N_time;
	string N_day;
	string N_Agenda;
	string N_location;
	int option4;
	X1:
	cout<<"Enter the ID"<<"\n";
	cin>>ID;
	int a=1;
	if(id==ID){
		Y:
		cout<<"What do you want to change";
		cout<<"The time"<<"\n";
		cout<<"The day"<<"\n";
		cout<<"The Agenda"<<"\n";
		cout<<"The location"<<"\n";
		cin>>option4;
		if(option4==1){
			cout<<"Enter the new time"<<"\n";
			cin>>N_time;
			Time=N_time;
		}
		else if(option4==2){
			cout<<"Enter the new day"<<"\n";
			cin>>N_day;
			day=N_day;
		}else if(option4==3){
			cout<<"Enter the new Agenda"<<"\n";
			cin>>N_Agenda;
			Agenda=N_Agenda;
		}
		else if(option4==4){
			cout<<"Enter the new location"<<"\n";
			cin>>N_location;
			Location=N_location;
		}
		cout<<"Changes made succesfully"<<"\n";
		cout<<"The updated version is as follows"<<"\n";
		cout<<"The id is"<<id<<"\n";
		cout<<"The time is"<<Time<<"\n";
		cout<<"The day is"<<day<<"\n";
		cout<<"The Agenda is"<<Agenda<<"\n";
		cout<<"The location is"<<Location<<"\n";
		Sleep(2000+1000);
		cout<<"Thankyou for the changes"<<"\n";
		cout<<"Anything else you would want to change?"<<"\n";
		Sleep(1000);
		Z:	
		cout<<"Enter Y for yes and N for no";
		cin>>z1;
		if(z1=='Y'){
			goto Y;
			
		}
		else if(z1=='N'){
			while(true){
				cout<<"Ok"<<"\n";
				break;
			}
		}
		else{
			cout<<"Wrong Input Try again";
			goto Z; 
		}	
	}
		else{
			cout<<"Sorry Wrong ID"<<"\n";
			cout<<"wanna try again"<<"\n";
			cin>>z2;
			if(z2=='y'){
				goto X1;
			}
			else if(z2=='N'){
				cout<<"OK";
				while(true){
					break;
				}
			}
		}
}

public :void Exit(){
	while(true){
		break;
	}
}
	
};

int main(){
	Diary d;
	char option5;
	cout<<"Welcome to the Personal Diary Management System"<<"\n";
	Sleep(2000);
	string admin;
	string password;
	int n=3;
	for(int p=0;p<3;p++){
		cout<<n<<":"<<"Attempts available"<<"\n";
		cout<<"Please Enter The Admin name";
		cin>>admin;
		cout<<"Please Enter the Password";
		cin>>password;
		if(admin=="Arnav"||admin=="arnav" && password=="User"||password=="user"){
		
		goto X;
}	
	else{
		cout<<"Wrong Entry"<<"\n";
	}
	n--;
	if(n<1){
		goto U;
	}
}
	Sleep(2000);
	cout<<"Login Succesful"<<"\n";
	X:
	Sleep(1000);
	cout<<"1-Add the Details"<<"\n";
	cout<<"2-Display the Details"<<"\n";
	cout<<"3-Modify the Details"<<"\n";
	cout<<"4-Exit"<<"\n";

	int option;

	cout<<"Choose the option"<<"\n";
	cin>>option;
	Sleep(1000);
	
	if(option==1){
		d.Add();
	}
	else if(option==2){
		d.Display();
		
	}
	else if(option==3){
		d.Modify();
}

else if(option==4){
	d.Exit();
}
else{
	while(true){
		break;
	}
}
cout<<"Do you want to use the options again (Y/N)"<<"\n";
cin>>option5;
if(option5=='Y'||option5=='y'){
	goto X;
}
else if(option5=='N'||option5=='n'){

goto U;
}
else{
	while(true){
		cout<<"Sorry Wrong option"<<"\n";
		break;
	}
}
	U:
	cout<<"Thanku For Using The software";
}

