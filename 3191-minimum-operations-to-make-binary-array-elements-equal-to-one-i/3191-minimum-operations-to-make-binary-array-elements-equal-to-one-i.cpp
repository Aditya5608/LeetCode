class Solution {
public:
    int minOperations(vector<int>& nums) {
        int flip=0;
        int size = nums.size();
        for(int i=0;i<size - 2;i++){
            if(nums[i]==0){
                nums[i] = 1 - nums[i];
                nums[i + 1]  = 1 - nums[i+1];
                nums[i + 2] = 1 - nums[i+2];
                flip++;
            }

        }

        if(nums[size - 1] == 0 || nums[size - 2] == 0){
            return -1;
        }

        return flip;
    }
};