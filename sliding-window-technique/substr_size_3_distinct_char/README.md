# 1876. Substrings of Size Three with Distinct Characters

A string is good if there are no repeated characters.

Given a string s​​​​​, return the number of good substrings of length three in s​​​​​​.

Note that if there are multiple occurrences of the same substring, every occurrence should be counted.

A substring is a contiguous sequence of characters in a string.

## Example 1:
```
Input: s = "xyzzaz"
Output: 1
Explanation: There are 4 substrings of size 3: "xyz", "yzz", "zza", and "zaz". 
The only good substring of length 3 is "xyz".
```
## Example 2:
```
Input: s = "aababcabc"
Output: 4
Explanation: There are 7 substrings of size 3: "aab", "aba", "bab", "abc", "bca", "cab", and "abc".
The good substrings are "abc", "bca", "cab", and "abc".
```

Constraints:
1 <= s.length <= 100
s​​​​​​ consists of lowercase English letters.

# Answer

Clearly, we can identify that this is a sliding window technique as the question contains 3 characters substring.

Consider the string **aababcabc**

![image](https://github.com/smitesht/coding-tricks/assets/52151346/5d48d196-a44e-45d5-be8d-b34cd806bbd6)

We will use unordered_map to track the unique characters for the window.
If the count of the specific character is more than 1 then the windows is not good, skip for another window of characters and perform the same logic.

```c++
int countGoodSubstrings(string s)
{
    int count=0;

    if(s.length() < 3)
        return count;

    for(int left=0; left < s.length() - 2; left++)
    {
        unordered_map<char,int> window;
        bool isGood = true;

        for(int right=left; right < (left + 3); right++)
        {
            window[s[right]]++;

            if(window[s[right]] > 1)
            {
                isGood = false;
                break;
            }
                
        }

        if(isGood)
            count++;
    }

    return count;
}

int main()
{
    cout << countGoodSubstrings("x") << std::endl;     // Output: 0
    cout << countGoodSubstrings("xyzzaz") << std::endl;     // Output: 1
    cout << countGoodSubstrings("aababcabc") << std::endl;  // Output: 4
    cout << countGoodSubstrings("owuxoelszb") << std::endl; // Output: 8
    
    return 0;
}
```

