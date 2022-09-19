#include <iostream>
#include"bits/stdc++.h"
using namespace std;

int helper(vector<int>& nums, int index, int currentXor) {
        // return currentXor when all elements in nums are already considered
        if (index == nums.size()) return currentXor;
        
        // calculate sum of xor with current element
        int withElement = helper(nums, index + 1, currentXor ^ nums[index]);
        
        // calculate sum of xor without current element
        int withoutElement = helper(nums, index + 1, currentXor);
        
        // return sum of xors from recursion
        return withElement + withoutElement;
    }


int subsetXORSum(vector<int>& nums) {
        return helper(nums,0,0);
    }

int main() {
    vector<int> nums{5,1,6};
    int ans = subsetXORSum(nums);
    cout<<ans;
    return 0;
}