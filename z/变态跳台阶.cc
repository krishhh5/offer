class Solution {
 public:
  int jumpFloorII(int number) {
    int res = 1;
    for (int i = 1; i < number; ++i) {
      res *= 2;
    }
    return res;
  }
};
