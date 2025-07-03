// //Leetcode question - Q344

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int start = 0;
        int end = s.size() - 1;

        while (start < end) {
            swap(s[start++], s[end--]);
        }
    }
};

int main() {
    Solution obj;
    vector<char> s = {'h', 'e', 'l', 'l', 'o'};

    cout << "Before Reversing: ";
    for (char ch : s) {
        cout << ch << " ";
    }
    cout << endl;

    obj.reverseString(s);

    cout << "After Reversing: ";
    for (char ch : s) {
        cout << ch << " ";
    }
    cout << endl;

    return 0;
}


// #include<iostream>
// using namespace std;
// #include <bits/stdc++.h>

// int main()
// {
//     class Solution {
//         public:
//             void reverseString(vector<char>& s) {
//                 int start = 0;
//                 int end = s.size()-1;
        
//                 while (start<end) {
//                     swap(s[start++], s[end--]);
//                 }
//             }
//         };
//     return 0;
// }