//leetcode -41(first missing positive)
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        map<int,int> mp;
        for(int i=1;i<=nums.size()+1;i++){
            mp[i]=0;
        }
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto it:mp){
            if(it.second==0) return it.first;
        }
        if(nums.size()==1){
            if(nums[0]>0) return nums[0]+1;
            else if(nums[0]<0) return 1;
        }
        return -1;
    }
};
