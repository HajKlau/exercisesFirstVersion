#include <iostream>
#include <vector>
using namespace std;

int sumVector(const vector<int>& nums) {
    int sum = 0;
    
    for (int num : nums) {
        sum += num;
    }
    return sum;
}

int main() {
    
    vector<int> myVector = {1, 2, 3, 4, 5};
    int result = sumVector(myVector);
    cout << "Sum of vector: " << result << endl;
}