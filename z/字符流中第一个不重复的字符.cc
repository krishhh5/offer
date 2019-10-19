class Solution {
 public:
  unordered_map<char, int> m;
  string str;
  // Insert one char from stringstream
  void Insert(char ch) {
    str += ch;
    ++m[ch];
  }
  // return the first appearence once char in current stringstream
  char FirstAppearingOnce() {
    for (const auto& ch : str) {
      if (m[ch] == 1) {
        return ch;
      }
    }
    return '#';
  }
};
