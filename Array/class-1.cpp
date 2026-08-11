#include <iostream>
#include<climits>
using namespace std;

int linearSearch(int arr[],int size, int target) {
 for(int i=0; i<size; i++) {
    if(arr[i] == target) {
        return i;
}
  }
  return -1;
}

void reverseArr(int arr[],int size) {
    int start = 0, end = size-1;

    while(start<end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

// -----------Zeroes And Ones------------------------------------->>>>
 void printZeroesAndOnes(int arr[],int n) {
     int zeroCount = 0;
     int oneCount = 0;

     for(int i=0; i<n; i++) {
        int currentElement = arr[i];
        if(currentElement == 0) {
            zeroCount++;
        }
        if(currentElement == 1) {
            oneCount++;
        }
     }
     cout<<"totalZeroCount" <<zeroCount<<endl;
     cout<<"totalOnesCount" <<oneCount<<endl;
 }

int main() {
   int arr[] = {0,1,1,1,0,0,1};
    int n = 7;
printZeroesAndOnes(arr,n);




//     reverseArr(arr,size);

//     for(int i=0; i<size;i++) {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;


    // int target = 8;
    // cout<<linearSearch(arr,size,target)<<"";

    // cout<<sizeof(arr)<<endl;
    // int smallest = INT_MAX;
    // for(int i=0; i<size;i++) {
    //     // if(nums[i] < smallest) {
    //     //     smallest = nums[i];
    //     // }
    //       smallest =  min(nums[i],smallest);
    // }
    //   cout<<smallest<<endl;


    // int largest = INT_MIN;

    // for(int i=0; i<size; i++) {
    //     largest = max(nums[i],largest);
    // }
    // cout<<"lARGEST = "<<largest<<endl;
   



    return 0;
}