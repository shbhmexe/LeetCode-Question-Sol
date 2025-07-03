#include <iostream>
#include <string>
using namespace std;

class Solution {
private:
    bool checkEqual(int a[26], int b[26]) {
        for (int i = 0; i < 26; i++) {
            if (a[i] != b[i]) {
                return false;
            }
        }
        return true;
    }

public:
    bool checkInclusion(string s1, string s2) {
        int count1[26] = {0};

        // Count characters of s1
        for (int i = 0; i < s1.length(); i++) {
            int index = s1[i] - 'a';
            count1[index]++;
        }

        int count2[26] = {0};
        int windowSize = s1.length();
        int i = 0;

        // First window of s2
        while (i < windowSize && i < s2.length()) {
            int index = s2[i] - 'a';
            count2[index]++;
            i++;
        }

        if (checkEqual(count1, count2)) {
            return true;
        }

        // Process remaining windows
        while (i < s2.length()) {
            char newChar = s2[i];
            int index = newChar - 'a';
            count2[index]++;

            char oldChar = s2[i - windowSize];
            index = oldChar - 'a';
            count2[index]--;

            if (checkEqual(count1, count2)) {
                return true;
            }
            i++;
        }

        return false;
    }
};

int main() {
    Solution obj;
    string s1 = "ab";
    string s2 = "eidbaooo";

    if (obj.checkInclusion(s1, s2)) {
        cout << "Permutation exists in s2." << endl;
    } else {
        cout << "No permutation found in s2." << endl;
    }

    return 0;
}


// class Solution {
// private:
//     bool checkEqual(int a[26], int b[26]) {
//         for (int i = 0; i < 26; i++) {
//             if (a[i] != b[i]) {
//                 return false;
//             }
//         }
//         return true;
//     }

// public:
//     bool checkInclusion(string s1, string s2) {
//         int count1[26] = {0};

//         // Count characters of s1
//         for (int i = 0; i < s1.length(); i++) {
//             int index = s1[i] - 'a';
//             count1[index]++;
//         }

//         int count2[26] = {0};
//         int windowSize = s1.length();
//         int i = 0;

//         // First window of s2
//         while (i < windowSize && i < s2.length()) {
//             int index = s2[i] - 'a';
//             count2[index]++;
//             i++;
//         }

//         if (checkEqual(count1, count2)) {
//             return true;
//         }

//         // Process remaining windows
//         while (i < s2.length()) {
//             char newChar = s2[i];
//             int index = newChar - 'a';
//             count2[index]++;

//             char oldChar = s2[i - windowSize];
//             index = oldChar - 'a';
//             count2[index]--;

//             if (checkEqual(count1, count2)) {
//                 return true;
//             }
//             i++;
//         }

//         return false;
//     }
// };