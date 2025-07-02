#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int c = 0, e = s.size() - 1;

        while (c < e) {
            if (!isalnum(s[c])) {
                c++;
            }
            else if (!isalnum(s[e])) {
                e--;
            }
            else if (tolower(s[c]) != tolower(s[e])) {
                return false;
            }
            else {
                c++;
                e--;
            }
        }
        return true;
    }
};

int main() {
    Solution obj;
    string s = "A man, a plan, a canal: Panama";

    if (obj.isPalindrome(s)) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not a Palindrome" << endl;
    }

    return 0;
}


// class Solution {
// public:
//     bool isPalindrome(string s) {
//         int c = 0, e = s.size() - 1;

//         while (c < e) {
//             if (!isalnum(s[c])) {
//                 c++;
//             }
//             else if (!isalnum(s[e])) {
//                 e--;
//             }
//             else if (tolower(s[c]) != tolower(s[e])) {
//                 return false;
//             }
//             else {
//                 c++;
//                 e--;
//             }
//         }
//         return true;
//     }
// };