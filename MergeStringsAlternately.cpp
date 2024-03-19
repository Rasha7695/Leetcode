class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merged_string = "";
        int i = 0;
        int j = 0;
        while (i < word1.size() && j < word2.size()){
            merged_string+=word1[i];
            merged_string+=word2[j];
            i++; j++;
        }
        if(i < word1.size()) {
            merged_string += word1.substr(i);
        }
        if(j < word2.size()) {
            merged_string += word2.substr(j);
        }
        return merged_string;
    }
};
