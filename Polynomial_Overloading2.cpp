#include<iostream>
using namespace std;

class polynomial{
int degree;
int* coeffecient;
public:

polynomial(int deg){
    degree = deg;
    coeffecient = new int[degree+1]();
}

~polynomial(){
    delete[] coeffecient; 
}


void setPolynomial(int power, int coeff){
    if(power<=degree){
        coeffecient[power] = coeff;
    }
}
int max(int a, int b){
    if(a>=b){
        return a;
    }else{
        return b;
    }
}


//operator overloading;
polynomial operator+(polynomial other){
    int maxDegree = max(degree,other.degree);
    polynomial result(maxDegree);
//loop for inserting the values in the result;
    for(int i=0; i<=maxDegree; i++){
        int thisCoeff,otherCoeff;
        if(i<=degree){
            thisCoeff = coeffecient[i];
        }else{
            thisCoeff = 0;
        }
        //similarly;
        if(i<=other.degree){
            otherCoeff = other.coeffecient[i]; 
        }else{
            otherCoeff = 0;
        }
        result.setPolynomial(i,thisCoeff+otherCoeff);

    }
return result;
}

void display(){
    for(int i = degree; i>=0; i--){
        cout<<coeffecient[i]<<"x^"<<i<<" + ";
    }
}



};



int main(){
    int degree1,degree2;
    cout<<"Enter the degree of first polynomial";
    cin>>degree1;
    polynomial p1(degree1);
    //adding elements in the first polynomial;
    for(int i=0; i<=degree1; i++){
        int coeff;
        cout<<"Coeffecient of x^"<<i<<" = ";
        cin>>coeff;
        p1.setPolynomial(i,coeff);
    }


    cout<<"Enter the degree of first polynomial";
    cin>>degree2;
    polynomial p2(degree2);
    //adding elements in the second polynomial;
    for(int i=0; i<=degree2; i++){
        int coeff;
        cout<<"Coeffecient of x^"<<i<<" = ";
        cin>>coeff;
        p2.setPolynomial(i,coeff);
    }

    polynomial result = p1 + p2;

    result.display();

    return 0;
}