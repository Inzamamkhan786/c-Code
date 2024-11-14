//  ****
//  ****
//  ****


// #include<iostream>
// using namespace std;
// int main(){
// int i,j;
// for(i=1; i<=3; i++){
//     for(j=1; j<=4; j++){
//         cout<<"* ";
//     }
//     cout<<endl;
// }

// }






//1234
//1234
//1234
//1234


// #include<iostream>
// using namespace std;
// int main(){
// int n,m,i,j;
// cout<<"Entetr the number of rows : "<<endl;
// cin>>n;
// cout<<"Enter the number of columns : "<<endl;
// cin>>m;
// for(i=1; i<=n; i++){
//     for(j=1; j<=m; j++){
//         cout<<j<<" ";
//     }
//     cout<<endl;
// }
// }









// #include<iostream>
// using namespace std;
// int main(){
// int n,m,i,j;
// cout<<"Entetr the number of rows : "<<endl;
// cin>>n;
// cout<<"Enter the number of columns : "<<endl;
// cin>>m;
// for(i=1; i<=n; i++){
//     char ch='A';
//     for(j=1; j<=m; j++){
//         cout<<ch<<" ";
//            ch++;
//     }
//     cout<<endl;
// }
// }











//*
//**
//***
//****
//*****



// #include<iostream>
// using namespace std;
// int main(){
// int n,m,i,j;
// cout<<"Enter the number of the rows : "<<endl;
// cin>>n;
// cout<<"Enter the number of the columns : "<<endl;
// cin>>m;

// for(i=1; i<=n; i++){
//     for(j=1; j<=i; j++){
//         cout<<"* ";
//     }
//     cout<<endl;
// }
// }








//1
//12
//123
//1234
//12345




// #include<iostream>
// using namespace std;
// int main(){
// int n,m,i,j;
// cout<<"Enter the number of the rows : "<<endl;
// cin>>n;
// cout<<"Enter the number of the columns : "<<endl;
// cin>>m;

// for(i=1; i<=n; i++){
//     for(j=1; j<=i; j++){
//         cout<<j<<" ";
//     }
//     cout<<endl;
// }
// }







// #include<iostream>
// using namespace std;
// int main(){
// int n,m,i,j;
// cout<<"Enter the number of the rows : "<<endl;
// cin>>n;
// cout<<"Enter the number of the columns : "<<endl;
// cin>>m;

// for(i=1; i<=n; i++){
//     for(j=1; j<=i; j++){
//         cout<<i<<" ";
//     }
//     cout<<endl;
// }
// }










// #include<iostream>
// using namespace std;
// int main(){
// int n,m,i,j;
// cout<<"Enter the number of the rows : "<<endl;
// cin>>n;
// cout<<"Enter the number of the columns : "<<endl;
// cin>>m;

// for(i=1; i<=n; i++){
//     char ch='A';
//     int num =1;
//     for(j=1; j<=i; j++){
//         if(i%2==0){
//             cout<<ch<<" ";
//             ch++;
//         }else{
//             cout<<num<<" ";
//             num++;
//         }
//     }    
//     cout<<endl;
// }
// }









//*****
//****
//***
//**
//*


// #include<iostream>
// using namespace std;
// int main(){

// int n,m,i,j;
// cout<<"Enter the number of rows : ";
// cin>>n;
// cout<<"Enter the number of columns : ";
// cin>>m;

// for(i=1; i<=n; i++){
//     for(j=1; j<=n+1-i; j++){

    
//     cout<<"* ";
// }
// cout<<"\n";
// }
// }












// #include<iostream>
// using namespace std;
// int main(){

// int n,m,i,j;
// cout<<"Enter the number of rows : ";
// cin>>n;
// cout<<"Enter the number of columns : ";
// cin>>m;

// for(i=1; i<=n; i++){
//     char ch='A';
//     for(j=1; j<=n+1-i; j++){
//     cout<<ch<<" ";
//     ch++;
// }
// cout<<"\n";
// }
// }









// #include<iostream>
// using namespace std;
// int main(){
// int n,i,j;
// cout<<"Enter the value of rows and columns : ";
// cin>>n;
// for(i=1; i<=n; i++){
//     int m=1;
//     for(j=1; j<=i; j++){
//         cout<<m<<" ";
//        m=m+2;
//     }
//     cout<<endl;
// } 

// }













// #include<iostream>
// using namespace std;
// int main(){
// int i,j,n;
// cout<<"Enter the number of rows and columns : ";
// cin>>n;

// for(i=1; i<=n; i++){
//     for(j=1; j<=i; j++){
//         if((i+j)%2==0){
//             cout<<"1 ";
//         }else{
//             cout<<"0 ";
//         }      
//     }
//     cout<<endl;
// }
// }











//    *
//    *
//* * * * *
 //   *
  //  *



// #include<iostream>
// using namespace std;
// int main(){
// int i,j,n;
// cout<<"Enter the rows and columns : ";
// cin>>n;

// for(i=1; i<=n; i++){
//     for(j=1; j<=n; j++){
//         if(i==3 || j==3){
//             cout<<"* ";
//         }else{
//             cout<<"  ";

//         }
//     }
//     cout<<endl;
// }
// }


















//    *
//   **     
//  ***
// **** 
//***** 


#include<iostream>
using namespace std;
int main(){
int n,i;
cout<<"Enter the number of rows and columns"<<"\n";
cin>>n;
for(i=1; i<=n; i++){
    for(int j=1; j<=n-i+1; j++){
        cout<<"  ";
    }
    for(int j=1; j<=i; j++){
        cout<<"* ";
    }
    cout<<endl;
}
}