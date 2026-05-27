class Solution {
public:
    int numberOfSpecialChars(string word) {
         int count = 0;

    // check every letter from a to z
    for (char ch = 'a'; ch <= 'z'; ch++) {

        int lastLower = -1;
        int firstUpper = -1;

        // find last occurrence of lowercase
        for (int i = 0; i < word.length(); i++) {
            if (word[i] == ch) {
                lastLower = i;
            }
        }

        // find first occurrence of uppercase
        for (int i = 0; i < word.length(); i++) {
            if (word[i] == ch - 32) { // convert to uppercase
                firstUpper = i;
                break;
            }
        }

        // check condition
        if (lastLower != -1 && firstUpper != -1 &&
            lastLower < firstUpper) {
            count++;
        }
    }

    return count;
}

    
};