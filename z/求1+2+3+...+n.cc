class Solution {
 public:
  int Sum_Solution(int n) {
    int res = n;
    res && (res += Sum_Solution(n - 1));
    return res;
  }
};
