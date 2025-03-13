class Solution {
public:
//         int count1=0;
//         int count2=0;
        
//    // int maxi=INT_MIN;
//         for(int i=0;i<nums.size();i++){
//             //if(nums[i]==0);
//             if(nums[i]<0) count1++;
//             else if(nums[i]>0)count2++;
//    // int maxi=max(count1,count2);
//         }
//         return max(count1,count2);
//     }

    int bSFNN(vector<int>& nums){
        int s = 0;
        int e = nums.size() - 1;

        while (s<=e){
            int m = s + (e - s) / 2;
            if (nums[m] < 0){
                s = m + 1;
            }
            else{
                e = m - 1;
            }
        }

        return s;

    }

    int bSFPI(vector<int>& nums){
        int s = 0;
        int e = nums.size() - 1;

        while (s<=e){
            int m = s + (e - s) / 2;
            if (nums[m] <= 0){
                s = m + 1;
            }
            else{
                e = m - 1;
            }
        }
        return s;

    }
    int maximumCount(vector<int>& nums) {

    int neg_count = bSFNN(nums);
    int pos_count = nums.size() - bSFPI(nums);
    return max(neg_count, pos_count);
    }
};