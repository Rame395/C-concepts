#include <iostream>
using namespace std;

/*1.
*
**
***
****
*****
******
*******
********
     */

 int main(){
     for(int i=1;i<=8;i++){
         for(int j=1;j<i;j++){
             printf("*");
         }
         printf("\n");
     }

     return 0;
 }



/*2.
********
*******
******
*****
****
***
**
*
*/

 int main(){
     for(int i=1;i<=8;i++){
         for(int j=8;i<=j;j--){
             printf("f");
         }
         printf("\n");
     }
     return 0;
 }



/*3.
    
          *
         **
        ***
       ****
      *****
     ******
    *******
   ********
  *********
 **********

*/

 int main(){
     for(int i=1;i<=11;i++){
         for(int j=i;j<11;j++){
             printf(" ");
         }
        
         for(int k=1;k<=i;k++){
             printf("*");
         }
         printf("\n");

     }
     return 0;
 }
    


/*4.
*******
*******
*******
*******
*******
*******
*******
*******
*******
*/

 int main(){
     for(int i=1;i<=9;i++){
         for(int j=1;j<10;j++){
             printf("*");
         }
         printf("\n");

     }
     return 0;
 }
      

/*5.
*********
*       *
*       *
*       *
*       *
*       *
*       *
*       *
*********
*/
    
 int main(){
     for(int i=1;i<=9;i++){
         for(int j=1;j<=9;j++){
             if(i==1||i==9||j==1||j==9){
                 printf("*");
             }
             else{
                 printf(" ");
             }
         }
         printf("\n");
     }
     return 0;
 }




/*6.

         *           
       * * *        
     * * * * *       
   * * * * * * *     
 * * * * * * * * *
*/

 int main(){
     for(int i=1;i<=5;i++){
         for(int j=i;j<5;j++){
             cout<<" ";
         }
         for(int k=1;k<2*i;k++){
             cout<<"*";
         }
         cout<<"\n";

     }
     return 0;
 }





/*7.
         *           
       * * *        
     * * * * *       
   * * * * * * *     
 * * * * * * * * *
   * * * * * * *
     * * * * *
       * * *
         *
 
*/




 int main(){
     for(int i=1;i<=5;i++){
         for(int j=i;j<5;j++){
             cout<<" ";
         }
         for(int k=1;k<2*i;k++){
             cout<<"*";
         }
         cout<<"\n";
        
     }
     // cout<<"\n";
     for(int l=1;l<=4;l++){
         for(int m=1;m<=l;m++){
             cout<<" ";
         }
         for(int o=8;o>=2*l;o--) {
             cout<<"*";
         }
         cout<<"\n";
     }
     return 0;
 }



/* 8.     *
      * *
   *  * *
*  *  * *
   *  * *
      * *
        * 
*/ 




 int main(){
   for(int i=1;i<=4;i++){
     for(int j=i;j<=4;j++){
       cout<<" ";
     }
     for(int k=1;k<=i;k++){
       cout<<"*";
     }
     cout<<"\n";
    
   }
   for(int l=1;l<=3;l++){
     for(int m=0;m<=l;m++){
       cout<<" ";
     }
     for(int n=3;n>=l;n--){
       cout<<"*";
     }
     cout<<"\n";
   }
   return 0;
 }
