#include <iostream>
#include <fstream>
using namespace std;

void removeWhitespace(const string& inputFile, const string& outputFile) {
    ifstream in(inputFile);
    ofstream out(outputFile);

    if (!in || !out) {
        cout << "Error opening files!\n";
        return;
    }

    char ch;
    while (in.get(ch)) {
        if (!isspace(ch)) { // Check if character is not a whitespace
            out.put(ch);
        }
    }

    in.close();
    out.close();
    cout << "File copied successfully without whitespaces!\n";
}

int main() {
    string sourceFile = "input.txt";
    string destinationFile = "output.txt";

    removeWhitespace(sourceFile, destinationFile);

    return 0;
}
