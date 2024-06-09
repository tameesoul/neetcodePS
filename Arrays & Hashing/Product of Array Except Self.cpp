#include <algorithm>
#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

/*
Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
*/
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> pre(n);
        vector<int> pos(n);
        pre[0] = 1;
        for (int i = 1; i < n; i++) {
            pre[i] = pre[i - 1]*nums[i-1]; 
        }
        
        pos[n-1] =1;
        for (int i = n - 2; i >= 0; i--) {
            pos[i] = pos[i + 1] * nums[i+1];
        }

        vector<int>ans(n);
        for(int i =0;i<n;i++)
        {
            ans[i] = pre[i] * pos[i];
        }

        return ans;
    }
};