#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int findSecondHighestNumber (vector<int>& vec) {

    if (vec.size() < 2) {
        cout << "Error: The vector is too small" << endl;
        exit(1);
    }

    sort(vec.begin(), vec.end());

    for(int i = vec.size() - 2; i >= 0; --i) {
        if (vec[i] != vec[vec.size() - 1]) {
            return vec[i];
        }
    } 

    return -1;
}

int main() {
    
    vector<int> myVector = {12, 13};
    int result = findSecondHighestNumber(myVector);
    cout << "The second highest value is: " << result << endl;
    return 0;
}