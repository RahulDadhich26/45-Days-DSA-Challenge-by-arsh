#include<bits/stdc++.h>
using namespace std ;
int maxArea(vector<int>& height) {
        int n = height.size();
        int i = 0;
        int j = n-1;
        int max_area = 0;
        while(i<j){
            int h = min(height[i],height[j]);
            int w = j-i;
            max_area = max(max_area,h*w);
            if(height[i] < height[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return max_area;
    }
int main(){
    vector<int>height = {1,8,6,2,5,4,8,3,7};
    cout<<maxArea(height);
    return 0;
}