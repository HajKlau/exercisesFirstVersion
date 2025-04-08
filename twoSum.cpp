#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

vector<int> twoSum(const vector<int>& nums, int target) {

    unordered_map<int, int> numberToIndex;

    for (int i = 0; i < nums.size(); i++) {

        int currentNumber = nums[i];
        int complement = target - currentNumber;

        if (numberToIndex.count(complement)) {
            return {numberToIndex[complement], i};
        } else {
            numberToIndex[currentNumber] = i;
        }
    }
    return {};
}

int main() {

    vector<int> myVector = {1, 2, 3, 4, 5};
    int myTargetNumber = 3;
    vector<int> result = twoSum(myVector, myTargetNumber);
    if (!result.empty()) {
        cout << "Indices: [" << result[0] << "], [" << result[1] << "] " << endl;
    } else {
        cout << "No solution found" << endl;
    }
    return 0;

    }
    

    


