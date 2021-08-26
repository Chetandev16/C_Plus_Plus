#include<iostream>

using namespace std;

int main()
{
   int n;
   cin>>n;
   cin.ignore();
   char a[n+1];
   cin.getline(a, n);
   cin.ignore();
   int maxlen=0, currlen=0,i=0;
   while(true)
   {
     if(a[i]==' ' || a[i]=='\0')
     {
         if(currlen>maxlen)
         maxlen = currlen;
      currlen=0;  
     }
     else
     currlen++;
     if(a[i]=='\0')
     {
         break;
     }
     i++;
   }
   cout<<maxlen;
  return 0;
}
