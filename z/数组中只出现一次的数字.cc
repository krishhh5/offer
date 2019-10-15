class Solution {
 public:
  void FindNumsAppearOnce(vector<int> data, int* num1, int* num2) {
    if (data.empty()) {
      return;
    }
    unordered_map<int, int> map;
    for (int i = 0; i < data.size(); ++i) {
      map[data[i]]++;
    }
    vector<int> res;
    for (auto iter = map.begin(); iter != map.end(); ++iter) {
      if (iter->second == 1) {
        res.push_back(iter->first);
      }
    }
    *num1 = res[0];
    *num2 = res[1];
  }
};
