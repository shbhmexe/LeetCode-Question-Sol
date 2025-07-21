// // // Optimized Using: Two Pointer with Extra Space
// //   // Time Complexity: O(m+n)
// //   // Space Complexity: O(m+n)
// // class Solution {
// // public:
// //     double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
// //         // Create a single sorted by merging two sorted arrays
// //         int n1=nums1.size();
// //         int n2=nums2.size();
// //         int i=0;
// //         int j=0;
// //         int lastindex=-1;
             
// //         // Initialize a new array
// //            vector<int>v(n1+n2,0);
        
// //         while(i<n1&&j<n2)
// //         {
// //             if(nums1[i]<=nums2[j])
// //                 v[++lastindex]=nums1[i++];
// //             else
// //                 v[++lastindex]=nums2[j++];
// //         }
        
// //         while(i<n1)
// //             v[++lastindex]=nums1[i++];
// //         while(j<n2)
// //             v[++lastindex]=nums2[j++];
        
// //     // Return the result
// //         int n=n1+n2;
// //         return n%2?v[n/2]:(v[n/2]+v[n/2-1])/2.0;
        
// //     }
// // };

// //Approach-2 - Optimising Space from Approach-1
// //T.C : O(m+n)
// //S.C : O(1)
// class Solution {
// public:
//     double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
//         int m = nums1.size();
//         int n = nums2.size();
//         int size = m+n;
        
//         int idx1 = (size/2)-1;
//         int element1 = -1;
//         int idx2 = size/2;
//         int element2 = -1;
        
//         int i = 0, j = 0, k = 0;
        
//         while(i < m && j < n) {
//             if(nums1[i] < nums2[j]) {
//                 if(k == idx1) {
//                     element1 = nums1[i];
//                 }
//                 if(k == idx2) {
//                     element2 = nums1[i];
//                 }
//                 i++;
//             } else {
//                 if(k == idx1) {
//                     element1 = nums2[j];
//                 }
//                 if(k == idx2) {
//                     element2 = nums2[j];
//                 }
//                 j++;
//             }
//             k++;
//         }
        
//         while(i < m) {
//             if(k == idx1) {
//                 element1 = nums1[i];
//             }
//             if(k == idx2) {
//                 element2 = nums1[i];
//             }
//             i++;
//             k++;
//         }
        
//         while(j < n) {
//             if(k == idx1) {
//                 element1 = nums2[j];
//             }
//             if(k == idx2) {
//                 element2 = nums2[j];
//             }
//             j++;
//             k++;
//         }

//         if(size%2 == 1)
//             return element2;
        
//         return (element1 + element2)/2.0;
        
//     }
// };

//Approach-3 (Using Binary Search)
//T.C : O(log(min(m, n))
//S.C : O(1)
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size() > nums2.size())
            return findMedianSortedArrays(nums2, nums1);
        
        int m = nums1.size();
        int n = nums2.size();
        
        int low = 0, high = m;
        while(low <= high) {
            
            int Px = low + (high-low)/2;
            int Py = (m+n+1)/2 - Px;
            
            int x1  = (Px == 0) ? INT_MIN : nums1[Px-1];
            int x3 = (Px == m) ? INT_MAX : nums1[Px];
            
            int x2  = (Py == 0) ? INT_MIN : nums2[Py-1];
            int x4 = (Py == n) ? INT_MAX : nums2[Py];
            
            if(x1 <= x4 && x2 <= x3) {
                if((m+n)%2 == 0)
                    return (max(x1, x2) + min(x3, x4))/2.0;
                
                return max(x1, x2);
            } else if(x1 > x4) {
                high = Px-1;
            } else {
                low = Px+1;
            }
        }
        
        return -1;
    }
};