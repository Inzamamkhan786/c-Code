#include<iostream>
using namespace std;

class item{
    int number;
    float cost;
    public:
    void getData(int a, float b);
    void putData();
};

void item::getData(int a, float b){
    number=a;
    cost=b;
}

void item:: putData(){
    cout<<"Number : "<<number<<"\n";
    cout<<"Cost : "<<cost<<"\n";
}


int main(){
    item x;
    x.getData(773,225.5);
    x.putData();
    cout<<"\n";
    item y;
    y.getData(786,99.99);
    y.putData();

    return 0;
}