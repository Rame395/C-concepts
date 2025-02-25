#include <iostream>

using namespace std;


 // Two dimensional array
 int main(){
     int row,column;
     cout<<"Enter no. of rows:";
     cin>>row;
     cout<<"Enter no. of columns:";
     cin>>column;

     int two_dim[row][column];
     for (int i = 0; i < row; i++){
         for(int j=0;j<column;j++){
             cout<<"Enter element at "<<"["<<i<<"]"<<"["<<j<<"]: ";
             cin>>two_dim[i][j];
         }
     }
     for(int i=0;i<row;i++){
         for(int j=0;j<column;j++){
             cout<<two_dim[i][j]<<" | ";
        }
         cout<<"\n";
     }
    
     return 0;
 }
           
    

// 2. three dimensional array
 int main(){
     int row,column,layer;
     cout<<"Enter no. of layer: ";
     cin>>layer;
     cout<<"Enter no. of row: ";
     cin>>row;
     cout<<"Enter no. of column: ";
     cin>>column;

     int three_dim[layer][row][column];
     for(int i=0;i<layer;i++){
         for(int j=0;j<row;j++){
             for(int k=0;k<column;k++){
                 cout<<"Enter element at ["<<i<<"] ["<<j<<"] ["<<k<<"] :" ;
                 cin>>three_dim[i][j][k];
             }
         }
     }

     cout<<"The 3D array is:";
     for(int i=0;i<layer;i++){
         cout<<"layer no. "<<i+1<<"\n";
         for(int j=0;j<row;j++){
             for(int k=0;k<column;k++){
                 cout<<three_dim[i][j][k]<<" | ";
             }
             cout<<"\n";
         }
         cout<<"\n";
     }

 
    
     return 0;
 }
