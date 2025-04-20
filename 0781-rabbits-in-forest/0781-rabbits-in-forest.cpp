class Solution {
public:
    int numRabbits(vector<int>& answers) {
        // int count=0;
        // for(int i=0;i<answers.size();i++){
        //   for(int j=i+ 1;j<answers.size();j++){
        //     if(answers[i]==answers[j]){
        //         count+=2*(answers[i]);
        //     }
        //     else{
        //         count+=answers[i];
        //     }
        //   }
        // }
        // return count;

        unordered_map<int,int>freq;
        for(int ans:answers){
            freq[ans]++;
        }
         int result = 0;
        for (auto& [x, count] : freq) {
            int groupSize = x + 1;
            int numGroups = (count + groupSize - 1) / groupSize; 
            result += numGroups * groupSize;
        }
        return result;
    }
};