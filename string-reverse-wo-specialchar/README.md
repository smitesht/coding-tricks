# Reverse a string without affecting special characters

Given a string, that contains a special character together with alphabets (‘a’ to ‘z’ and ‘A’ to ‘Z’), reverse the string in a way that special characters are not affected.

### Examples:

```
nput:   str = “a,b$c”
Output:  str = “c,b$a”
Explanation: Note that $ and , are not moved anywhere.  Only subsequence “abc” is reversed

Input:   str = “Ab,c,de!$”
Output:  str = “ed,c,bA!$”

```

### Answer

```
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

```
