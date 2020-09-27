#include<iostream>
using namespace std;

class bank{
    char name[100],add[100],y;
    int balance;
    public:
        void open_account();
        void deposit();
        void withdraw();
        void display();
};

void bank :: open_account(){
    cout<<"Enter your full name : ";
    cin.ignore();
    cin.getline(name,100);
    cout<<"Enter your address : ";
    cin.ignore();
    cin.getline(add,100);
    cout<<"What type of account you want to open Saving (S) or Current (C) : ";
    cin>>y;
    cout<<"Enter amount for deposit : ";
    cin>>balance;
    cout<<"Your account is created";
}

void bank :: deposit(){
    int a;
    cout<<"Enter amout to be deposited : ";
    cin>>a;
    balance+=a;
    cout<<"Total balance : \t"<<balance;
}

void bank :: display(){
    cout<<"Full Name : \t"<<name;
    cout<<"Address : \t"<<add;
    cout<<"Type of account : \t"<<y;
    cout<<"Total Balance : \t"<<balance;
    
}

void bank :: withdraw(){
    float amount;
    cout<<"\n Withdraw : ";
    cout<<"Enter amount to withdraw : ";
    cin>>amount;
    balance-=amount;\
    cout<<"Total Balance : "<<balance
}
int main(){
    int a;
    cout<<"1-> Open Account \n";
    cout<<"2-> Deposit Money \n";
    cout<<"3-> Withdraw Money \n";
    cout<<"4-> Display Account \n";
    cout<<"5-> Exit \n";

    return 0;
}
