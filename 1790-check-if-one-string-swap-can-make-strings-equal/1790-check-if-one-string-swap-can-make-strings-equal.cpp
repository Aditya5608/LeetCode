class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1==s2) return true;

    vector<int> difference;
      for(int i=0;i<s1.length();i++){
        if(s1[i]!=s2[i]){
           difference.push_back(i);
        }
      }
        if(difference.size()!=2) return false;

        int ind1=difference[0],ind2=difference[1];
        swap(s2[ind1],s2[ind2]);
      
      return s1==s2;
    }
};