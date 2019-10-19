class Solution {
 public:
  int cutRope(int number) {
    if (number <= 3) {
      return number - 1;
    }
    int i = number % 3;
    int j = number / 3;
    if (i == 0) {
      return pow(3, j);
    } else if (i == 1) {
      return 2 * 2 * pow(3, j - 1);
    } else {
      return 2 * pow(3, j);
    }
  }
};
