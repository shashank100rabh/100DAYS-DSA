//codingninja- equlibrium index
#include <bits/stdc++.h> 
int findEquilibriumIndex(vector<int> &arr) {
    // Write your code here.
    int n = arr.size();
    int total_sum = 0;
    int left_sum = 0;


    for (int i = 0; i < n; i++) {
        total_sum += arr[i];
    }

   
    for (int i = 0; i < n; i++) {
        total_sum -= arr[i]; 

        if (left_sum == total_sum) {
            return i;
        }

        left_sum += arr[i];
    }

   
    return -1;
}
