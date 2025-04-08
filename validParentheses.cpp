#include<iostream>
#include<stack>
#include<string>

using namespace std;

bool isValid(string s) {
    stack<char> st;

    for (char c : s) {
        if (c == '{' || c == '[' || c == '(') {
            st.push(c);
        } else {
            if (st.empty()) return false; // nic do dopasowania!
            
            if ((c == '}' && st.top() != '{') ||
                (c == ']' && st.top() != '[') ||
                (c == ')' && st.top() != '(')) {
                return false;
            }

            st.pop();
        }
    }

    return st.empty();
}

int main() {
    string newString = "(){}[]";
    bool result = isValid(newString);
    cout << (result ? "true" : "false") << endl; 
    return 0;
}
