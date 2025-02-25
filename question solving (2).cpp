#include <iostream>
using namespace std;


// 1.Program to find sum of digit of a given number.
// int main(){
//     int a,b,sum;
//     cout<<"Enter first number: ";
//     cin>>a;
//     cout<<"Enter second number: ";
//     cin>>b;

//     sum=a+b;
//     cout<<"The sum of "<<a<<" + "<<b<<" = "<<sum;


//     return 0;
// }




//2. Program to calculate the sum of first n natural numbers Positive integers 1,2,3...n are known as natural numbers

// int main(){
//     int n;
//     int sum=0;
//     cout<<"Enter any positive natural numbers: ";
//     cin>>n;

//     for(int i=1;i<=n;i++){
//         sum+=i;
//     }
//     cout<<"The sum of first "<<n<<" natural number is "<<sum;

//     return 0;
// }




// 3.Program to add numbers until the user enters zero

// int main(){
//     int n;
//     int sum=0;
//   do
//   {
//     /* code */
//   } while (n!=0);

  
//     while (true)
//     {
//        cout<<"Enter number to add ulmited time but if you want to exit loop press (0): ";
//        cin>>n;

//        if (n!=0)
//        {
//         sum+=n;
//        }

//        else{
//         break;
//        }
       
//     }
//     cout<<"your final answer is "<<sum;

//     return 0;
// }




// 4.Program to create a simple calculator using c++


// int main(){
//     char n;
//     double a,b;
//     char operarion;
    
    

// while (true)
// {
//     cout<<"Enter first number: ";
//     cin>>a;
 
//     cout<<"Enter which operator do you want to use: ";
//     cin>>operarion;
 
//     cout<<"Enter second number: ";
//     cin>>b;
    
//       switch (operarion)
//       {
//       case '+':
//         cout<<a<<" + "<<b<<" =" <<a+b<<"\n";
//         break;
    
//       case '-':
//          cout<<a <<" - "<<b<<" = "<<a-b<<"\n";
//          break;
    
//       case '*':
//         cout<<a<<" *  "<<b <<" = "<<a*b<<"\n";
//         break;
    
//       case '/':
//          cout<<a<<" /" <<b <<" = "<<a/b<<"\n";
//          break;
    
//       case '%':
//          cout<<"Divide = "<<a/b<<"\n";
//          break;
    
//       default:
//          cout<<"error";
    
//         }
    
//    }

//   cout<<"Goodbye";


  
//   return 0;
//   }


    
   




//5. Find the largest number among the three numbers entered by the user //

// int main(){
//     int a,b,c;
//     cout<<"Enter first no.: ";
//     cin>>a;

//     cout<<"Enter second no.: ";
//     cin>>b;

//     cout<<"Enter Third no.: ";
//     cin>>c;

//     int greatest;

//     if (a>=b and a>=c )
//     {
//         greatest=a;
//     }

//     else if (b>=a and b>=c)
//     {
//         greatest=b;
//     }

//     else
//     {
//         greatest=c;
//     }

//     cout<<"greatest number is "<<greatest;
    

//     return 0;
// }





//6. greatest and smallest number using array

// int main(){
//     int size;
//     cout<<"Enter the size of an Array: ";
//     cin>>size;

//     int sz[size];

//     for(int i=0;i<size;i++){
//         cout<<"Store elements in array:  ";
//         cin>>sz[i];
//     }

//     for (int i = 0; i < size; i++)
//     {
//         cout<<"["<<i<<"] = "<<sz[i]<<endl;
//     }

//     int Max_number=INT_MIN;
//     int Min_number=INT_MAX;

//     for (int i = 0; i < size; i++)
//     {
//        if (sz[i]>Max_number)
//        {
//         Max_number=sz[i];
//        }
//        if (sz[i]<Min_number)
//        {
//         Min_number=sz[i];
//        }
       
       
//     }
//     cout<<"Maximum Number = "<<Max_number<<"\n";
//     cout<<"Minimum Number = "<<Min_number;
    

//     return 0;
// }




// 7.program to print table of numbers from 1 to 20 //nested for loops

// int main(){
//     for (int i = 1; i < 21; i++)
//     {
//     for (int j = 1; j < 11; j++)
//     {
//         cout<<i<<" * "<<j<<" = "<<i*j<<"\n";
//     }
//     cout<<"\n";
    
// }
//     return 0;
// }



// 8. Program to find the mean of n numbers using array

// int main(){
//     int size;
//     int sum=0;
//     int mean;
//     cout<<"Enter the size of an array: ";
//     cin>>size;

//     int arr[size];

//     for (int i = 0; i < size; i++){
//         cout<<"store elemint in array: ";
//         cin>>arr[i];
//     }

//     for (int i = 0; i < size; i++){
//         cout<<"["<<i<<"] = "<<arr[i]<<"\n";
       
//     }
//     cout<<"\n";


//     for (int i = 0; i < size; i++){
//         sum+=arr[i];
        
//     }
//     mean=sum/size;

//     cout<<"mean = "<<mean;
    
//     return 0;
// }


 
    
   
//9. Write a program to read elements in two matrices and add elements of both matrices.

// int main(){
//     int row,column;
//     cout<<"Enter no. of rows: ";
//     cin>>row;
//     cout<<"Enter no. of columns: ";
//     cin>>column;

//     int a[row][column];
//     int b[row][column];
//     int c[row][column];


//     cout<<"Enter no. in first matrix: "<<endl;
//     for(int i=0;i<row;i++){
//         for(int j=0;j<column;j++){
//             cin>>a[i][j];
//         }
//     }

    
//     cout<<"Enter no. in second matrix: "<<endl;
//     for(int i=0;i<row;i++){
//         for(int j=0;j<column;j++){
//             cin>>b[i][j];
//         }
//     }


//     cout<<" first matrix: "<<endl;
//     for(int i=0;i<row;i++){
//         for(int j=0;j<column;j++){
//             cout<<a[i][j]<<" | ";
//         }
//         cout<<endl;
//     }


//     cout<<" second matrix: "<<endl;
//     for(int i=0;i<row;i++){
//         for(int j=0;j<column;j++){
//             cout<<b[i][j]<<" | ";
//         }
//         cout<<endl;
//     }

//     cout<<"Addition of first matrix and second matrix: ";
//     for(int i=0;i<row;i++){
//         for(int j=0;j<column;j++){
//             c[i][j]=a[i][j]+b[i][j];
//             cout<<c[i][j]<<" | ";
//         }
//         cout<<endl;
            
//     }
    
//         return 0;
//     }
        




//10.  Program to calculate different discount for different Bill amount. Get price and quantity
// of a product, calculate bill amount, // if else ladder

// If user has purchased something that costs from 101 to 200, the discount will be 5%

// If user has purchased something that costs from 201 to 400, the discount will be 10%

// If user has purchased something that costs from 401 to 800, the discount will be 20%

// And if user has purchased something that costs above 800, the total discount that will
// be applied on the whole purchase amount is 25%.


// int main(){

//     cout<<"PRODUCT AVIABLE IN THE STORE"<<endl;
//     cout<<"---------------------****-------------------------"<<endl;
//     string product[10]={"MILK","YOGURT","CHICKEN","PORK","FISH","JUICE","SALT","RICE","PASTA","COFFEE"};
//     for(int i=0;i<10;i++){
//         cout<<i<<". " <<product[i]<<"   ";
//         cout<<i<<". " <<product[i]<<"   ";
//     }
//     cout<<"  "<<"\n";

        

   
    
//     string item;
//     int price;
//     int total=0;
//     int percentage;
//     while (true)
//     {   cout<<endl;
//         cout<<"Add the product in your cart ! and Enter (q) to finish shopping: ";
//         cin>>item;

//         if (item=="q"){
//             break;
//         }
//         else{
//             cout<<"Enter the price of "<<item<<":";
//             cin>>price;

//         }
//         total+=price;
//       }
    
    
//         cout<<"----------------------Your cart---------------------"<<endl;
//         if (total>=100 && total<=200 ){
           
//             cout<<"you got 5% discount"<<endl;
//             percentage=((5*total)/100);
//             cout<<"final bill= "<<total-percentage;
//         }

//         else if (total>=201 && total<=300){
            
//             cout<<"You got 10% discount"<<endl;
//             percentage=((10*total)/100);
//             cout<<"final bill= "<<total-percentage;

            
//         }
//         else if (total>=301 && total<=600){
            
//             cout<<"You got 15% discount"<<endl;
//             percentage=((15*total)/100);
//             cout<<"final bill= "<<total-percentage;
//         }
//         else if(total>601){
            
//             cout<<"You got 25% dicount"<<endl;
//             percentage=((25*total)/100);
//             cout<<"final bill= "<<total-percentage;
//         }
//         else{
//             cout<<"Final bill= "<<total;
//         }

//         cout<<endl;
//        cout<<"----Thank you for visiting our store. Have a nice day!😊";
        
        

    
//         return 0;
//     }
       
        




        
        
        
              
        
        
        

        
   
    

    

  
  
    

  

      

  
    




   