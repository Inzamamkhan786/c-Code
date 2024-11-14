#include <iostream>
#include <fstream>

using namespace std;

int main() {
    // Creation of ofstream class object for writing
    ofstream fout;
    string line;

    // Open file for writing (in append mode if required)
    fout.open("yoyo.txt");
    if (!fout.is_open()) {
        cout << "Error opening file for writing" << endl;
        return 1;
    }

    // Write input lines to the file
    while (true) {
        getline(cin, line);

        // Press -1 to exit
        if (line == "-1")
            break;

        fout << line << endl;
    }

    // Close the file after writing
    fout.close();

    // Creation of ifstream class object for reading
    ifstream fin;
    fin.open("yoyo.txt");
    if (!fin.is_open()) {
        cout << "Error opening file for reading" << endl;
        return 1;
    }

    // Read and print lines from the file
    while (getline(fin, line)) {
        cout << line << endl;
    }

    // Close the file after reading
    fin.close();

    return 0;
}
