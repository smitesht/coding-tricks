# Rotate by 90 degree

Given a square matrix of size N x N. The task is to rotate it by 90 degrees in anti-clockwise direction without using any extra space.

Example 1:

```
Input:
N = 3
matrix[][] = {{1, 2, 3},
              {4, 5, 6}
              {7, 8, 9}}
Output:
Rotated Matrix:
3 6 9
2 5 8
1 4 7

```

Example 2:

```
Input:
N = 2
matrix[][] = {{1, 2},
              {3, 4}}
Output:
Rotated Matrix:
2 4
1 3

```
## Answer

![image](https://github.com/smitesht/coding-tricks/assets/52151346/5d7affd5-362d-4156-93a4-fd3e9271b08b)

```
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
```

