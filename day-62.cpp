//codingninja/leetcode 665-  Non-Decreasing Array
#include <bits/stdc++.h> 
bool isPossible(int *arr, int n)
{
    //  Write your code here.
    int vol = 0;
    for(int i =1; i<n; i++){
        if (arr[i-1]>arr[i]){
            if(vol==1){
                return false;
            }
            vol++;

            if(i<2 || arr[i-2] <= arr[i])
            arr[i-1]==arr[i];
            else
            arr[i]=arr[i-1];
        }
    }
    return true;
}
