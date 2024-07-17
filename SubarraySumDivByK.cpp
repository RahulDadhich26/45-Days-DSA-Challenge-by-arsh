#include<bits/stdc++.h>
using namespace std ;
int subarraysDivByK(vector<int>& A, int K) {
        int n = A.size();
        vector<int>prefix(n+1,0);
        for(int i=1;i<=n;i++){
            prefix[i] = prefix[i-1] + A[i-1];
        }
        vector<int>count(K,0);
        for(int i=0;i<=n;i++){
            count[(prefix[i]%K + K)%K]++;
        }
        int ans = 0;
        for(int i=0;i<K;i++){
            ans += (count[i]*(count[i]-1))/2;
        }
        return ans;
    }
int main(){
    vector<int>A = {4,5,0,-2,-3,1};
    int K = 5;
    cout<<subarraysDivByK(A,K);
    return 0;
}
