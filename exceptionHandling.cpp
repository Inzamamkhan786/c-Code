#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter a and b : ";
    cin>>a>>b;
    // c = a/b;

    try{
        if(b!=0){
            c = a/b;
            cout<<"\n Division = "<<c;
        }else{
            throw(b);
        }
    }
    catch(int b){
        cout<<"You entering b = 0"<<"\nError try again";
    }


    return 0;
}