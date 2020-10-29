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
    cout<<" Full Name : \t"<<name;
    cout<<"\n Address : \t"<<add;
    cout<<"\n Type of account : \t"<<y;
    cout<<"\n Total Balance : \t"<<balance;
    
}

void bank :: withdraw(){
    float amount;
    cout<<"\n Withdraw : ";
    cout<<"Enter amount to withdraw : ";
    cin>>amount;
    balance-=amount;\
    cout<<"Total Balance : "<<balance;
}
int main(){
    int ch;
    char x;
    bank obj;
    do{
    cout<<"1-> Open Account \n";
    cout<<"2-> Deposit Money \n";
    cout<<"3-> Withdraw Money \n";
    cout<<"4-> Display Account \n";
    cout<<"5-> Exit \n";
    cout<<"Select the option from above \n";
    cin>>ch;
    switch(ch){
        case 1:cout<<"1-> Open Account \n";
            obj.open_account();
            break;
        case 2:cout<<"2-> Deposit Money \n";
            obj.deposit();
            break;
        case 3:cout<<"3-> Withdraw Money \n";
            obj.withdraw();
            break;
        case 4:cout<<"4-> Display Account \n";
            obj.display();
            break;
        case 5:
            exit(1);
        default:
            cout<<"Invalid option try again \n";
    }
    cout<<"\n Do you want to select next option then press :: Y \n";
    cout<<"If you want to exit then press :: N \n";
    cin>>x;
    if(x =='n' || x =='N')
    exit(0);
    }
    while(x=='y' || x=='Y');
    return 0;
}
