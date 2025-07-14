// class Solution {
// public:
//     int findJudge(int n, vector<vector<int>>& trust) {
//         vector<int> count(n + 1);

//         for(vector<int> &vec : trust){
//             int u = vec[0];
//             int v = vec[1];

//             count[u]--;
//             count[v]++;
//         }

//         for(int i = 1; i <= n; i++){
//             if(count[i] == n - 1){
//                 return i;
//             }

//         }
//         return -1;
//     }
// };

class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> indegree(n+1);
        vector<int> outdegree(n+1);
        
        for(vector<int> &vec : trust) {
            indegree[vec[1]]++;
            outdegree[vec[0]]++;
        }
        
        for(int i = 1; i<n+1; i++) {
            if(indegree[i] == n-1 && outdegree[i] == 0)
                return i;
        }
        
        return -1;
    }
};