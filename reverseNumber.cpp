#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void reverseNumber(const vector<int>& v ) {
    for (auto i = v.rbegin(); i != v.rend(); ++i) {
        cout << *i << " ";
    }
    cout << endl;

}

int main() {

    vector<int> myVector = {10, 20, 30, 40};
    cout << "Reverse number: ";
    reverseNumber(myVector);
    return 0;
}