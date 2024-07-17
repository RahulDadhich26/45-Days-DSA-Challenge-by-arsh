#include<bits/stdc++.h>
using namespace std ;
vector<int> findDuplicates(vector<int>& nums) {
       unordered_map<int,int>mpp;
        vector<int>ans ;
        for(auto i : nums){
            if(mpp[i] == 1) ans.push_back(i);
            else mpp[i]++;
        }
        return ans ;
    }               
int main(){
    vector<int>nums = {4,3,2,7,8,2,3,1};
    vector<int>ans = findDuplicates(nums);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}