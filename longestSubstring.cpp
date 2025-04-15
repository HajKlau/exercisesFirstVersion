#include<iostream>
#include<string>
#include<vector>

using namespace std;

int lengthOfLongestSubstring(string s) {

    vector<char> substrVector;
    int substrLength = 0;

    for (char singleChar : s) {
        for ( int i = 0; i < s.size() - 1; ++i) {
            if (substrVector.empty()) {
                substrVector.push_back(singleChar);
                //cout << substrVector[i] << " is " << singleChar << endl;
                
            }
            else if (singleChar != substrVector[i]) {
                substrVector.push_back(singleChar);

            } else { 
                cout << "dupa3" << endl;
                break;

            }

        }

        for (int i = 0; i < substrVector.size() - 1; i++) {
            cout << substrVector[i] << endl;

        }


        if (substrVector.size() > substrLength) {
            substrLength = substrVector.size();
        }

        substrVector.clear();
        cout << "dupa2" << endl;
    }

    return substrLength;

}

int main() {
    
    string myString = "abcabbb";
    int result = lengthOfLongestSubstring(myString);
    
    cout << "And the length of the longest substring in given string " << myString << " is: " << result << endl;

    return 0;
}