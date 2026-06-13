class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n=s.length();

        for(int l=n/2; l>=1; l--){
            if(n%l == 0){
                int times=n/l;
                string substring = s.substr(0,l); 
                string newstr = "";

                while(times--){
                    newstr += substring;
                }
                if(newstr == s)
                return true;
            }
        }
        return false;
    }
};
// Time Complexity: O(n²)
// Space Complexity: O(n)
