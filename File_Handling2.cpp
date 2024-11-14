#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;



int main(){
    ofstream fout;
    string line;
    fout.open("NewFile.txt");
    if(!fout.is_open()){
        cout<<"ERROR in opening the file";
        return 1;
    }

    int i = 0;

    while(i<5){
        getline(cin,line);
        fout<<line<<endl;
        i++;
    }

    fout.close();


    return 0;
}