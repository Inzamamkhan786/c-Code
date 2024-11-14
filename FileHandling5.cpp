#include<iostream>
#include<fstream>
using namespace std;
class student{
char name[50];
int age;
float marks;
public:

void setData(){
     cout<<"Enter the name : ";
     cin>>name;
     cout<<"Enter age : ";
     cin>>age;
     cout<<"Enter the marks : ";
     cin>>marks;
}

void display(){
    cout<<"Name = "<<name;
    cout<<"Age = "<<age;
    cout<<"Marks = "<<marks;
}

void writeToFile(ofstream &outFile)const{
    outFile.write(reinterpret_cast<const char*>(this), sizeof(*this));
}

void readFromFile(ifstream &inFile){
    inFile.read(reinterpret_cast<char*>(this),sizeof(*this));
}




};



int main(){
    student s1,s2;
    s1.setData();
    ofstream outFile("studentDetails.txt", ios::binary);
    if(!outFile.is_open()){
        cout<<"ERROR in opening the file";
        return 1;
    }

s1.writeToFile(outFile);
outFile.close();
ifstream inFile("studentDetails.txt", ios::binary);
 if(!inFile.is_open()){
        cout<<"ERROR in opening the file";
        return 1;
    }

    s2.readFromFile(inFile);
    inFile.close();
cout<<"\n\n\n";
s2.display();

    return 0;
}