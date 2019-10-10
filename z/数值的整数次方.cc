class Solution {
 public:
  double Power(double base, int exponent) {
    if (base == 0 && exponent == 0) {
      return 1;
    }
    if (base == 0) {
      return 0;
    }
    if (exponent == 0) {
      return 1;
    }
    double res = 1.0;
    int n = abs(exponent);
    for (int i = 0; i < n; ++i) {
      res *= base;
    }
    return exponent > 0 ? res : 1 / res;
  }
};
