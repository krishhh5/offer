class Solution {
 public:
  int LastRemaining_Solution(int n, int m) {
    if (n <= 0 || m < 0) {
      return -1;
    }
    vector<int> v(n);
    iota(v.begin(), v.end(), 0);
    int i = 0;
    while (v.size() > 1) {
      i = (i + m - 1) % v.size();
      v.erase(v.begin() + i);
    }
    return v[0];
  }
};
