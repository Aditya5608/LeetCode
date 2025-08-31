class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
vector<vector<int>> results;

        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         for(int k=j+1;k<n;k++){
        //             if(nums[i]+nums[j]+nums[k]==0){
        //                 vector<int> triplets ={nums[i],nums[j],nums[k]};
        //                 sort(triplets.begin(),triplets.end());
        //                 results.push_back(triplets);

        //             }
                    
        //         }
        //     }
        // }
    // for(int i=0;i<n;i++){
    //     unordered_set<int> hashset;
    //         for(int j=i+1;j<n;j++){
    //             int third=-(nums[i]+nums[j]);
    //             if(hashset.find(third)!=hashset.end()){
    //                 vector<int> triplets ={nums[i],nums[j],third};
    //                     sort(triplets.begin(),triplets.end());
    //                     results.insert(triplets);
    //             }
    //             hashset.insert(nums[j]);
    //         }
    //         }
    //     vector<vector<int>> ans(results.begin(),results.end());
    //     return ans;

        sort(nums.begin(),nums.end());
            for(int i=0;i<n;i++){
                if(i>0 && nums[i]==nums[i-1]) continue;
                int j=i+1;
                int k=n-1;
                while(j<k){
                    int sum=nums[i]+nums[j]+nums[k];
                    if(sum<0){
                        j++;
                    }
                    else if(sum>0){
                        k--;
                    }
                    else{
                        vector<int> temp={nums[i],nums[j],nums[k]};
                        results.push_back(temp);
                        j++;
                        k--;
                        while(j<k && nums[j]==nums[j-1]) j++;
                        while(j<k && nums[k]==nums[k+1]) k--;
                    }
                }
            }
        
        return results;
    }
    }
};
