#include<iostream>
using namespace std;


int Fact(int m){
    int fact =1;
   for(int i=1; i<=m; i++){
    fact = fact*i;
   } 
   return fact;
}



int main(){
int n,r;
cout<<"Enter the value of n: ";
cin>>n;
cout<<"Enter the value of r: ";
cin>>r;
int ncr= Fact(n)/(Fact(r)*Fact(n-r));
cout<<"The value of ncr = "<<ncr;
}