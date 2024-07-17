#include<bits/stdc++.h>
using namespace std;
// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.
  vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i] + nums[j] == target) return {i,j};
            }
    
        }
        return {};
    }
int main(){
    vector<int>nums = {2,7,5,6,3,4,11,15};
    int target = 7 ;
    vector<int>result = twoSum(nums,target);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    return 0;
}