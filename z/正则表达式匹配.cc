class Solution {
 public:
  bool match(char* str, char* pattern) {
    if (str == NULL || pattern == NULL) {
      return false;
    }
    if (!*pattern) {
      return !*str;
    }
    if (*(pattern + 1) == '*') {
      return match(str, pattern + 2) ||
             ((*str == *pattern || (*str && *pattern == '.')) && match(str + 1, pattern));
    }
    return (*str == *pattern || (*str && *pattern == '.')) && match(str + 1, pattern + 1);
  }
};
