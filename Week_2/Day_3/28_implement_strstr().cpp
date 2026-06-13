class Solution {
public:
    int strStr(string haystack, string needle) {
        int h = haystack.length();
        int n = needle.length();

        for (int i=0; i <= h-n; i++) {
            int j;
            for (j=0; j<n; j++) {
                if (needle[j] != haystack[i+j]) {
                    break;
                }
            }
            if (j == n){
                return i;
        }
    }
    return -1;
}
};
////1) Worst case:
 //TC = O((h - n + 1) × n)  ≈ O(h × n)
 
 //2) SC = O(1)
