//----------------- Full Pyramid --------------
//      *
//     * *
//    * * *
//   * * * *
//  * * * * *
// * * * * * * 
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    // for(int row=0; row<n; row=row+1) {
    //     // for spaces
    //     for(int col=0; col<n-row-1; col=col+1){
    //         cout<<" ";
    //     }
    //     // for star
    //     for(int col=0; col<row+1; col=col+1){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

// ---------------- Inverted full pyramid -------------

//  for(int row=0; row<n; row=row+1){
//     // for spaces
//     for(int col=0; col<row; col=col+1){
//         cout<<" ";
//     }
//     // for star
//     for(int col=0; col<n-row; col=col+1){
//         cout<<"* ";
//     }
//     cout<<endl;
//  }

// ----------------- Solid Diamond ----------------
//      *
//     * *
//    * * *
//    * * *
//     * *
//      * 
// form abobe we can print solid diamond easily i.e. full pyramid + inverted full pyramid =   solid diamond
// first we print full pramid 
// for(int row=0; row<n; row=row+1){
//     //for spaces 
//     for(int col=0;col<n-row-1; col=col+1){
//         cout<<" ";
//     }
//     //for stars
//     for(int col=0; col<row+1; col=col+1){
//         cout<<"* ";
//     }
//     cout<<endl;
// }
// // then we print inverted full pyramid 
// for(int row=0; row<n; row=row+1){
//     //for spaces 
//     for(int col=0; col<row; col=col+1){
//         cout<<" ";
//     }
//     // for stars 
//     for(int col=0; col<n-row; col=col+1){
//         cout<<"* ";
//     }
//     cout<<endl;
// }

//--------------------- Hollow diamond ------------------------
//       *
//     *   *
//    *     *
//   *       *
//   *       *
//    *     *
//     *   *
//       *
 
 //first we print half of hollow diamond then we print inverted half of the hollow diamond
// for(int row =0; row<n; row=row+1){
//     // outside spaces
//     for(int col=0; col<n-row-1; col=col+1){
//         cout<<" ";
//     }
//     //stars
//     for(int col=0; col<2*row+1; col=col+1){
//         //if first and last character or last character
//         if(col==0 || col==2*row){
//             //first and last character
//             cout<<"*";
//         }
//         else{
//             cout<<" ";
//         }
//     }
//     cout<<endl;
// }
// // from here code of inverted half of the hollow diamond is written 
//  for(int row=0; row<n; row=row+1){
//     //for outer spaces 
//   for(int col=0; col<row; col=col+1){
//     cout<<" ";
//   }
//   //for stars
//   for(int col=0; col<2*n-2*row-1; col=col+1){
//     //if first and last character
//     if(col==0 || col==2*n-2*row-2){
//         cout<<"*";
//     }
//     else{
//         cout<<" ";
//     }
//   }
//   cout<<endl;
//  }

// ----------------- Flipped solod diamomnd --------------
// *** ***
// **   **
// *     *
// *     *
// **   **
// *** ***
// for(int row=0; row<n; row=row+1){
//         for(int col=0; col<n-row; col=col+1){
//             cout<<"*";
//         }
//         for(int col=0; col<2*row+1; col=col+1){
//             cout<<" ";
//         }
//         for(int col=0; col<n-row; col=col+1){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(int row=0; row<n; row=row+1){
//         for(int col=0; col<row+1; col=col+1){
    //         cout<<"*";
    //     }
    //     for(int col=0; col<2*n-2*row-1; col=col+1){
    //         cout<<" ";
    //     }
    //     for(int col=0; col<row+1; col=col+1){
    //         cout<<"*";
    //     }
    //     cout<<endl; 
    // }
 
//  --------------------- fancy pattern -------------------
// 1
// 2*2
// 3*3*3
// 4*4*4*4
// 4*4*4*4
// 3*3*3
// 2*2
// 1
// for(int row=0; row<n; row=row+1){
//     for(int col=0; col<row+1; col=col+1){
//         cout<<row+1;
//         if(col!=row){ // for printing stars between integer col!=row 
//             cout<<"*";
//         }
//     }
//     cout<<endl;
// }

// for(int row=0; row<n; row=row+1){
//     for(int col=0; col<n-row; col=col+1){
//         cout<<n-row;
//         if(col!=n-row-1) // for printing star between integer  
//         cout<<"*";
//     }
//     cout<<endl;
// }

// -----------------------  
// 1
// 121
// 12321
// 1234321
// 123454321

//yha pe phle numeric pyramid print ho rha usske baad jo last digit hai row no.1 se usse reverse order me print ho rha 

// for(int row=0; row<n; row=row+1){
//     for(int col=0; col<row+1; col=col+1){
//         cout<<col+1;
//     }
//     for(int col=row; col>=1; col=col-1){
//         cout<<col;
//     }
//     cout<<endl;
// }

// ---------------------- Another example -----------------
// 1
// 2 3
// 3 4 5
// 4 5  6 7
   for(int row=0; row<n; row=row+1){
    // har row ke andar counting  row+1 se start ho rhi hai and row+1 element bhi print ho rha hai
    // int start=row+1;
    for(int col=0; col<row+1; col=col+1){
        // ya phir direct row+col+1 se bhi print kra skte hai
        cout<<row+col+1<<" ";
        // cout<<start<<" ";
        // start=start+1;
    }
    cout<<endl;
   }

// ------------------- Numeric full pyramid --------------
//           1
//         2 3 2
//       3 4 5 4 3
//     4 5 6 7 6 5 4
//   5 6 7 8 9 8 7 6 5

//  for(int row=0; row<n; row=row+1){
//    //first we print spaces before start of every digit
//    for(int col=0; col<n-row-1; col=col+1){
//     cout<<" ";
//    }
//    //then we print numbers
// //    int intialise=row+1;
//    for(int col=0; col<row+1; col=col+1){
//     cout<<row+col+1;
//     // cout<<intialise;
//     // intialise=intialise+1;
//    }
//     // now we print reverse counting 
//     int start=2*row;
//     for(int col=0; col<row; col=col+1){ 
//     cout<<start;
//     start=start-1;  
//      }
//    cout<<endl; 
//  } 

// -------------------------------

for(int row=0; row<n; row=row+1){
    //first we print spaces
    for(int col=0; col<n-row-1; col=col+1){
        cout<<" ";
    }
    // then we print the  first and last row of the pattern
    int start=1;
    for(int col=0; col<2*row+1; col=col+1){
        if(row==0 || row==n-1){
            // for first and last row agar col no. is divisble by 2 then print numbers otherwise spaces means even positions pe numbers print hoga
            
            if(col%2==0){
                cout<<start;
                start=start+1;
            }

            else{
                cout<<" ";
            }
        }
        // bache hur sare rows me col==0 me one print hoga and last col me row+1 
        else{
            if(col==0){
                cout<<1;
            }
            else if(col==2*row){
                cout<<row+1;
            }
            else{
                cout<<" ";
            }
        }
    }
    cout<<endl;
}




}