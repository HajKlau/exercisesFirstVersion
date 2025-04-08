#include<iostream>
#include<unordered_map>

using namespace std;

int firstUniqueChar(const string& s) { //return index the first, non-repeatable character.

    unordered_map<char, int> charCounter;

    for (char c : s) {

        charCounter[c]++;
    }

    for (int i = 0; i < s.length(); i++ ) {
        if (charCounter[s[i]] == 1) {
            return i;
        }
    }
    return -1;
}

int main() {
    string newString = "accomodation";
    int result = firstUniqueChar(newString);
    if(result != -1) {
        cout << "First unique character in string '" << newString << "' has index: [" << result << "]" << endl;

    } else {
        cout << "No unique character found in string '" << newString << "'" << endl; 
    }
    return 0;
}