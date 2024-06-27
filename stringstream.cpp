#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main() {
    string s = "dog cat cat dog";

    // Create a stringstream object with the string s
    stringstream ss(s);

    string word;

    // Extract words from stringstream using operator >>
    while (ss >> word) {
        cout << "Word: " << word << endl;
    }

    return 0;
}
