// leetcode ques.-26  Remove duplicate from sorted array


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0){
            return 0;
        }
        int curr = nums[0]; // curr - current --> current 0 par hai
        int count = 1; //count ka value 1 hai
        for (int i = 0; i< nums.size(); i++){
            if (curr == nums[i]){
                continue;
            }
            else{
                nums[count]=nums[i];
                curr = nums[i];
                count++;
            }
        }
      return count;   
    }
};
