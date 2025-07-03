#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main()
{
    class Solution
    {
    public:
        string removeDuplicates(string s)
        {
            string temp = " ";
            int i = 0;

            while (i < s.length())
            {
                if (temp.empty() || s[i] != temp.back())
                {
                    temp.push_back(s[i]);
                }
                else
                {
                    temp.pop_back();
                }
                i++;
            }
            return temp;
        }
    };
    return 0;
}


// class Solution {
// public:
//     string removeDuplicates(string s) {
//         string temp = "";
//         int i = 0;

//         while (i < s.length()) {
//             if (temp.empty() || s[i] != temp.back()) {
//                 temp.push_back(s[i]);
//             } else {
//                 temp.pop_back();
//             }
//             i++;
//         }
//         return temp;
//     }
// };