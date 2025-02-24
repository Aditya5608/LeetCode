class Solution {
public:
    int reversePairs(vector<int>& nums) {
        int pair=0;
       for(int i=0;i<nums.size();i++){
        for(int j=0;j<nums.size();j++){
            if(i<j && nums[i]>2*nums[j]){
                pair++;
            }
        }
        }
        return pair;
    }
};