class Solution {

  public: int lengthOfLastWord(string s) {
    stack < char > st;
    int i = 0;
    while (i < s.size()) {
      st.push(s[i]);
      i++;
    }
    int count = 0;
    while (st.top() == ' ') {
      st.pop();
    }
    while (st.top() != ' ' && !st.empty()) {
      count++;

      st.pop();
      if (st.empty()) {
        break;
      }
    }
    return count;
  }
};