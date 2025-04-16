class Solution {
public:
    long long countGood(vector<int>& nums, int k) {
        long long count=0;
        unordered_map<int,int> mpp;
        for(int i=0,left=0;i<nums.size();i++){
            k -=mpp[nums[i]]++;
            while(k<=0) k+= --mpp[nums[left++]];
            count+=left;
        }
        return count;
    }
};