#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

bool hasDuplicates(const vector<int>& nums) {

    unordered_set<int> newNums;

    for (int num : nums) {
        if (newNums.count(num)) {
            return true;
        } else {
            newNums.insert(num);
        }
    }
    return false;
}

int main() {
        cout << std::boolalpha;
        vector<int> myVector = {1, 2, 3, 4, 2, 8};
        bool result = hasDuplicates(myVector);
        cout << "If vector has duplicates?: " << result << endl;
        return 0;
    }
