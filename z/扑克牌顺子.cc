class Solution {
 public:
  bool IsContinuous(vector<int> numbers) {
    if (numbers.empty()) {
      return false;
    }
    sort(numbers.begin(), numbers.end());
    for (int i = 0; i < 4; ++i) {
      if (numbers[i] != 0 && numbers[i] == numbers[i + 1]) {
        return false;
      }
      if (numbers[i] != 0 && numbers.back() - numbers[i] > 4) {
        return false;
      }
    }
    return true;
  }
};
