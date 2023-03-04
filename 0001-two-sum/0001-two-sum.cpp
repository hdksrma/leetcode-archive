class Solution {
  public: vector < int > twoSum(vector < int > & nums, int target) {
    vector < int > out;
    for (int i = 0; i < size(nums); i++) {
      for (int n = 1; n < nums.size(); n++) {
        if ((nums[i] + nums[n]) == target && i != n) {
          out.push_back(i);
          out.push_back(n);
          return out;
        }
      }
    }
      return out;
  }
};