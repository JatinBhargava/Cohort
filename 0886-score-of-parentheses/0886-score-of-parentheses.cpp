class Solution {
public:
    int scoreOfParentheses(string s) {
        
        stack<char>stack;
        int count = 0;
        
        for(auto c:s){
            if(c == '('){
                stack.push(count);
                count=0;
            }
            else{
                int curScore = stack.top();
                stack.pop();
                count = curScore + max(2*count,1);
            }
        }
        return count;
    }
};