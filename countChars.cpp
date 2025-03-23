#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

unordered_map<char, int> countChar(const string& s) {

    unordered_map<char, int> counter;

    for (char i : s) {
        counter[i]++;
    }

    return counter;
}

void printCounterChar(const unordered_map<char, int>& counter) {

    for (const auto& pair : counter) {
        cout << "'" << pair.first << "' : " << pair.second << ", ";

    }
}

int main() {
    
    string myString = "orange";
    unordered_map<char, int> result = countChar(myString);
    cout << "Counted word characters: " << myString << endl;
    printCounterChar(result);
    cout << endl;

}