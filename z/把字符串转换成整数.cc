class Solution {
 public:
  int StrToInt(string str) {
    if (str.empty()) {
      return 0;
    }
    int sign = 1;
    if (str[0] == '+') {
      sign = 1;
      str[0] = '0';
    }
    if (str[0] == '-') {
      sign = -1;
      str[0] = '0';
    }
    int res = 0;
    for (int i = 0; i < str.size(); ++i) {
      if (str[i] < '0' || str[i] > '9') {
        res = 0;
        break;
      }
      res = res * 10 + str[i] - '0';
    }
    return sign * res;
  }
};
