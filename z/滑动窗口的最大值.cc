class Solution {
 public:
  vector<int> maxInWindows(const vector<int>& num, unsigned int size) {
    vector<int> res;
    if (size > num.size() || num.empty() || size <= 0) {
      return res;
    }
    int max;
    for (int i = 0; i <= num.size() - size; ++i) {
      max = INT_MIN;
      for (int j = i; j < i + size; ++j) {
        if (num[j] > max) {
          max = num[j];
        }
      }
      res.push_back(max);
    }
    return res;
  }
};
