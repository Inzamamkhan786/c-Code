#include <iostream>
#include <fstream>

using namespace std;

int main() {
    // Creation of ofstream class object for writing
    ofstream source;
    string line;

    // Open file for writing (in append mode if required)
    source.open("source.txt");
    if (!source.is_open()) {
        cout << "Error opening file for writing" << endl;
        return 1;
    }

    // Write input lines to the file
    while (true) {
        getline(cin, line);

        // Press -1 to exit
        if (line == "-1")
            break;

        source << line << endl;
    }

    // Close the file after writing
    source.close();





   ofstream destination;

    // Open file for writing (in append mode if required)
    destination.open("destination.txt",ios::app);
    if (!destination.is_open()) {
        cout << "Error opening file for writing" << endl;
        return 1;
    }

  



    // Creation of ifstream class object for reading
    ifstream inSource;
    inSource.open("source.txt");
    if (!inSource.is_open()) {
        cout << "Error opening file for reading" << endl;
        return 1;
    }

    // Read and print lines from the file
    while (getline(inSource, line)) {
        destination << line << endl;
    }

    // Close the file after reading
    inSource.close();
    destination.close();
    cout<<"Content successfully copied from source to destination";


    return 0;
}
