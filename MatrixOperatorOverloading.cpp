#include<iostream>
using namespace std;

class Matrix{
int matrix[2][2];

public:

Matrix(){
    matrix[0][0] = 0;
    matrix[0][1] = 0;
    matrix[1][0] = 0;
    matrix[1][1] = 0;
}

Matrix(int a, int b, int c, int d){
    //constructor;
    matrix[0][0] = a;
    matrix[0][1] = b;
    matrix[1][0] = c;
    matrix[1][1] = d;
}

Matrix operator +(Matrix m){
return Matrix((matrix[0][0]+m.matrix[0][0]),(matrix[0][1]+m.matrix[0][1]),(matrix[1][0]+m.matrix[1][0]),(matrix[1][1]+m.matrix[1][1]));
}

Matrix operator *(Matrix m){
    return Matrix(((matrix[0][0]*m.matrix[0][0])+(matrix[0][1]*m.matrix[1][0])),((matrix[0][0]*matrix[0][1])+(matrix[0][1]*matrix[1][1])),((matrix[1][0]*matrix[0][0])+(matrix[1][1]*matrix[1][0])),((matrix[1][0]*matrix[0][1])+(matrix[1][1]*matrix[1][1])));
}



void display(){
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }
}


};




int main(){
        Matrix m1(1,2,3,4),m2(2,0,1,2),m3;
    cout<<"\nMatrix1\n";
    m1.display();
    cout<<"\nMatrix2\n";
    m2.display();

    m3 = m1+m2;
    cout<<"\nMatrix3\n";
    m3.display();

    m3 = m1*m2;
    cout<<"\nMatrix Multiplication\n";
    m3.display();


    return 0;
}