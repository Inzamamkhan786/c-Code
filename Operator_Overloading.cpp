#include<iostream>
using namespace std;

class complex{
int real,imag;

public:
complex(){
    real = 0;
    imag = 0;
}


complex(int r, int i){
    real = r;
    imag = i;
}

void display(){
    cout<<real<<" +"<<imag<<"i";
}


complex operator +(complex c){
    complex temp;
    temp.real = real + c.real;
    temp.imag = imag + c.imag;
    return temp;
}

complex operator -(complex c){
    complex temp;
    temp.real = real - c.real;
    temp.imag = imag - c.imag;
    return temp;
}


complex operator *(complex c){
    complex temp;
    temp.real = (real*c.real)-(imag*c.imag);
    temp.imag = (imag*c.real)+(real*c.imag);
    return temp;

}

complex operator /(complex c){
    complex temp;
    temp.real = ((real*c.real)+(imag*c.imag))/((c.real)*(c.real)+(c.imag)*(c.imag));
    temp.imag = ((imag*c.real)-(real*c.imag))/((c.real)*(c.real)+(c.imag)*(c.imag));
    return temp;
}


};







int main(){
complex c1(5,3),c2(5,4);
complex c3;
cout<<"Complex number c1 : ";
c1.display();
cout<<"\n Complex number c2 : ";
c2.display();

c3 = c1+c2; //operator overloading;
//add;
cout<<"\nComplex number c3 : ";
c3.display();

c3 = c1-c2;
//subtract;
cout<<"\n Complex number c3 for subtract: ";
c3.display();

c3 = c1*c2;
//multiplication
cout<<"\n Complex number c3 for multipkication: ";
c3.display();


c3 = c1/c2;
//Division;
cout<<"\nComplex number c3 for division: ";
c3.display();




    return 0;
}
