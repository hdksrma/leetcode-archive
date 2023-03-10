class Solution {
public:
    int maxDepth(string s) {
        
        int depth = 0;
        int max_depth = 0;

        for(int i=0; i<s.length(); i++){
            if(s[i] == '('){
                depth++;
            }
            else if(s[i] == ')'){
                depth--;
            }

            max_depth = max(depth, max_depth);

        }
        return max_depth;
    }
};