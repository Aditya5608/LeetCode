class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
           priority_queue<int> pq(piles.begin(), piles.end());
        int sum = 0;
        
        while (k--) {
            int top = pq.top();
            pq.pop();
            top -= top / 2;  // Reduce by half
            pq.push(top);
        }

        while (!pq.empty()) {
            sum += pq.top();
            pq.pop();
        }

        return sum;
        // int sum=0;
        // // priority_queue<int> pq(piles.begin(),piles.end());

        // // while(k--){
            
        // // }
        // int operation=0;
        // sort(piles.begin(),piles.end(),greater<int>());
        // for(int i=0;i<piles.size();i++){
        //    // piles[0]=floor(piles[0]/2);
        //     piles[0]=piles[0]-floor(piles[0]/2);
        //             sort(piles.begin(),piles.end(),greater<int>());

        // operation++;
        // if(operation==k) break;

        // }
        // for(int i=0;i<piles.size();i++){
        //     sum+=piles[i];
        // }
        // return sum;
    }
};