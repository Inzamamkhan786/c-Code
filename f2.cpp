#include<stdio.h>
#include<fstream>

using namespace std;

int main(){
ifstream fin;
string line
fin.open("yoyo.txt");
if(!fin.is_open()){
    cout<<"!!Error in opening the file";
    return 1;
}

while(getline(fin,line)){
    cout<<line<<endl;
}

fin.close();



    return 0;
}