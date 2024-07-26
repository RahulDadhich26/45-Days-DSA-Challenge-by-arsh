#include<bits/stdc++.h>
using namespace std ;
int majorityElement(vector<int>& nums) {
        int count = 0;
        int candidate = 0;
        for(int i=0;i<nums.size();i++){
            if(count == 0){
                candidate = nums[i];
            }
            if(nums[i] == candidate){
                count++;
            }
            else{
                count--;
            }
        }
        return candidate;
    }
    int main(){
        vector<int>nums = {2,1,1,1,2};
        cout<<majorityElement(nums);
        return 0;
    }