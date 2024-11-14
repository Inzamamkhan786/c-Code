#include<iostream>
#include<fstream>
using namespace std;


int main(){
    ofstream fout;
    string line;

    ///opening of file ;
    fout.open("sample.txt");
    while(fout){
        getline(cin,line);

        if(line == -1)
            break;
            
    //writing content in the file;
    fout<<line<<endl;
    }
    cout<<"File created successfully ";
        fout.close();



    return 0;
}