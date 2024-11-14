#include<iostream>
using namespace std;

class BankAccount{
    int accountNumber;
    float balance;
    static int no_of_accounts;
   


    public:

    void set(int account, float amount){
        accountNumber = account;
        balance = amount;
        no_of_accounts++;
    }


     void deposit(int account , float amount){
      if(account == accountNumber){
         balance = balance + amount;
      }else{
        cout<<"Invalid Account Number\n";
      }

     }



     void withdraw(int account, float amount){
        if(account == accountNumber){
            if(balance < amount){
                cout<<"Insufficiennt money";
            }else{
                balance = balance - amount;
            }
        }else{
            cout<<"\nInvalid Account Number!!\n";
        }

     }

     void display(){
        cout<<"\nAccount Number: "<<accountNumber;
        cout<<"\nAvailable Balance: "<<balance;
     }

    static void numberAccounts(){
        cout<<"\nNumber of acccount : "<<no_of_accounts;
     }

};

int BankAccount::no_of_accounts = 0;





int main(){
    BankAccount b1;
    b1.set(12345,7000);
    int acc;
    float amount;
    cout<<"Enter the Account Number: ";
    cin>>acc;
    cout<<"\nEntre the  Amount: ";
    cin>>amount;

    b1.deposit(acc,amount);  
    b1.display();
    cout<<"\n";

    b1.withdraw(acc,9000);
    b1.withdraw(acc,2000);
    cout<<"\n";
    b1.display();
    b1.numberAccounts();





    return 0;
}