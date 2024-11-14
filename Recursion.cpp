// #include<iostream>
// using namespace std;
// int fact(int n){
//     if(n==1){
//         return 1;
//     }
//     return n*fact(n-1);
// }




// int main(){
// int n;
// cout<<"Enter the value of n : ";
// cin>>n;
// cout<<fact(n);

// }







#include<iostream>
using namespace std;
int power(int n,int pow){
    if(pow==0){
        return 1;
    }
    return n*power(n,pow-1);
}


int main(){
    int n,pow;
    cout<<"Enter the value of n : ";
    cin>>n;
    cout<<"Enter the value of power : ";
    cin>>pow;

    cout<<power(n,pow);
}