// #include<iostream>
// using namespace std;
// int main(){
// int age;
// cout<<"Enter the age of the person : ";
// cin>>age;
// if(age>=18){
//     cout<<"Eligible for driving"<<"\n";
// }else{
//     cout<<"Not Elligible for driving"<<"\n";
// }

// }


// #include<iostream>
// using namespace std;
// int main(){
// cout<<"Enter the number : ";
// int num;
// cin>>num;

// if(num%5==0){
//     cout<<"The number is divisible by 5"<<"\n";
// }else{
//     cout<<"The nnumber is not divisible by 5"<<"\n";
// }

// }






#include<iostream>
using namespace std;
int main(){
int length,bredth;
cout<<"Enter the length of the rectangle : "<<"\n";
cin>>length;
cout<<"Enter the bredth of the rectangle : "<<"\n";
cin>>bredth;

if((length*bredth)>(2*(length+bredth))){
    cout<<"The area of rectangle is greater than perimeter";
}else if((length*bredth)<(2*(length+bredth))){
    cout<<"The perimeter is greater than the area";
}else{
    cout<<"Both area and perimeter is equal";
}

}