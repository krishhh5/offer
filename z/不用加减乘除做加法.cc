class Solution {
 public:
  int Add(int num1, int num2) {
    int n1;
    int n2;
    n1 = (num1 & num2) << 1;
    n2 = num1 ^ num2;
    while (n1 & n2) {
      num1 = n1;
      num2 = n2;
      n1 = (num1 & num2) << 1;
      n2 = num1 ^ num2;
    }
    return n1 | n2;
  }
};
