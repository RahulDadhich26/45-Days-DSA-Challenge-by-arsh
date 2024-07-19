#include<bits/stdc++.h>
using namespace std ;
vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int>>s;
        sort(nums.begin(),nums.end());
        vector<vector<int>> output;
        int n = nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int k = j+1;
                int l = n-1;
                while(k<l){
                    if((nums[i]+nums[j]+nums[k]+nums[l]) == target){
                        s.insert({nums[i],nums[j],nums[k],nums[l]});
                        k++;
                        l--;
                    }
                    else if((nums[i]+nums[j]+nums[k]+nums[l]) < target){
                        k++;
                    }
                    else{
                        l--;
                    }
                }
            }
        }
        for(auto it : s){
            output.push_back(it);
        }
        return output;
    }
    int main(){
        vector<int>nums = {1,0,-1,0,-2,2};
        vector<vector<int>>output = fourSum(nums,0);
        for(auto it : output){
            for(auto i : it){
                cout<<i<<" ";
            }
            cout<<endl;
        }
        return 0;
    }