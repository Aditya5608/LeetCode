class Solution {
public:

    // int fibonaaci(int n){
    //     int temp=0;
    //     if(n<2) return n;
    //         int a=0;
    //         int b=1;
    //         for(int i=2;i<=n;i++){
    //             //int temp=0;
    //             temp=a+b;
    //             a=b;
    //             b=temp;
            
    //         }
    //         return b;
    // }

        int lenLongestFibSubseq(vector<int>& arr) {
    //         int longseq=0;
    //     for(int i=0;i<arr.size();i++){
    //         if(arr[i]==fibonaaci(i)){
    //             longseq++;
    //         }
    //     }
        
    //     return longseq;
    int n = arr.size();
        unordered_map<int, int> index;
        vector<vector<int>> dp(n, vector<int>(n, 2));
        int maxLen = 0;

        // Store the index of each element
        for (int i = 0; i < n; i++) {
            index[arr[i]] = i;
        }

        // Check all pairs (i, j)
        for (int j = 0; j < n; j++) {
            for (int i = 0; i < j; i++) {
                int prev = arr[j] - arr[i];
                if (prev < arr[i] && index.find(prev) != index.end()) {
                    int k = index[prev];
                    dp[i][j] = dp[k][i] + 1;
                    maxLen = max(maxLen, dp[i][j]);
                }
            }
        }

        return (maxLen > 2) ? maxLen : 0;
    }
};