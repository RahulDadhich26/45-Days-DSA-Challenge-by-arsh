#include<bits/stdc++.h>
using namespace std ;
bool canjump(vector<int>&nums){
    int n = nums.size() ;
    int maxindex =0 ;
    for(int i=0;i<n;i++){
        if(i > maxindex) return false ;
        maxindex = max(maxindex ,nums[i] + i) ;
    }
    return true;
}
int main(){
    vector<int>nums = {2,3,1,1,4};
    cout<<canjump(nums);
    return 0;
}