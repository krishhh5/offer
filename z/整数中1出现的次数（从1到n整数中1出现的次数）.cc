class Solution {
 public:
  int NumberOf1Between1AndN_Solution(int n) {
    if (n <= 0) {
      return 0;
    }
    int count = 0;
    for (int i = 1; i <= n; i *= 10) {
      int tmp = i * 10;
      count += (n / tmp) * i + min(max(n % tmp - i + 1, 0), i);
    }
    return count;
  }
};
