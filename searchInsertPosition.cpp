#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

int searchInsert(vector<int>& nums, int target) {

   int left = 0;
   int right = nums.size() - 1;

   while (left <= right) {
        int mid = left + (right - left) / 2; 

        if(nums[mid] == target) {
            return mid;
        } 
        else if (target < nums[mid]) {
            right = mid - 1;
        } 
        else {
            left = mid + 1;
        }

        }return left;
    }


int main() {
    int mytargetValue = 3;
    vector<int> myVector = {1, 2, 4};
    int result = searchInsert(myVector, mytargetValue);
    cout << result;
}