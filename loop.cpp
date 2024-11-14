//  #include<iostream>
//  using namespace std;
//  int main(){
//  int num = 1;
//  for(num = 1; num<=10; num++){
//      cout<<num<<"\n";
// }

//  }

// #include<iostream>
// using namespace std;
// int main(){
// int num;

// while(num<=10){
// cout<<"5*num"<<"\n";
// num++;
// }


// }

// #include<iostream>
// using namespace std;
// int main(){
// int i;
// for(i=1; i<=100; i++){
//     if(i%2==0){
//         cout<<i<<endl;
//     }
// }

// }







// #include<iostream>
// using namespace std;
// int main(){
// int i;
// for(i=1; i<=100; i++){
//     if(i%2 == 0){
//         continue;
//     }else{
//         cout<<i<<endl;
//     }
// }

// }






// #include<iostream>
// using namespace std;
// int main(){
// int n,i;
// cout<<"Enter the number : "<<endl;
// cin>>n;
// int sum=0;
// while(n!=0){
//     i=n%10;
//     sum = sum+i;
//     n=n/10;
// }
// cout<<"The sum of the digits = "<<sum;

// }









// #include<iostream>
// using namespace std;
// int main(){
// int n,i;
// cout<<"Enter the number : "<<endl;
// cin>>n;
// int product=1;
// while(n!=0){
//     i=n%10;
//     product = product*i;
//     n=n/10;
// }
// cout<<"The product of the digits = "<<product;

// }







#include<iostream>
using namespace std;
int main(){
int n,i;
cout<<"Enter the number : "<<endl;
cin>>n;
while(n!=0){
    i=n%10;
    cout<<i;
    n=n/10;
}

}