// #include<iostream>
// using namespace std;
// int main()
// {
// class Solution {
// public:
//     string removeOccurrences(string s, string part) {
        
//         while(s.length()!=0 && s.find(part) < s.length()) {
//             s.erase(s.find(part), part.length());
//         }
//         return s;
//     }
// };
//     return 0;
// }

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string removeOccurrences(string s, string part) {
        while (s.length() != 0 && s.find(part) != string::npos) {
            s.erase(s.find(part), part.length());
        }
        return s;
    }
};

int main() {
    Solution obj;
    string s = "daabcbaabcbc";
    string part = "abc";

    string result = obj.removeOccurrences(s, part);
    cout << "After Removal: " << result << endl;

    return 0;
}
