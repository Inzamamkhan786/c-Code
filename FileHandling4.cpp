#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream fout;
    fout.open("yoyo.txt");
    if(!fout.is_open()){
        cout<<"ERROR in opening the file";
        return 1;
    }
    
    fout.put('H');
    fout.put('E');
    fout.put('L');
    fout.put('L');
    fout.put('O');
    fout.close();
    //opening the file bt get ;

    ifstream fin;
    fin.open("yoyo.txt");
    if(!fin.is_open()){
        cout<<"ERROR in opening the file";
        return 1;
    }

    char ch;
    while(fin.get(ch)){
    cout<<ch;
    }
    fin.close();




    return 0;
}