#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<vector<int>> nums;

    nums = { {6,5,4},{1,2,5},{7,9,7} };
    int size = nums[0].size();
    int sumupper = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i ; j < size; j++)
        {
            //cout << nums[i][j] << endl;
            sumupper = sumupper + nums[i][j];
        }
        
    }
    int sumlower = 0;

    for (int i = size-1; i >= 0; i--)
    {
        for (int j = i; j >= 0; j--)
        {
            //cout << nums[i][j] << endl;
            sumlower = sumlower + nums[i][j];
        }
    }

    cout << sumupper << endl;
    cout << sumlower << endl;
}