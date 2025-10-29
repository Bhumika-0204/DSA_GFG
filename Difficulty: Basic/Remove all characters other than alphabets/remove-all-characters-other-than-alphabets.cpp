// User function template for C++

class Solution {
  public:
    string removeSpecialCharacter(string s) {
        // code here
        string ss="";
        for(int i=0;i<s.length();i++){
            if(isalpha(s[i])){
                ss.push_back(s[i]);
            }
        }
        if (ss.empty()) return "-1";
        return ss;
    }
};