class Solution {
public:
    string sortVowels(string s) {
         vector<char> vowels;

        // Store all vowels
        for (char c : s) {
            if (c == 'a' || c == 'e' || c == 'i' ||
                c == 'o' || c == 'u' ||
                c == 'A' || c == 'E' || c == 'I' ||
                c == 'O' || c == 'U') {
                vowels.push_back(c);
            }
        }

        // Sort vowels by ASCII value
        sort(vowels.begin(), vowels.end());

        // Replace vowels with sorted vowels
        int j = 0;

        for (int i = 0; i < s.size(); i++) {
            char c = s[i];

            if (c == 'a' || c == 'e' || c == 'i' ||
                c == 'o' || c == 'u' ||
                c == 'A' || c == 'E' || c == 'I' ||
                c == 'O' || c == 'U') {
                s[i] = vowels[j];
                j++;
            }
        }

        return s;
    }
};