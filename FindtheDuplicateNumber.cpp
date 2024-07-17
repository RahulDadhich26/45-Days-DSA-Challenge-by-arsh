// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

// There is only one repeated number in nums, return this repeated number.

// You must solve the problem without modifying the array nums and uses only constant extra space.

#include<bits/stdc++.h>
using namespace std;

    int findDuplicate(vector<int>& nums) {
        int ind = 0;
		
		// sort the vector
        sort(nums.begin(),nums.end());
        for(int i = 0; i < nums.size() - 1; i++)
        {
			// if two consecutive elements are equal
			// you have find a duplicate
			// break the loop
            if(nums[i] == nums[i+1])
            {
                ind = nums[i];
                break;
            }
        }
        // return duplicate value
        return ind;
    }
	// for github repository link go to my profile.
int main(){
    vector<int> nums = {1,3,4,2,2};
    cout<<findDuplicate(nums);
    return 0;
}