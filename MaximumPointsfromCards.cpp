#include<bits/stdc++.h>
using namespace std ;
int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int sum = 0;
        // window making for the k cards from the end.
        for(int i=0;i<k;i++){
            sum += cardPoints[i];
        }
        
        int maxSum = sum;
        for(int i=0;i<k;i++){
            sum -= cardPoints[k-i-1];
            sum += cardPoints[n-i-1];
            maxSum = max(maxSum,sum);
        }
        return maxSum;
    }
    int main(){
        vector<int>cardPoints = {1,2,3,4,5,6,1};
        int k = 3;
        cout<<maxScore(cardPoints,k);
        return 0;
    }