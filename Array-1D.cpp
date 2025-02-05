#include<iostream>
#include<limits.h>// for INT_MAX
using namespace std;
// int main(){
    // to know the memory address of the arr
    // int arr[5];
    // cout<<arr<<endl; 
    // cout<<&arr<<endl;

    // accessing the array element
    // int arr[5]={1,2,3,4,5};
    // cout<<arr[0]<<endl;
    // cout<<arr[1]<<endl;
//---------------------------------------------------------------------------------------------
    // // intialising array using loop 
    // int arr[5];
    // // int size=5;
    // cout<<"Enter the values in the array:"<<endl;
    // for(int index=0; index<5; index++){
    //     cin>>arr[index];
    // }

    // // // for printing all values;
    // cout<<"Printing the values in the array:"<<endl;
    // for(int index=0; index<5; index++){
    //     cout<<arr[index]<<endl;
    // }

//---------------------------- Question1 -----------------------------------------------------
// // take 5 elements input into array and print their doubles.

// // first we declare an array of any size for e.g. 500 
// int arr[500];
// // taking user input for numbers of elements for array
// int n;
// cout<<"How many numbers you want to add in array:";
// cin>>n;
// // taking user input for elements of array
// cout<<"Enter all elements:";
// for(int i=0; i<n; i++){
//     cin>>arr[i];
// }
// //printig the double value of the elements
// cout<<"Double of input value:"<<endl;
// for(int i=0; i<n; i++){
//     cout<<arr[i] * 2<<endl;
// }
//--------------------------------------------------------------------------------------------
// //intialising or updating all the elements of  array by 1
// int arr[5]={1,3,5,6,9};
// for(int i=0; i<5; i++){
//     arr[i]=1;
// }
// for(int i=0; i<5; i++){
//     cout<<arr[i]<<" ";
// }

//----------------------------------------
// int arr[5]={1};
// for(int i=0; i<5; i++){
//     cout<<arr[i];
// }

//--------------------------------------
//it will return garbage value
// int arr[10];
// for(int i=0; i<10; i++){
//     cout<<arr[i]<<endl;
// }

//----------------------------------------
// //initialising array by 0
// int arr[5]={0};
// for(int i=0; i<5; i++){
//     cout<<arr[i]<<endl;
// }

//------------------------------------------- pass by reference ---------------------------------
// Example 1

// void printArray(int arr[], int size){
//     for(int i=0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// void inc(int arr[], int size){
//     arr[0]=arr[0]+10;
//     cout<<"print modifies array1"<<endl;
//     printArray(arr,size);
// }
// int main(){
//     int arr[]={5,6};
//     int size=2;
//     inc(arr,size);
//     cout<<"Print modifies array2"<<endl;
//     printArray(arr,size);
    
// }

//----------------- Example 2 ---------------------------------------------
// void changeArr(int arr[], int size){
//     cout<<"In function\n";
//     for(int i=0; i<size; i++){
//         arr[i]=2*arr[i];
//     }
//     for(int i=0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     int arr[]={1,2,3};
//     changeArr(arr,3);
//     cout<<"In main\n";
//     for(int i=0; i<3; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

//------------------------------ Linear Search In Array -----------------------------------
//Linear search is a simple searching algorithm used to find an element in a list or array. It checks each element of the list one by one until the desired element (key) is found or the end of the list is reached.


//--------------- Example 1 ------------------------------------
// int main(){
//     int arr[]={1,2,2,4,5,6,7,8,};
//     int size=8;
//     int key=2;
//     bool flag=0;   //flag: A boolean variable initialized to 0 (or false), used to indicate whether the key is found.
//     for(int i=0; i<size;i++){
//         if(arr[i]==key){
//            flag=1;
//            break;
//         }
//      }
//      if(flag){
//          cout<<"Present"<<endl;
//      }
//      else{
//          cout<<"Absent"<<endl;
//      }
//     }




//---------------- Example 2 -------------------

//   bool find(int arr[], int size, int key){
//       // linear search
//       for(int i=0; i<size; i++){
//         if(arr[i]==key)
//         return true;
//       }
//       // not present 
//       return false;
//   }
  

//   int main(){
//   int arr[5]={1,3,5,7,8};
//   int size=5;
//   cout<<"Enter the key to find"<<endl;
//   int key;
//   cin>>key;
  
//   if(find(arr,size,key)){
//     cout<<"Found"<<endl;
//   }
//   else{
//     cout<<"not Found";
//   }
//   }
  

//--------------------------------------------------------------------------
// find the number of zeros and ones in an array

// int main(){
//     int arr[]={0,1,0,0,1,1,2,2,0,0,2,1,0,1,0,1,0};
//                      // int arr[17];
//     int size=17;
//     int numZero=0;
//     int numOne=0;
//     int numTwo=0;
//                   // by taking user input
//                  // cout<<"Enter the elements of array:";
//                 // for(int i=0; i<size; i++){
//                //     cin>>arr[i];
//               // }
//     for(int i=0; i<size; i++){
//         if(arr[i]==0){
//             numZero++;
//         }
//         if(arr[i]==1){
//             numOne++;
//         }
//         if(arr[i]==2){
//             numTwo++;
//         }
//     }
//     cout<<"Number of zeros:"<<numZero<<endl;
//     cout<<"Number of ones:"<<numOne<<endl;
//     cout<<"Number of twos:"<<numTwo<<endl;
// }

// -----------------------------------------------------------------------------------------------
// find the maximum number of array
/*
int main(){
    int arr[]={2,8,9,15,48,25};
    int size=6;
    int max = INT_MIN;  // INT_MIN is used to initialize the max variable. It represents the smallest possible integer value, ensuring any element in the array will be larger initially.
    int min = INT_MAX; // INT_MAX is used to initialize the min variable. It represents the largest possible integer value, ensuring any element in the array will be smaller initially.
    for(int i=0; i<size; i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
        }
    
    cout<<"Max element is:"<<max<<endl;
    cout<<"Min element is:"<<min<<endl;
}
*/

// same question using function
/*
int findMax(int arr[], int size){
    int max=INT_MIN;
    for(int i=0; i<size; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int findMin(int arr[], int size){
    int min=INT_MAX;
    for(int i=0; i<size; i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
int main(){
    int size;
    cout<<"Enter the number of elements:";
    cin>>size;
    int arr[size];
    cout<<"Enter"<<" "<<size<<" "<<"elements"<<endl;
     for(int i=0; i<size; i++){
         cin>>arr[i];
     }
    int maxElement=findMax(arr,size);
    int minElement=findMin(arr,size);   
    cout<<"Maximum element is "<<maxElement<<endl;
    cout<<"Minimum element is "<<minElement<<endl;    
}

*/



//-----------------------------------------------------------------------------------------------
//--------------------- extreme print in array ---------------
/*
int main(){
    int arr[8]={10,20,30,40,50,60,70,80};
    int size = 8;
    int start = 0;
    int end = size-1;
    while(true){
        if(start>end)
        break;
        if(start==end){
            cout<<arr[start]<<" ";
        }
        else{
        cout<<arr[start]<<" ";
        cout<<arr[end]<<" ";
        }
        start++;
        end--;
    }
}
*/

//--------------------------------------------------------------------------------------------
// Reverse an array

int main(){
    int arr[7] = {10,20,30,40,50,60,70};
    int size = 7;
    int start = 0;
    int end = size-1;
    // Reverse the array using two-pointer technique
    while(start<=end){
        swap(arr[start],arr[end]);//Swap elements at start and end
        start++; // Move start forward
        end--;   // Move end backward
    }
    // Print the reversed array
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}




