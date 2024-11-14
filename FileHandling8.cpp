#include<iostream>
#include<fstream>
using namespace std;



int main(){

  ofstream source;
    string line;

    
    source.open("source.txt");
    if (!source.is_open()) {
        cout << "Error opening file for writing" << endl;
        return 1;
    }

    while (true){
        getline(cin, line);
        
        if (line == "-1"){
            break;
        }

        source << line << endl;
    }
    source.close();
    cout<<"File of source created successfully\n";


    ofstream destination;

    
    destination.open("destination.txt");
    if (!destination.is_open()) {
        cout << "Error opening file for writing" << endl;
        return 1;
    }




    string searchWord;
    string replaceWord;
    cout<<"Enter the word you want to search: ";
    cin>>searchWord;
    cout<<"\nEnter the replace word you want to replace with the search word: ";
    cin>>replaceWord;




 ifstream inSource;
   

    inSource.open("source.txt");
    if (!inSource.is_open()) {
        cout << "Error opening file for writing" << endl;
        return 1;
    }

while(inSource>>line){
    if(searchWord == line){
        destination<<line<<replaceWord<<endl;
    }else{
        destination<<line<<endl;
    }

}

inSource.close();
destination.close();


    return 0;
}