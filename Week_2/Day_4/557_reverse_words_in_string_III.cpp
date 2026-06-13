class Solution {
public:
    void reverseWord(string &s, int left, int right) {
        while (left<right) {
            swap(s[left], s[right]);
            left++;
            right--;
        }
    }
    string reverseWords(string s) {
        int left=0, right=0;

        while (right<s.length()) {
            if (s[right] == ' ') { // If we find a space, reverse the word
                reverseWord(s, left, right - 1);
                left=right+1;
            }
            right++;
        }
        reverseWord(s, left, right - 1); // Reverse the last word

        return s;
    }
};
// Time Complexity  : O(n)
// Space Complexity : O(1)
