#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;

// Custom hash function to generate a hexadecimal hash from a string
string customHexHash(const string& str) {
    unsigned int hash = 0;
    const int prime = 31;

    for (int i = 0; i < str.length(); i++) {
        hash = (hash * prime) ^ static_cast<unsigned int>(str[i]); // XOR with ASCII
    }

    stringstream ss;
    ss << hex << setw(8) << setfill('0') << hash;
    return ss.str();
}

int main() {
    string input;
    cout << "Convert a string to hash: ";
    cin >> input;

    string hash = customHexHash(input);
    cout << "Custom hash of \"" << input << "\": \n\t- #" << hash << endl;

    return 0;
}
