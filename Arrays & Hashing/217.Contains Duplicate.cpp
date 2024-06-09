#include <algorithm>
#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
/*Given an integer array nums, return true if any value appears at least twice in the array,
and return false if every element is distinct.
*/ 
class Solution {
public:
    bool containsDuplicate(vector<int>&nums) {
       sort(nums.begin(), nums.end()); /// nlog n 
        for(int i = 0;i<nums.size()-1;i++) // n
            if(nums[i] == nums[i+1])
            return true;
        return false;
    }
};