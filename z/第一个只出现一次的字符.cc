class Solution {
 public:
  int FirstNotRepeatingChar(string str) {
    unordered_map<char, int> m;
    for (const auto& ch : str) {
      ++m[ch];
    }
    for (int i = 0; i < str.size(); ++i) {
      if (m[str[i]] == 1) {
        return i;
      }
    }
    return -1;
  }
};
