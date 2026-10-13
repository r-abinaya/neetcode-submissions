class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int l=0,r =0;
        unordered_set<char> sett;
        int res=0;
        while(r<n)
        {
            while(sett.find(s[r])!=sett.end())
            {
                sett.erase(s[l]);
                l++;
            }
            sett.insert(s[r]);
            res = max(res, r - l + 1);
            r++;
        }
        return res;
    }
};
