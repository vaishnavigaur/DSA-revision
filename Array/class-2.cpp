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

// --------Next permutation-----------
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
       int pivot  = -1, n = nums.size();
        for(int i=n-2; i>=0; i--) {
            if(nums[i] < nums[i+1]) {
                pivot = i;
                break;
            }
        }
        if(pivot == -1) {
            reverse(nums.begin(), nums.end());
            
            return;
        }
        for(int i = n-1; i>pivot; i--) {
            if(nums[i] > nums[pivot]) {
                swap(nums[i], nums[pivot]);
                break;
            }
        }
        int i=pivot+1, j=n-1;
         while(i <= j) {
            swap(nums[i++], nums[j--]);
         }
    }
};

// ----------------SET ZERO------------------
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        vector<bool>row(m,false);
        vector<bool>col(n,false);

        for(int i=0; i < m; i++) {
            for(int j=0; j < n; j++) {
                if(matrix[i][j] == 0) {
                    row[i] = true;
                    col[j] = true;
                }
            }
        }

        for(int i=0; i<m; i++) {
            for(int j=0; j<n;j++) {
                if(row[i] == true || col[j] == true) {
                    matrix[i][j] = 0;
                }
            }
        };
    }
};
// -------------count value with equally spaced occ 1-------------------
class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        int result = 0;
        vector<vector<int>>t(m,vector<int>(n,0));
        for(int i=0; i < m; i++) {
            for(int j=0; j<n; j++) {
               
               if(i==0 || j==0) {
                t[i][j] = matrix[i][j];
               }
               else if(matrix[i][j] == 1) {
                t[i][j] = 1 + min(t[i-1][j], t[i-1][j-1], t[i][j-1]);
               }
               result += t[i][j];
                }
            }
            return result;
        };
    }
};

// ---------------------------------------cyclic shift row and col-------------------------------
class Solution {
public:
    vector<vector<int>> cyclicShift(int n, vector<vector<int>>& grid, vector<int>& rowShift, vector<int>& colShift) {
        for(int i=0; i<n; i++) {
            int k = rowShift[i]%n;
            if(k==0) continue;

            vector<int>newRow(n);
            for(int j=0; j<n; j++) {
                newRow[j] = grid[i][(j+k)%n];
            }
            grid[i] = newRow;
        }

        for(int j=0; j<n; j++) {
            int k = colShift[j]%n;
            if(k==0) continue;

            vector<int >col(n);
            for(int i=0; i<n; i++) {
                col[i] = grid[i][j];
                
            }
            vector<int>shifted(n);
            for(int i=0; i<n; i++) {
                shifted[i] = col[(i+k) % n];
            }
            for(int i=0; i<n; i++) grid[i][j] = shifted[i];
        }
        return grid;
        
    };
};