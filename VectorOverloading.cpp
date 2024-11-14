#include<iostream>
using namespace std;

class vector{
float a,b,c;
public:
vector(){
    a=0;
    b=0;
    c=0;
}


vector(float i, float j, float k){
    a=i;
    b=j;
    c=k;
}

float operator *(const vector v){
      return (a*v.a + b*v.b + c*v.c);  
}

vector operator^(const vector v)const{
    return vector(v.c * b - v.b * c,v.c * a - v.a * c,v.b * a - v.a * b);    
}

void display(){
    cout<<a<<"i"<<" -"<<" "<<b<<"j + "<<c<<"k";
}



};




int main(){
    vector v1(1,2,3),v2(4,5,6);
    vector v3;
float dotProduct = v1*v2;
cout<<"Vector dot product = "<<dotProduct;

cout<<"\n";
v3 = v1 ^ v2;
v3.display();

    return 0;
}