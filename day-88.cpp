//leetcode -4(median of two sorted array )
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());

        
        sort(nums1.begin(), nums1.end());

        double med = 0;
        int size = nums1.size();

      
        if (size % 2 == 0) {
            int id1 = (size / 2) - 1;
            int id2 = size / 2;
            med = (nums1[id1] + nums1[id2]) / 2.0;  
        }
     
        else {
            int id = size / 2;
            med = nums1[id];
        }

        return med;
    }
};
