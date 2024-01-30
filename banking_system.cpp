#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <cstring>

void account_info();
void show_account();
void deposit();
void showtotal();
void withdrawl();
int slip(int wit);

using namespace std;

int a=0;

string name,father,cnic,phone,accounttype;
int amount;

int main()
{
	cout<<"*------------------------ WELCOME TO THE ATM MACHINE SYSTEM-------------------------*"<<endl;
	while (1) {
		
		A:
		cout<<endl;
		cout<<"------------------------------------- MAIN MENU -------------------------------------";
		cout<<endl<<endl;
		cout<<"                                 Enter Your Choice                                   ";
		cout<<endl;
		cout << "			____________________________________"<<endl;
		cout << "			||     1. Open account            ||"<<endl;
		cout << "			||     2. Balance Enquiry         ||"<<endl;
		cout << "			||     3. Deposit Money           ||"<<endl;
		cout << "			||     4. Show Total balance      ||"<<endl;
		cout << "			||     5. Withdraw Money          ||"<<endl;
		cout << "			||     6. Exit                    ||"<<endl;
		cout << "			||________________________________||"<<endl<<endl;
		
		int choice;
		cin >> choice;
		
		system("cls");
		
		if(choice==1)
		{
			account_info();
		}
		else if(choice==2)
		{
			if(a==1)
			{
				show_account();
			}
			else
			{
				cout<<"First you can open your account please."<<endl;
				goto A;
			}
		}
		else if(choice==3)
		{
			if(a==1)
			{
				deposit();
			}
			else
			{
				cout<<"First you can open your account please."<<endl;
				goto A;
			}
		}
		else if(choice==4)
		{
			if(a==1)
			{
				showtotal();
			}
			else
			{
				cout<<"First you can open your account please."<<endl;
				goto A;
			}	
		}
		else if(choice==5)
		{
			if(a==1)
			{
				withdrawl();
			}
			else
			{
				cout<<"First you can open your account please."<<endl;
				goto A;
			}	
		}
		else if(choice==6)
		{
			exit(1);
		}
		else
		{
			cout<<"Invalaid number."<<endl;
		}
		
	}
	return 0;
}
		
void account_info()
{
	system("cls");
	
	cout<<"-------------------------------------- WELCOME --------------------------------------";
	cout<<endl<<endl;
	cout<<"--------------------------------- OPEN NEW ACCOUTNT ---------------------------------";
	cout<<endl<<endl;
	
	cout<<"Enter your name : ";
	cin.ignore();
	getline(cin,name);
	
	cout<<"Enter your father name : ";
	cin.ignore();
	getline(cin,father);
	
	cout<<"Enter your cnic number : ";
	cin.ignore();
	cin>>cnic;
	
	cout<<"Enter your phone number : ";
	cin.ignore();
	cin>>phone;
	
	cout<<"Chose your account type : ";
	cin.ignore();
	cin>>accounttype;
	
	cout<<"Enter the amount of your account :";
	cin.ignore();
	cin>>amount;
	
	a=1;
}
void show_account()
{
	cout<<"-------------------------------------- WELCOME --------------------------------------";
	cout<<endl;
	cout<<"------------------------------ YOUR ACCOUNT INFORMATION -----------------------------";
	cout<<endl;
	cout<<endl;
	
	cout<<"Name : "<<name<<endl;
	cout<<"CNIC Number : "<<cnic<<endl;
	cout<<"Phone number : "<<phone<<endl;
	cout<<"Account type : "<<accounttype<<endl;

}
void deposit()
{
	cout<<"-------------------------------------- WELCOME --------------------------------------";
	cout<<endl;
	cout<<"-------------------------------- DEPOSIT YOUR AMOUNT --------------------------------";
	cout<<endl;
	cout<<endl;
	
	int a;
	cout<<"Enter the amount : ";
	cin>>a;
	
	amount = amount+a;
}
void showtotal()
{
	cout<<"-------------------------------------- WELCOME --------------------------------------";
	cout<<endl;
	cout<<"-------------------------------- YOUR TOTAL BALANCE ---------------------------------";
	cout<<endl;
	cout<<endl;
	
	cout<<"Total amount in your account is : "<<amount;
	cout<<endl;
}
void withdrawl()
{
	cout<<"-------------------------------------- WELCOME --------------------------------------";
	cout<<endl;
	cout<<"-------------------------------- WITHDRAW YOUR AMOUNT -------------------------------";
	cout<<endl;
	cout<<endl;
	
	int wit;
	cout<<"Enter the amount you want to withdraw : ";
	cin>>wit;
	
	if(wit<=amount)
	{
		amount = amount-wit;
		slip(wit);
	}
	else
	{
		cout<<"You have not enough balance to withdraw."<<endl;
	}
}
int slip(int wit)
{
	system("cls");
	cout<<"********** WITHDRAW SLIP ***********"<<endl;
	cout<<" NAME               : "<<name<<endl;
	cout<<" CNIC               : "<<cnic<<endl;
	cout<<" WITHDRAW           : "<<wit<<endl;
	cout<<" REMAINING BALANCE  : "<<amount<<endl;
	cout<<endl;
	cout<<"************************************"<<endl;
	
	return 0;   
}
