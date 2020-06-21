class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        std::string::iterator left = s.begin();
    int max = 0;
    for (auto it = left; it != s.end(); ++it) {
      auto pos = std::find(left, it, *it);
      if (pos == it) {
        if (it - left + 1 > max) {
          max = it - left + 1;
        }
      } else {
        left = pos + 1;
      }
    }
    return max;
        
    }
};