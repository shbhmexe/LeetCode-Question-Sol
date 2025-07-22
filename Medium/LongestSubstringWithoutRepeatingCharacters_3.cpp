//Question 213
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int maxLength = 0;
        unordered_set<char> charSet;

        for (int right = 0; right < s.length(); right++) {
            while (charSet.find(s[right]) != charSet.end()) {
                charSet.erase(s[left]);
                left++;
            }

            charSet.insert(s[right]);
            maxLength = max(maxLength, right - left + 1);
        }

        return maxLength;        
    }
};


// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         unordered_map<char, int> charIndex; // Stores the latest index of characters
//         int maxLength = 0;
//         int left = 0;

//         for (int right = 0; right < s.length(); right++) {
//             char currentChar = s[right];

//             // If the character is already seen and its index is within the current window
//             if (charIndex.find(currentChar) != charIndex.end() && charIndex[currentChar] >= left) {
//                 left = charIndex[currentChar] + 1; // Move left pointer ahead of duplicate
//             }

//             charIndex[currentChar] = right; // Update the latest index
//             maxLength = max(maxLength, right - left + 1); // Update max length
//         }

//         return maxLength;
//     }
// };
