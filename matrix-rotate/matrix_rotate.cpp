#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<vector<int>> nums;

    nums = { {1,2,3}, {4,5,6}, {7,8,9} };
    int size = nums[0].size();

    // Transpose the matrix
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(nums[i][j], nums[j][i]);
        }
    }

    // swap 0th row to nth row, perform same other rows

    for (int i = 0; i < size/2; i++)
    {
        for (int j = 0; j < size; j++)
        {
            swap(nums[i][j], nums[size - 1 - i][j]);
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