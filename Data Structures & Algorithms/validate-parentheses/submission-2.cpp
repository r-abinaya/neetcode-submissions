class Solution {
public:
    bool isValid(string s) {
        stack<int> stk;
        int n= s.length();

        for(int i=0;i<n ;i++)
        {
            if(s[i]=='(' || s[i] == '{' || s[i]== '[')
            {
                stk.push(s[i]);
            }
            else if(!stk.empty() && ((stk.top()=='(' && s[i]==')') ||( stk.top() == '{' && s[i]=='}') || (stk.top()== '[' && s[i]==']')))
            {
                stk.pop();
            }
            else 
            {
                return false;
            }
        }
        return stk.empty();
    }
};
