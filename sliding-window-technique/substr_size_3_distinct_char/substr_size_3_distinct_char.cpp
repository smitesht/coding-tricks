#include <iostream>
#include <unordered_map>
#include <string>

using std::cout;
using std::unordered_map;
using std::string;

/*
A string is good if there are no repeated characters.

Given a string s​​​​​, return the number of good substrings of length three in s​​​​​​.

Note that if there are multiple occurrences of the same substring, every occurrence should be counted.

A substring is a contiguous sequence of characters in a string.

 

Example 1:

Input: s = "xyzzaz"
Output: 1
Explanation: There are 4 substrings of size 3: "xyz", "yzz", "zza", and "zaz". 
The only good substring of length 3 is "xyz".
Example 2:

Input: s = "aababcabc"
Output: 4
Explanation: There are 7 substrings of size 3: "aab", "aba", "bab", "abc", "bca", "cab", and "abc".
The good substrings are "abc", "bca", "cab", and "abc".
*/

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