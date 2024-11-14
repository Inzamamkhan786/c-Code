#include<iostream>
#include<fstream>

using namespace std;


int main(){
    ofstream fout;
    string line;

    fout.open("sample.txt");
    if(!fout.is_open()){
        cout<<"Error in opening the file";
        return 1;
    }

    while(true){
        getline(cin,line);
        if(line=="-1"){
            break;
        }
        fout<<line<<endl;
    }
    fout.close();

    // Now reading the file which i was previously created;

    ifstream fin;
    fin.open("sample.txt");
    
    if(!fin.is_open()){
        cout<<"ERROR in opening the txt file";
        return 1;
    }

    while(getline(fin,line)){
        cout<<line<<endl;
    }

    fin.close();



    return 0;
}