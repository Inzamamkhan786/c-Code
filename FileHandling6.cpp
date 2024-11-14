#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // ofstream outFile;
    // string line;

    // // Create and open the output file
    // outFile.open("Document.txt");
    // if (!outFile.is_open()) {
    //     cout << "ERROR in opening the file";
    //     return 1;
    // }

    // // Input lines from the user until "-1" is entered
    // while (true) {
    //     getline(cin, line);
    //     if (line == "-1") {
    //         break;
    //     }
    //     outFile << line << endl; // Write each line to the file
    // }
    // outFile.close(); // Close the output file

    ifstream inFile;
    string ch; // Corrected: added the missing semicolon
    inFile.open("Document.txt");
    if (!inFile.is_open()) {
        cout << "ERROR in opening the file";
        return 1;
    }

    int totalCharacters = 0;

    // Read lines from the file and calculate total characters
    while (getline(inFile, ch)) {
        totalCharacters += ch.length(); // Count characters in the current line
        cout << ch << endl; // Display the line read
    }

    inFile.close(); // Close the input file
    cout << "Successfully run \n\n";
    cout << "Total characters in the file: " << totalCharacters << endl; // Display total characters

    return 0;
}
