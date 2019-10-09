class Solution {
 public:
  int rectCover(int number) {
    if (number <= 2) {
      return number;
    }
    vector<int> v(number + 1);
    v[1] = 1;
    v[2] = 2;
    for (int i = 3; i <= number; ++i) {
      v[i] = v[i - 1] + v[i - 2];
    }
    return v[number];
  }
};
