#include <iostream> 
#include<cmath>
#include<iomanip>


 using namespace std; 

int main() 

{ 

   double abe,ree,pere,fnum;
   double num1;
   cout<<"enter exact value ";
   cin>>num1;
   

   fnum = round(num1);
   cout<<"absolute value "<<fnum<<endl;
   //cout<<"absolute value- "<<fixed<<setprecison(2)<<fnum;

   if(num1>fnum)
   abe= num1 - fnum; 
   else
   abe = fnum-num1;


   ree=abe/num1; 
   pere=ree*100; 
   cout<<"absolute error is "<<abe<<endl; 
   cout<<"relative error is "<<ree<<endl; 
   cout<<"percentage error is "<<pere<<"%"<<endl; 
   
   
   return 0;
} 