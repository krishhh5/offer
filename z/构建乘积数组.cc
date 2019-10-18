class Solution {
 public:
  int helper(const vector<int>& nums, int index) {
    int res = 1;
    for (int i = 0; i < nums.size(); ++i) {
      if (i == index) {
        continue;
      } else {
        res *= nums[i];
      }
    }
    return res;
  }
  vector<int> multiply(const vector<int>& A) {
    vector<int> res;
    for (int i = 0; i < A.size(); ++i) {
      int tmp = helper(A, i);
      res.push_back(tmp);
    }
    return res;
  }
};
