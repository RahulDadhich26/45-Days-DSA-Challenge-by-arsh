// Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

// We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

// You must solve this problem without using the library's sort function.
#include<bits/stdc++.h>
#include<iostream>
using namespace std ;
void sortColors(vector<int>& A) {
    int n = A.size();
    int second = n - 1, zero = 0, i = 0;
    while (i <= second) {
        if (A[i] == 2) {
            swap(A[i], A[second--]);
        } else if (A[i] == 0) {
            swap(A[i], A[zero++]);
            i++;
        } else { // This handles the case for 1s.
            i++;
        }
    }
}
int main(){
    vector<int> A = {2,0,2,1,1,0};
    sortColors(A);
    for(int i=0;i<A.size();i++){
        cout<<A[i]<<" ";
    }
    return 0;
    }
