class Solution {
public:
    bool isFreqSame(int freq1[], int freq2[]) {
        for (int i = 0; i < 26; i++) {
            if (freq1[i] != freq2[i]) {
                return false;
            }
        }
        return true;
    }

    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;

        int freqP[26] = {0};
        for (char ch : p) {
            freqP[ch - 'a']++;
        }

        int windSize = p.length();

        for (int i = 0; i < s.length(); i++) {
            int windIdx = 0, idx = i;
            
            int windFreq[26] = {0};

            while (windIdx < windSize && idx < s.length()) {
                windFreq[s[idx] - 'a']++;
                windIdx++;
                idx++;
            }

            if (isFreqSame(freqP, windFreq)) {
                    ans.push_back(i);
                }
            }
            return ans;
        }
    };

//1)Time Complexity: O(n × m)
// n = s.length() & m = p.length()

// 2) Space Complexity: O(1)
