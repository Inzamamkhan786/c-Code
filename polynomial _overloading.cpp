#include<iostream>
using namespace std;


class Polynomial{
 int degree[3];
 int coeff[3];
 int currentIndex;

 public:

//constructor;
Polynomial(){
for(int i=0; i<3; i++){
    degree[i] = 0;
    coeff[i] = 0;
}
currentIndex = 0;
}

void setPolynomial(int expo,int val){
    if(currentIndex<3){
        degree[currentIndex] = expo;
        coeff[currentIndex] = val;
        currentIndex++;
    }
}

void display(){
    for(int i=0; i<3; i++){
        if(i==2){
            cout<<coeff[i]<<"x^"<<degree[i];
        }else{
        cout<<coeff[i]<<"x^"<<degree[i]<<"+ ";
        }
    }
}


Polynomial operator +(Polynomial p){
    Polynomial temp;
    for(int i=0; i<3; i++){
        temp.coeff[i] = coeff[i] + p.coeff[i];
    }
    return temp;
}



};




int main(){
Polynomial p[3];

p[0].setPolynomial(2,5);
p[0].setPolynomial(1,7);
p[0].setPolynomial(0,2);
p[0].display();

cout<<"\n";

p[1].setPolynomial(2,1);
p[1].setPolynomial(1,4);
p[1].setPolynomial(0,4);
p[1].display();

cout<<"\n";
p[2] = p[0] + p[1];
p[2].display();


    return 0;
}