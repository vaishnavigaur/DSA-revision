#include <iostream>
#include<limits.h>
using namespace std;



int main() {
  int arr[] = {1,2,3,4,5};
   int n = 5;

// <-----------------------Max. SubArray--------------------------------
// for(int st=0; st<n; st++) {
//         for(int end= st; end<n; end++) {
//             for(int i=st; i<=end; i++) {
//                 cout<<arr[i];
//             }
//             cout<<" ";
//         }
//         cout<<endl;
//     }
// ----------------------------max subArray Sum----------------------------
//  int maxSum = INT_MIN;
//     for(int st=0; st<n; st++) {
//         int currSum = 0;
//         for(int end= st; end<n; end++) {
//             currSum += arr[end];
//              maxSum = max(currSum, maxSum);
//         }
//     }
//     cout<<"Total Max Sum-->"<<maxSum<<endl;
// ----------------kadan's Algorithm-------------------------------
      int maxSum = INT_MIN;
    for(int st=0; st<n; st++) {
        int currSum = 0;
        for(int end= st; end<n; end++) {
            currSum += arr[end];
             maxSum = max(currSum, maxSum);
           
        }
          if(currSum<0) {
            currSum = 0;
         }
        
        cout<<maxSum<<endl;

    }
    return 0;
}

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();

        vector<int>result(n);
        int pi = 0;
        int ni = 1;

        for(int &num:nums) {
            if(num>0) {
                result[pi] = num;
                pi += 2;
            }else{
                result[ni] = num;
                ni += 2;
            }
        }
        return result;

    };



    void nextPermutation(vector<int>& nums) {
       int pivot  = -1, n = A.size();
        for(int i=n-1; i>=0; i--) {
            if(A[i] < A[i+1]) {
                pivot = i;
                break;
            }
        }
        if(pivot == -1) {
            reverse(A.begin(), A.end();
            );
            return;
        }
    }
};