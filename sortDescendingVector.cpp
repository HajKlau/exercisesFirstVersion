#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void sortDescending(vector<int>& nums) {

    sort(nums.begin(), nums.end(), greater<int>());
}

int main() {
    vector<int> myVector = {5,1,6,2,4};
    sortDescending(myVector);
    
    for (int num : myVector) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
