#include<bits/stdc++.h>
using namespace std ;
int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int>mp;
        int sum = 0;
        int count = 0;
        for(int i=0;i<n;i++){
            sum += nums[i];
            if(sum == k){
                count++;
            }
            if(mp.find(sum-k) != mp.end()){
                count += mp[sum-k];
            }
            mp[sum]++;
        }
        return count;
    }
int main(){
    vector<int>nums = {1,1,1};
    int k = 2;
    cout<<subarraySum(nums,k);
    return 0;
}