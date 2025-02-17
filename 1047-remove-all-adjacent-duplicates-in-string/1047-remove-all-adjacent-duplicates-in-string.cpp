class Solution {
public:
    string removeDuplicates(string s) {
        string st="";

        for(int i=0;i<s.length();i++){
            if(st.length()>0)
            { 
               if( st[st.length()-1]==s[i]){
                st.pop_back();
            }
            else{
                st.push_back(s[i]);
            }
            }
            else{
                                st.push_back(s[i]);
            }
        }
        
        return st;
    }
};