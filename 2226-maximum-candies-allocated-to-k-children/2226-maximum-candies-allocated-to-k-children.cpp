class Solution {
public:
// void piles(vector<int>& candies){
//     stack<int> st;
//     for(int i=0;i<candies.size();i++){
//         if(candies[i]<candies[i+1]){
//             candies[i+1]=candies[i+1]-candies[i];
//             st.push_back(candies[i]);
//         }
//     }
// }
   int maximumCandies(vector<int>& candies, long long k) {
    long long left=1,right=*max_element(candies.begin(),candies.end());
    int result=0;
    while(left<=right){
        long long mid=left+(right-left)/2;
        long long c_count=0;
        for(int pile:candies){
            c_count +=pile/mid;
        }
        if(c_count>=k){
            result=mid;
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    return result;
//         //int mini=INT_MAX;
//         int n=candies.size();
//         int low=0;
//         int high=n-1;

//         for(int i=0;i<candies.size();i++){
//             if(candies[i]+candies[i+1]<=k){
//                return 0;
//             }
//             else if(candies[i]+candies[i+1]>=k){
//                int mid=(low+high)/2;
//                if(mid==)
//             }
//         }
//         return mini;
    }
};