#include<iostream>
using namespace std;
#include<string>
#include<conio.h>
#include<bits/stdc++.h>
/*
Mini project ----->      01/09/2022   ~ somesh Sangwan    ~ 2019eeb1201;
feature->
       1)Check balance 
       2)Cash withdraw
       3)User details
       4)Update Mobile No.
*/
class atm
{
private:
    long int account_No ;
    string name;
    int PIN;
    double balance;
    string mobile_no;
public:
     void setData(long int account_no_a ,string name_a,int Pin_a , double balance_a, string mobile_n0_a){
            account_No=account_no_a;
            name=name_a;
            PIN=Pin_a;
            balance=balance_a;
            mobile_no=mobile_n0_a;

     }
     long int getAccountNo(){
        return account_No;
     }
     string getName(){
        return name;
     }
     int getPin(){
        return PIN;
     }
     double getBalance(){
        return balance;
     }
     string getMobileNo(){
        return mobile_no;
     }
     void setMobile(string mob_prev,string mob_new){
        if(mob_prev==mobile_no){
            mobile_no=mob_new;
            cout<<endl<<"successfully updated mobile No.";
            _getch();
        }
        else{
            cout<<endl<<"Incorrect !!! Old mobile No.";
            _getch();
        }
     }
     void cashWithDraw(int amount_a){
        if(amount_a>0 && amount_a<balance){
            balance-=amount_a;
            cout<<endl<<"please collect your case";
            cout<<endl<<"Available Balance :"<<balance;
            _getch();
        }
        else{
            cout<<endl<<"Invalid input or Insufficient balance";
            _getch();
        }
     }


};
int main(){
    int choice=0;
    int enterPIN;
    long int enterAccountNo;
    system("cls");
    atm user1;
    user1.setData(1234567,"Somesh",1111,45000.90,"9087654321");
    do{
        system("clc");
        cout<<endl<<"****welcome to SBI ATM ****"<<endl;
        cout<<endl<<"Enter your Account No.";
        cin>>enterAccountNo;
        cout<<endl<<" Enter Pin ";
        cin>>enterPIN;
        if((enterAccountNo==user1.getAccountNo()) && (enterPIN==user1.getPin())){
            do{
                int amount=0;
                string oldMobileNo,newMobileNo;
                system("clc");
                cout<<endl<<"***welcome to Atm***"<<endl;
                cout<<endl<<"Select Options";
                cout<<endl<<"1. check balance";
                cout<<endl<<"2. Cash Withdraw";
                cout<<endl<<"3. Show User Details";
                cout<<endl<<"4. Update Mobile No.";
                cout<<endl<<"5. Exit"<<endl;
                cin>>choice;
                switch(choice){
                    case 1:
                    cout<<endl<<"Your bank balance is :"<<user1.getBalance();
                    _getch();
                    break;
                    case 2:
                    cout<<endl<<"Enter the amount :";
                    cin>>amount;
                    user1.cashWithDraw(amount);
                    break;
                    case 3:
                    cout<<endl<<"*** user Details are : -";
                    cout<<endl<<"->Account No. "<<user1.getAccountNo();
                    cout<<endl<<"->Name "<<user1.getName();
                    cout<<endl<<"->Balance "<<user1.getBalance();
                    cout<<endl<<"->Mobile No. "<<user1.getMobileNo();
                    _getch();
                    break;
                    case 4:
                    cout<<endl<<"enter old mobile no.";
                    cin>>oldMobileNo;
                    cout<<endl<<"enter new mobile no.";
                    cin>>newMobileNo;
                    user1.setMobile(oldMobileNo,newMobileNo);
                    break;
                    case 5:
                     exit(0);
                    default:
                     cout<<endl<<"Enter invlid data !!!";
                }

            }while(1);
        }

    }while(1);
}
