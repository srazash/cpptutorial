#include <fstream> // extra include needed: http://digital-madness.in/blog/2013/c-incomplete-type-and-cannot-be-defined/
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv) {

  ofstream outFile; // output file, to be written to
  ifstream inFile;  // input file, to be read from

  string writeText = "";
  string readText = "";

  const string fileName = "fileio.txt";

  outFile.open(fileName,
               ios_base::out | ios_base::trunc); // open to write or truncate
  if (outFile.is_open()) {                       // check if open, and if so;
    outFile << "Start of file\n";                // write to file
    cout << "Data to write: ";
    getline(cin, writeText);      // take use input
    outFile << writeText << endl; // write user input
    outFile.close();              // close file
  }

  inFile.open(fileName, ios_base::in); // open to read
  if (inFile.is_open()) {              // check if open, and if so;
    while (inFile.good()) {            // while file has readable lines
      getline(inFile, readText);       // read the line to readText
      cout << readText << endl;        // print the line from readText
    }
    inFile.close(); // close file
  }

  return 0;
}
