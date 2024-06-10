#include <algorithm>
#include <iostream>
#include<unordered_map>
#include <vector>
#include <numeric>
using namespace std;

/*

Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

 
*/

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> hash_table;
        std::vector<int> result;
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            if (hash_table.find(complement) != hash_table.end()) {
                result.push_back(hash_table[complement]);
                result.push_back(i);
                return result;
            }
            hash_table[nums[i]] = i;
        }

        return result;
    }
};
