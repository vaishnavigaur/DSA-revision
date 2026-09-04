#include <iostream>
#include<limits.h>
using namespace std;



int main() {
  int arr[5] = {1,2,3,4,5};
   int n = 5;


// for(int st=0; st<n; st++) {
//         for(int end= st; end<n; end++) {
//             for(int i=st; i<=end; i++) {
//                 cout<<arr[i];
//             }
//             cout<<" ";
//         }
//         cout<<endl;
//     }

 int maxSum = INT_MIN;
    for(int st=0; st<n; st++) {
        int currSum = 0;
        for(int end= st; end<n; end++) {
            currSum += arr[end];
             maxSum = max(currSum, maxSum);
        }
    }
    cout<<"Total Max Sum-->"<<maxSum<<endl;

    return 0;
}