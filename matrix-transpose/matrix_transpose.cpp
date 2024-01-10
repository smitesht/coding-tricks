#include <iostream>
#include <vector>

using namespace std;


// Transpose of the matrix
int main()
{
    vector<vector<int>> nums;

    nums = { {1,1,1,1}, {2,2,2,2}, {3,3,3,3}, {4,4,4,4} };
    int size = nums[0].size();
    
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < i; j++)
        {
            // Swap 
            int temp = nums[i][j];
            nums[i][j] = nums[j][i];
            nums[j][i] = temp;            
        }

    }

    // Output
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << nums[i][j];
        }
        cout << endl;
    }
   
}
