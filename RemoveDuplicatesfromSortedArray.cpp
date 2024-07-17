// Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same. Then return the number of unique elements in nums.
#include<bits/stdc++.h>
using namespace std;
 int removeDuplicates(vector<int>& nums) {
        int i = 1 ;
        for(int j =1 ;j<nums.size();j++){
            if(nums[i]!=nums[j]) i++;
            nums[i] = nums[j] ;
        }
        return i;
    }
    int main(){
        vector<int> nums = {1,1,2};
        cout<<removeDuplicates(nums);
        return 0;
    }