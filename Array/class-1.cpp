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

//  Extreme printing-----------------------------
void extremePrinting(int arr[],int n) {
    int i = 0;
    int j = n-1;

    while(i<=j) {
        cout<<arr[i]<<" ";
        i++;
        cout<<arr[j]<<" ";
        j--;
    }
}

int main() {
   int arr[] = {10,20,30,40,50,60};
    int n = 6;
// printZeroesAndOnes(arr,n);
 extremePrinting(arr,n);



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