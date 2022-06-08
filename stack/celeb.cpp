// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    bool knows(int a,int b,vector<vector<int>> &arr, int n){
        if(arr[a][b] == 1){
            return true;
        }else{
            return false;
        }
    }
    
    bool isCelebcol(vector<vector<int>> &M, int n, int i){
       int c=0;
       for(int j=0;j<n;j++){
           if(M[j][i] == 1){
               c++;
           }
       }
       if(c != n-1) return false;
       
       return true;
       
    }
    
    bool isCelebrow(vector<vector<int>> &M, int n, int index){
        for(int i=0;i<n;i++){
            if(M[index][i] != 0){
                return false;
            }
        }
        
        return true;
    }
    
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
        // approach 1;
        // bool check;
        // for(int i=0;i<n;i++){
        //     check = false;
        //     for(int j=0;j<n;j++){
        //         if(M[i][j] !=0){
        //             check = true;
        //             break;
        //         }
        //     }
        //     if(check == false){
        //         // cout<<"xd";
        //         bool ans = isCelebcol(M,n,i);
        //         if(ans){
        //             return i;
        //         }
        //     }
        // }
        
        // return -1;
        stack<int> s;
        for(int i=0;i<n;i++){
            s.push(i);
        }
        
        //step 2
        while(s.size() > 1){
            int first = s.top();
            s.pop();
            int second = s.top();
            s.pop();
            
            if(knows(first,second,M,n)){
                s.push(second);
            }else{
                s.push(first);
            }
        }
        
        bool ansCol = isCelebcol(M,n,s.top());
        bool ansRow = isCelebrow(M,n,s.top());
        // cout<<ansCol<<ansRow;
        if(ansCol && ansRow){
            return s.top();
        }
        
        return -1;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}
  // } Driver Code Ends
