#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
#include<algorithm>

using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> mp;

    for (const string& s : strs) {
        string word = s;
        sort(word.begin(), word.end());
        mp[word].push_back(s);
    }

    vector<vector<string>> result;
    for (const auto& pair : mp) {
        result.push_back(pair.second);
    }

    return result;
}

int main() {
    vector<string> myString = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> grouped = groupAnagrams(myString);
    cout << "Grouped anagrams: " << endl;
    for (const auto& group : grouped) {
        cout << "[ ";
        for (const string& word : group) {
            cout << word << " ";
        }
        cout << "]" << endl;
    }
    return 0;
}