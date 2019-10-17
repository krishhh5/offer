class Solution {
 public:
  vector<int> FindNumbersWithSum(vector<int> array, int sum) {
    vector<int> res;
    if (array.empty()) {
      return res;
    }
    unordered_map<int, int> map;
    for (int i = 0; i < array.size(); ++i) {
      int key = sum - array[i];
      if (map.count(key) == 1) {
        if (res.empty()) {
          if (key < array[i]) {
            res.push_back(key);
            res.push_back(array[i]);
          } else {
            res.push_back(array[i]);
            res.push_back(key);
          }
        } else {
          if (key * array[i] < res[0] * res[1]) {
            if (key < array[i]) {
              res[0] = key;
              res[1] = array[i];
            } else {
              res[0] = array[i];
              res[1] = key;
            }
          }
        }
      }
      map.insert({array[i], i});
    }
    return res;
  }
};
