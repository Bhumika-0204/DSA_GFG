class Solution{
    public:
    int binaryToDecimal(string s) {
       int ans = 0;
       for (char bit : s) {
           ans = ans * 2 + (bit - '0');
        }
      return ans;
    }
};