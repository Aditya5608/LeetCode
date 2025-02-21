class Solution {
// public:
//     int splitArray(vector<int>& nums, int k) {
         
        //  int sum=0;
        //  int maxi=INT_MIN;
        //  for(int i=0;i<nums.size();i++){
        //    sum= nums[i]+nums[i+1];
        //    maxi=max(maxi,sum);
        //  }
        //  return maxi;
       
    bool isValid(vector<int>& nums, int k, int mid) {
        int subarrays = 1, currSum = 0;
        for (int num : nums) {
            if (currSum + num > mid) {
                subarrays++;
                currSum = num;
                if (subarrays > k) return false;
            } else {
                currSum += num;
            }
        }
        return true;
    }
public:
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);
        int result = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (isValid(nums, k, mid)) {
                result = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return result;

    }
};