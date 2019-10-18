class Solution {
 public:
  bool isNumeric(char* string) {
    bool has_symbol = false;
    bool has_dot = false;
    bool has_e = false;
    int size = strlen(string);
    for (int i = 0; i < size; ++i) {
      if (string[i] == 'e' || string[i] == 'E') {
        if (i == size - 1) {
          return false;
        }
        if (has_e) {
          return false;
        }
        has_e = true;
      } else if (string[i] == '+' || string[i] == '-') {
        if (has_symbol && string[i - 1] != 'e' && string[i - 1] != 'E') {
          return false;
        }
        if (!has_symbol && i > 0 && string[i - 1] != 'e' && string[i - 1] != 'E') {
          return false;
        }
      } else if (string[i] == '.') {
        if (has_dot || has_e) {
          return false;
        }
        has_dot = true;
      } else if (string[i] < '0' || string[i] > '9') {
        return false;
      }
    }
    return true;
  }
};
