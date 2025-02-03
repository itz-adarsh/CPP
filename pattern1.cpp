#include<iostream>
using namespace std;
int main(){

//--------------- Example 1 ----------------------
  // print * * * * *
  //       * * * * *
 //        * * * * *
  // //outer loop - row observe
  //   for(int row=0; row<3; row=row+1){
  //   //inner loop - col observe
  //       for(int col=0; col<5; col=col+1){
  //           cout<<"* ";
  //       }
  //       cout<<endl;
  //   }
// ------------------------------------------------- 

// --------------- Example 2 ---------------------
// print square rectangle
// int n;
// cin>>n;
//  for(int row=0; row<n; row += 1){   //row += 1 is same as row=row+1
//     for(int col=0; col<n; col += 1){
//         cout<<"* ";
//     }
//     cout<<endl;
//  }

//---------------- Example 3 -------------------
//  Print  Hollow reactangle * * * * * *
//                           *         *
//                           * * * * * *    

  //  for(int row=0; row<6; row=row+1){
  //   // first row and last row print 5 star
  //   if(row == 0 || row == 5){
  //    for(int col=0; col<5; col=col+1){
  //     cout<<"* ";
  //      }
  //     }
  //     else{
  //       //remaianing middle rows
  //       //first star
  //       cout<<"* ";
  //       //spaces
  //       for(int i=0; i<3; i=i+1){
  //         cout<<"  ";
  //       }
  //       //last star
  //       cout<<"* ";
  //     }
  //     cout<<endl;
  //  }

// --------------------- Another example of  hollow rectangle ---------------
   
   for(int row=0; row<6; row=row+1){
    if(row==0 || row==5){
      for(int col=0; col<5; col=col+1){
        cout<<"* ";
      }
    }
    else{
      cout<<"* ";
      for(int i=0; i<3; i=i+1){
        cout<<"  ";
      }
      cout<<"* ";
    }
    cout<<endl;
   }   


// ------------------ Generalising hollow rectangle ------------

  // int rowCount,colCount;
  // cin>>rowCount;
  // cin>>colCount;
  // for(int row=0; row<rowCount; row=row+1){
  //   if(row==0 ||row==rowCount-1){
  //     for(int col=0; col<colCount; col=col+1){
  //       cout<<"* ";
  //     }
  //   }
  //   else{
  //     cout<<"* ";
  //     for(int i=0; i<colCount-2; i=i+1){
  //       cout<<"  ";
  //     }
  //     cout<<"* ";
  //   }
  //   cout<<endl;
  // }

// ----------------- Half pyramid -----------------------
// *
// * *
// * * *
// * * * *
// * * * * *
// * * * * * *

// int n;
// cin>>n;
// for(int row=0; row<n; row=row+1){
//   for(int col=0; col<row+1; col=col+1){
//     cout<<"* ";
//   }
//   cout<<endl;
// }

//-------------------- Inverted Half Pyramid -------------------  
// int n;
// cin>>n;
// for(int row=0; row<n; row=row+1){
//   for(int col=0; col<n-row; col=col+1){
//     cout<<"* ";
//   }
//   cout<<endl;
// }

// --------------- Numeric Half Pyramid ---------------
// 1
// 12
// 123
// 1234
// 12345

// int n;
// cin>>n;
// for(int row=0; row<n; row=row+1){
//   for(int col=0; col<row+1; col=col+1){
//     cout<<col+1;
//   }
//   cout<<endl;
// }

// ------------------- Inverted Numeric Half Pyramid ------------

// int n;
// cin>>n;
// for(int row=0; row<n; row=row+1){
//   for(int col=0; col<n-row; col=col+1){
//     cout<<col+1;
//   }
//   cout<<endl;
// }

}