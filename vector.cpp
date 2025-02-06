// Vector
#include<iostream>
#include<vector>
using namespace std;
// int main(){
    // //create vector
    // vector<int> arr;
    // int ans = (sizeof(arr)/sizeof(int)); // it will give compiler dependent value
    // cout<<ans<<endl;
    // cout<<"Initial size: "<<arr.size()<<endl;
    // cout<<"Initial capacity: "<<arr.capacity()<<endl;

//     //insert elements

    //   arr.push_back(5);
    //   arr.push_back(6);
    //   arr.push_back(7);
    //   arr.push_back(8);
    // // print
    // cout<<"After inserting elements: ";
    // for(int i=0; i<arr.size(); i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;

    // cout<<"size after insertion: "<<arr.size()<<endl;
    // cout<<"capacity after insertion: "<<arr.capacity()<<endl;



    // // remove or delete elements
    // arr.pop_back();
    // arr.pop_back();
    // // print
    // cout<<"After deleting some elements: ";
    // for(size_t i=0; i<arr.size(); i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    // cout<<"size after deletion: "<<arr.size()<<endl;
    // cout<<"capacity after deletion: "<<arr.capacity()<<endl;


    // //-------------------------------------------------------------------------------------------------


    // vector<int> brr(10);// in this case vector will automatically initialise with 0 and print 0 for 10 time.
    // for(int i=0; i<10; i++){
    //     cout<<brr[i]<<" ";
    // }
    // cout<<endl;


    // vector<int> crr(10,-1); // in this case vector will print -1 for 10 times. we can take any random positve and negative value on the place of -1
    // for(int i=0; i<10; i++){
    //     cout<<crr[i]<<" ";
    // }

    
    // by taking user input

    // int n;
    // cout<<"Enter the value: ";
    // cin>>n;
    // vector<int> brr(n,2);
    // cout<<"Size of b "<<brr.size()<<endl;
    // cout<<"Capacity of b "<<brr.capacity()<<endl;
    // cout<<"Printing the brr: ";
    // for(size_t i=0; i<brr.size(); i++){
    //     cout<<brr[i]<<" ";
    // }
    // cout<<endl;

    // brr.pop_back();
    // brr.pop_back();
    // cout<<"Printing after popback";
    // for(int i=0; i<brr.size(); i++){
    //     cout<<brr[i]<<" ";
    // }
    // cout<<endl;

    // cout<<"size after popback: "<<brr.size()<<endl;
    // cout<<"capacity after popback: "<<brr.capacity()<<endl;

   // //-----------------------------------------------------------------------
//     cout<<"Printing crr"<<endl;
//     vector<int> crr{10,20,30,40};
//     for(int i=0; i<crr.size(); i++){
//         cout<<crr[i]<<" ";
//     }
//     cout<<endl;

//     cout<<"Vector is empty or not "<<crr.empty()<<endl;// used to check whether vector is empty or not

//     vector<int> drr;
//     cout<<"Vector is empty or not "<<drr.empty()<<endl;
// }

////----------------------------------------------------------------------------------------------

// printing unique elements

// int findUnique(vector<int> arr){
//     int ans = 0;
//     for(int i=0; i<arr.size(); i++){
//         ans = ans ^ arr[i];
//     }
//     return ans;
// }

// int main(){
//     int n;
//     cout<<"Enter the size of array: "<<endl;
//     cin>>n;
//     vector<int> arr(n);
//     cout<<"Enter the elements: "<<endl;;
//     for(int i=0; i<arr.size(); i++){
//         cin>>arr[i];
//     }
//     int uniqueElement = findUnique(arr);
//     cout<<"Unique element is "<<uniqueElement<<endl;

//     return 0;
// }

////---------------------------------------------------------------------------
// union of two array
// this will not work for duplicate elements i.e. it will print all duplicate elements 2 times and also will not sort the answer
// int main(){
//     int a[]={1,2,3,4,5};
//     int sizea = 5;
//     int b[]={3,4,7};
//     int sizeb=3;
//     vector<int> ans;
//     // pushing all elements of a in ans
//     for(int i=0; i<sizea; i++){
//         ans.push_back(a[i]);
//     }
//     // pushing all elements of b in ans
//     for(int i=0; i<sizeb; i++){
//         ans.push_back(b[i]);
//     }
//     // printing all elements afer union
//     for(int i=0; i<ans.size(); i++){
//         cout<<ans[i]<<" ";
//     }
// }

// hw print union without duplicate value

////-----------------------------------------------------------------------------------------------
// intersection of two array

// int main(){
//     vector<int> arr{1,2,3,3,4,6,8};
//     vector<int> brr{3,3,4,9,10};
//     vector<int> ans;
//     for(int i=0; i<arr.size(); i++){
//         int element = arr[i];
//         for(int j=0; j<brr.size(); j++){
//             if(element==brr[j]){
//             brr[j]=-1; // this will help during duplicate value problem i.e it will work in every case if positve and negative both values are given then use INT_MIN o place of random value -1, -2, 2; 
//             ans.push_back(element);
//           } 
//         }
//     }
//        for(auto value: ans){
//         cout<<value<<" ";
//        }
//     // for(int i=0; i<ans.size(); i++){
//     //     cout<<ans[i]<<" ";
//     // }
// }


//----------------------------------------------------------------------------------------------------------------------

// pair sum problem

// int main(){
//     int count = 0; 
//     int sum;
//     cin>>sum;
//     vector<int> arr{1,3,5,7,2,4,6};
//     for(int i=0; i<arr.size(); i++){
//         for(int j=i+1; j<arr.size(); j++){
//             int value = arr[i]+arr[j];
//             if(value==sum){
//                 cout <<"Pair found: "<<"(" << arr[i] << ", " << arr[j] << ")" << endl;
//                 count++;
//             }
//         }
//     }
//     cout<<"Number of pairs: "<<count<<endl;
// }

// for triplet sum...

// int main(){
//     int count=0; 
//     int sum;
//     cin>>sum;
//     vector<int> arr{10,20,30,40,50};
//     for(int x=0; x<arr.size(); x++){
//         for(int y=x+1; y<arr.size(); y++){
//             for(int z=y+1; z<arr.size(); z++){
//                 int value = arr[x]+arr[y]+arr[z];
//                 if(value==sum){
//                     cout<<"("<<arr[x]<<","<<arr[y]<<","<<arr[z]<<")"<<endl;
//                     count++;
//                 }
//             }
//         }
//     }
//     cout<<"Number of triplets: "<<count<<endl;
// }

//--------------------------------------

int main(){
    vector<int> arr{0,1,0,1,1,0,1,0,1,1};
    int start = 0;
    int end = arr.size()-1;
    int i = 0;
    while(i != end){
        if(arr[i]==0){
            swap(arr[start],arr[i]);
                start++;
                i++;
            }
        else{
            swap(arr[end],arr[i]);
            end--;
            }
        }
        for(size_t i=0; i<arr.size(); i++){
            cout<<arr[i]<<" ";
        }
    }

