#include<bits/stdc++.h>
using namespace std ;
vector<vector<int>> uniquePerms(vector<int> &arr ,int n) {
    sort(begin(arr),end(arr));
    vector<vector<int>>output ;
    do{
        output.push_back(arr);
    }while(next_permutation(begin(arr),end(arr)));
    return output;
}
int main(){
    vector<int>arr = {1,2,3};
    vector<vector<int>>output = uniquePerms(arr,arr.size());
    for(auto it : output){
        for(auto i : it){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}