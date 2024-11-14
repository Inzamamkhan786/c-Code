#include<iostream>
#include<fstream>
using namespace std;

int main(){
fstream fin;
string line;
fin.open("NewFile.txt");

if(!fin.is_open()){
    cout<<"ERROR in opening the file";
    return 1;
}

while(getline(fin,line)){
    cout<<line<<endl;
}
fin.close();
cout<<"Successfully opened the file";

    return 0;
}