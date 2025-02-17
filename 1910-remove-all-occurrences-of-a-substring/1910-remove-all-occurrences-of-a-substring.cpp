class Solution {
public:
    string removeOccurrences(string s, string part) {
        // string stack;
        // int partsize=part.size();
        // for(char c:s){
            
        //         stack.push_back(c);
        //     if(stack.size()>=partsize && stack.substr(stack.size()-partsize)==part){
        //         stack.erase(stack.end()-partsize,stack.end());
        //     }
        // }
        // return stack;
        int pos=s.find(part);
        while(pos!=string::npos){
            s.erase(pos,part.length());
            pos=s.find(part);
        }
        return s;
    }
};