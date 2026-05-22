class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int w1Len = word1.length();
        int w2Len = word2.length();
        int i = 0, j = 0;
        string mergedString = "";

       while(i < w1Len || j < w2Len){
        if (i < w1Len){
            mergedString += word1[i++];
        }
        if (j < w2Len){
            mergedString += word2[j++];
        }
       }
       return mergedString; 
    }
    
};

