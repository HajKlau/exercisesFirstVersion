#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

int numberOfOperations(vector<int>& numbers) 
{
   unordered_set<int> setForSizeComparison;
   int operationsNumber = 0;

    while (true)
    {
        setForSizeComparison.clear();
        for (int numbersInVector : numbers) 
        {
            setForSizeComparison.insert(numbersInVector);
        }

        if (setForSizeComparison.size() == numbers.size() || numbers.empty())
        {
            break;
        }

        int elementsToRemove = min(3, (int)numbers.size());
        numbers.erase(numbers.begin(), numbers.begin() + elementsToRemove);
        operationsNumber++;

    }
    
cout << endl;
return operationsNumber;

}


int main() 
{
    vector<int> myVector = {2,2,4,7,1,4,8,0,0,5,6,8,9,3,8,8,8,1,2,7};
    int result = numberOfOperations(myVector);
    cout << "Minimum numbers of operations to make elements in array distinct: " << result << endl;
    return 0;

}

/* 
edge-case:
-empty vector
-every elements of vector is unique
-every elements in vector are the same
-vector is shorter than three elements

Time Complexity: O(n^2)
Space Complexity: O(n)
*/