class Solution {
 public:
  int GetNumberOfK(vector<int> data, int k) {
    if (data.empty()) {
      return 0;
    }
    int res = 0;
    for (int i = 0; i < data.size(); ++i) {
      if (data[i] == k) {
        ++res;
        if (data[i + 1] != k) {
          break;
        }
      }
    }
    return res;
  }
};
