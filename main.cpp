//	AlEmos
//	IDEaliner 2017
//	Second Programme on Windows

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	
	ifstream inFile;
    inFile.open("list.txt");

	// Check for errors
	if (inFile.fail()) {
        cerr << "Error" << endl;
        return 1;
	}

	string item;
	int count = 0;
	
	// Read me until the end
	
	cout << "Reading Genres" << endl;
		
    // What's the Genre
    while (!inFile.eof()) {
        inFile >> item;
        count++;
                if (item == "Rock") {
                        cout << "Gengre is " << item << endl;

    ofstream outFile;

    outFile.open("sample.txt");
    outFile << "Gengre is " << item << endl;


    outFile.close();
    cin.get();


    ifstream outFile2;
    outFile2.open("sample.txt");

    // What's the Saved Genre

        cout << item << " Saved to File." << endl;

    cout << "Press Enter to Exit..." << endl;

    outFile2.close();
                }
    }

    cin.get();
	
	return 0;
}

