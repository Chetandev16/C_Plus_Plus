#include<iostream>

using namespace std;

int main()
{
    char a[100];
    cin>>a;
    int counter=0;

    int length=0;
    for(int i=0;a[i]!='\0';i++)
    {
        length++;
    }
    int check =length;
    cout<<length;

    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i] == a[length-1])
        counter++;
       
        length--;
    }
    cout<<counter<<endl;
    if(counter == check)
    cout<<"palindrome";
    else
    cout<<"not palindrome";
    return 0;
}