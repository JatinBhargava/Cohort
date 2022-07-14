class Solution {
public:
    string reverseWords(string s) {
        stack<string>store;
        int n = s.size();
        for(int i=0;i<n;i++){
            string word;
            if(s[i] == ' ')
                continue;
            while(i<n && s[i]!= ' ')
            {
                word+=s[i];
                i++;
            }
            store.push(word);
        }
        
        string result;
        while(!store.empty()){
            result+=store.top();store.pop();
            if(!store.empty())
                result+=' ';
        }
        
        return result;
    }
};