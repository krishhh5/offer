class Solution {
 public:
  vector<vector<int>> FindContinuousSequence(int sum) {
    vector<vector<int>> res;
    if (sum < 1) {
      return res;
    }
    int slow = 1;
    int fast = 2;
    while (fast > slow) {
      int cur = (slow + fast) * (fast - slow + 1) / 2;
      if (cur == sum) {
        vector<int> tmp;
        for (int i = slow; i <= fast; ++i) {
          tmp.push_back(i);
        }
        res.push_back(tmp);
        ++slow;
      } else if (cur < sum) {
        ++fast;
      } else {
        ++slow;
      }
    }
    return res;
  }
};
