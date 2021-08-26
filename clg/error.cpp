#include <iostream> 

 using namespace std; 

int main() 

{ 

   double x,y,abe,ree,pere; 
   cout<<"enter exact value- ";
   cin>>x; 
   cout<<"enter approax value- ";
   cin>>y; 


   abe=x-y; 
   ree=abe/x; 
   pere=ree*100; 

   cout<<"absolute error is "<<abe<<endl; 
   cout<<"relative error is "<<ree<<endl; 
   cout<<"percentage error is "<<pere<<"%"<<endl;

   return 0; 

} 