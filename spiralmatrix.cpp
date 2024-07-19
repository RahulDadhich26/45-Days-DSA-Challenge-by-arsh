#include<bits/stdc++.h>
using namespace std ;
vector<vector<int>> spiralOrder(vector<vector<int>>& matrix) {
        vector<vector<int>>output;
        int n = matrix.size();
        int m = matrix[0].size();
        int top = 0;
        int bottom = n-1;
        int left = 0;
        int right = m-1;
        while(top <= bottom && left <= right){
            for(int i=left;i<=right;i++){
                output.push_back({matrix[top][i]});
            }
            top++;
            for(int i=top;i<=bottom;i++){
                output.push_back({matrix[i][right]});
            }
            right--;
            if(top <= bottom){
                for(int i=right;i>=left;i--){
                    output.push_back({matrix[bottom][i]});
                }
                bottom--;
            }
            if(left <= right){
                for(int i=bottom;i>=top;i--){
                    output.push_back({matrix[i][left]});
                }
                left++;
            }
        }
        return output;
    }
    int main(){
        vector<vector<int>>matrix = {{1,2,3},{4,5,6},{7,8,9}};
        vector<vector<int>>output = spiralOrder(matrix);
        for(auto it : output){
            for(auto i : it){
                cout<<i<<" ";
            }
            
        }
        return 0;
    }