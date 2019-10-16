class Solution {
 public:
  void swap(char& a, char& b) {
    char tmp = a;
    a = b;
    b = tmp;
  }
  void reverse(string& str, int start, int end) {
    while (start < end) {
      swap(str[start++], str[end--]);
    }
  }
  string ReverseSentence(string str) {
    if (str.empty()) {
      return str;
    }
    reverse(str, 0, str.size() - 1);
    int index = 0;
    int start = 0;
    int end = 0;
    while (index < str.size()) {
      while (index < str.size() && str[index] == ' ') {
        ++index;
      }
      start = index;
      end = index;
      while (end < str.size() && str[end] != ' ') {
        ++index;
        ++end;
      }
      reverse(str, start, end - 1);
    }
    return str;
  }
};
