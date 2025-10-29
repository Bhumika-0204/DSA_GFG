class Solution {
  public:
    int arraySum(vector<int> &arr) {
        return sumHelper(arr, arr.size());
    }
    
  private:
    int sumHelper(vector<int> &arr, int n) {
        if (n == 0) return 0;
        return arr[n - 1] + sumHelper(arr, n - 1);
    }
};
