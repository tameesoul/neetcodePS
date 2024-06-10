#include <algorithm>
#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

//An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

// nlogn
class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        if(s==t)
        {
            return true;
        }
        return false;
    }
};