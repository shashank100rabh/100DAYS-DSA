// coding ninja-colsest sum
#include <bits/stdc++.h>
using namespace std;

int closest3Sum(vector<int> &arr, int n, int target) {
    
    sort(arr.begin(), arr.end());

   
    int closestSum = INT_MAX;
    int minDiff = INT_MAX;

    
    for (int i = 0; i < n - 2; ++i) {
        
        int left = i + 1;
        int right = n - 1;

        
        while (left < right) {
            int currentSum = arr[i] + arr[left] + arr[right];
            int currentDiff = abs(currentSum - target);

            
            if (currentDiff < minDiff || (currentDiff == minDiff && currentSum < closestSum)) {
                closestSum = currentSum;
                minDiff = currentDiff;
            }

            
            if (currentSum < target) {
                ++left;
            } else {
                --right; 
            }
        }
    }

    return closestSum;
}


