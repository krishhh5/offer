class Solution {
 public:
  int MoreThanHalfNum_Solution(vector<int> numbers) {
    if (numbers.empty()) {
      return 0;
    }
    int size = numbers.size();
    unordered_map<int, int> map;
    for (const auto& num : numbers) {
      map[num]++;
    }
    for (const auto& pair : map) {
      if (pair.second > size / 2) {
        return pair.first;
      }
    }
    return 0;
  }
};
