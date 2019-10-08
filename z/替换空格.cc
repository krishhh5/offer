class Solution {
 public:
  void replaceSpace(char* str, int length) {
    if (str == NULL || length <= 0) {
      return;
    }
    int count = 0;
    int len = 0;
    while (str[len] != '\0') {
      if (str[len] == ' ') {
        ++count;
      }
      ++len;
    }
    int size = len + count * 2;
    if (size > length) {
      return;
    }
    str[size] = '\0';
    int i = size - 1;
    for (int j = len - 1; j >= 0; --j) {
      if (str[j] == ' ') {
        str[i] = '0';
        str[i - 1] = '2';
        str[i - 2] = '%';
        i -= 3;
      } else {
        str[i] = str[j];
        --i;
      }
    }
  }
};
