#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    string str = "ab$#cd#ef";
    //string str = "a$bce";
    //string str = "Abcde#$";
    int i = 0, j = str.length()-1;

    while (i < j)
    {
        if (str[i] == '$' || str[i] == '#')
            i++;

        if (str[j] == '$' || str[j] == '#')
            j--;
        else
        {
            swap(str[i], str[j]);
            i++;
            j--;
        }
    }

    cout<<str<<endl;

}