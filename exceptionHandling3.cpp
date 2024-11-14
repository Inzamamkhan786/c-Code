#include<iostream>
using namespace std;
int bankBalance = 5000;

int main(){

cout<<"Enter the money you want to deposit";
int w;
cin>>w;

try{
    if(w>bankBalance || w<0){
    if(w<0){
        throw("ERROR you entering negative value");
    }else{
        bankBalance = bankBalance - w;
        cout<<"\n"<<bankBalance;
    }
    
    if(w>bankBalance){
        throw(w);
    }else{
        bankBalance = bankBalance-w;
        cout<<bankBalance;
    }

    }else{
         bankBalance = bankBalance-w;
        cout<<bankBalance;
    } 
}

catch(int w){
    cout<<"ERROR Insufficient money in the bank account ";
}

catch(const char* str){
    cout<<str;
}


    return 0;
}