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
// --single no.---------------------------------------
int findUniqueNo(int arr[],int n) {
    int ans = 0;
    for(int i=0; i<n; i++) {
        ans = ans ^ arr[i];
    }
    return ans;
}

// --------------------------0's , 1's , 2's----------------------------------------------
int sortNo(int arr[], int n) {
    int i=0; 
    int j=0;
    int k=n- 1;
    while(j<=k) {
        if(j==1) {
            j++;
        }
        else if(j==2) {
            swap(arr[j], arr[k]);
            k--;
        }
        else{
            swap(arr[j], arr[i]);
            i++;
            j++;
        }
    }
}
// ------------------Print all Pairs----------------
void printAllPairs(int arr[],int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout<<arr[i]<<","<<arr[j]<<endl;
        }
    }
}
// ------------------Two pair sum-----------------
void pairSum(int arr[],int n) {
    int count = 0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n;j++) {
            for(int k=0; k<n;k++){
               cout<<arr[i]<<" "<<arr[j]<<" "<<arr[j]<<endl;
               count++;

            }
          
            }
           
        };
        cout<<count<<endl;
    }
    
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int count1 = 0;
        int maj1 = NULL;

        int count2 = 1;
        int maj2 = NULL;
    }
};

int main() {
   int arr[] = {10,20,30,40,50,60};
    int n = 6;
  pairSum(arr,n);
    // bool ans =  pairSum(arr,n,800);
    // if(ans == true) {
    //     cout<<"pair Found"<<endl;
    // }
    // else{
    //     cout<<"pair Not found"<<endl;
    // }
  
    // printAllPairs(arr,n);
    //  int ans = sortNo(arr,n);
    //  cout<<ans<<endl;
//    int ans =  findUniqueNo(arr,n);
//    cout<<"Unique no is : " <<ans<<" ";
// printZeroesAndOnes(arr,n);
//  extremePrinting(arr,n);



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