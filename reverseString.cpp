#include<iostream>
#include<string>
#include<stack>

using namespace std;

string reverseString(const string& s) {

    stack<char> charInString;

    for (char c : s) {
        charInString.push(c); 
    }
    string newReverseString;
    newReverseString.reserve(s.size());

    while (!charInString.empty()) {
        newReverseString += charInString.top();
        charInString.pop();
    }

    return newReverseString;
}

int main() {
   string result = reverseString("animal");
   cout << "Reverse string: " << result << endl;
   return 0;
}