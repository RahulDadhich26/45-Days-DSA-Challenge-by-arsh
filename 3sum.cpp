#include<bits/stdc++.h>
using namespace std ;
  vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>>s;
        sort(nums.begin(),nums.end());
        int target =0;
        vector<vector<int>> output;
        int n = nums.size();
      
        for(int i=0;i < n;i++){
            int  j = i+1;
            int k= n-1;
            while(j<k){
                if((nums[i] + nums[j] + nums[k]) == target){
                    s.insert({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                }
                else if((nums[i]+nums[j]+nums[k]) < target){
                    j++;
                }
                else{
                    k--;
                }
            }
        }
        for(auto it : s){
            output.push_back(it);
        }
        return output;
    }
int main(){
    vector<int>nums = {-1,0,1,2,-1,-4};
    vector<vector<int>>output = threeSum(nums);
    for(auto it : output){
        for(auto i : it){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}