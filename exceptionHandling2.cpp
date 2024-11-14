#include<iostream>
using namespace std;


int main(){
int n;
int arr[5] = {23,12,78,1,4};
cout<<"Enter the index so that you want to print the value of that index : ";
cin>>n;
 
try{
    if(n>=5){
        throw(n);
    }else{
        cout<<"arr[n] = "<<arr[n];
    }
}
catch(int n){
    cout<<"Error you are tring to print beyong array size";

}

    return 0;
}