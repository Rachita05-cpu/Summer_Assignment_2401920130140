class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        int n=str.size();
        string ans="";

        sort(str.begin(), str.end());

        if(n == 0) return ans;
        
        string first=str[0];
        string last=str[n-1];

        for(int i=0; i< min(first.length(),last.length()); i++){
            if(first[i] != last[i]) break;

            ans.push_back(first[i]);
        }
    return ans;
    }
};
