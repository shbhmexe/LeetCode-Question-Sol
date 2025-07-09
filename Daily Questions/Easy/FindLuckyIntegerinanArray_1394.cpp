#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> freq;

        // Frequency count
        for (int num : arr) {
            freq[num]++;
        }

        int ans = -1;

        // Check lucky number
        for (auto it : freq) {
            if (it.first == it.second) {
                ans = max(ans, it.first);
            }
        }

        return ans;
    }
};

int main() {
    Solution obj;
    vector<int> arr = {2, 2, 3, 4, 4, 4};

    cout << "Lucky Number: " << obj.findLucky(arr) << endl;
}


// class Solution {
// public:
//     int findLucky(vector<int>& arr) {
//         unordered_map<int, int> mp;
        
//         for(int &x : arr) {
//             mp[x]++;
//         }
        
//         int ans = -1;
//         for(auto &it : mp) {
//             if(it.first == it.second)
//                 ans = max(ans, it.first);
//         }
        
//         return ans;
//     }
// };

