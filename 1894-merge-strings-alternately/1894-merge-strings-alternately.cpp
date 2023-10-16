class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i = 0, j = 0;
        int n1 = word1.size(), n2 = word2.size();
        string res = "";

        while (i < n1 && j < n2) {
            res += word1[i];
            res += word2[j];

            i++;
            j++;
        }

        if (i != n1) {
            while (i < n1) {
                res += word1[i];
                i++;
            }
        }

        if(j != n2) {
            while (j < n2) {
                res += word2[j];
                j++;
            }
        }

        return res;
    }
};