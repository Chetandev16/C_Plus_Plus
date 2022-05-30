#include <bits/stdc++.h>
using namespace std;

class Solution{
public:

   bool isSafe(int row,int col,vector<vector<int>> &board, int n){
       int temprow = row;
       int tempcol = col;
       
       while(col>=0 && row>=0){
           if(board[row][col] == 1) return false;
           col--;
           row--;
       }
       row = temprow;
       col = tempcol;
       
       while(col>=0){
           if(board[row][col] == 1) return false;
           col--;
       }
       col = tempcol;
       
       while(row<n && col>=0){
           if(board[row][col] == 1) return false;
           row++;
           col--;
       }
       
       return true;
   }

    void solve(vector<vector<int>> &fans,vector<vector<int>> &board, int n, int col){
        if(n == col){
            vector<int> temp;
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(board[i][j] == 1){
                        temp.push_back(j+1);
                    }
                }
            }
            fans.push_back(temp);
            return;
        }
        
        for(int row=0;row<n;row++){
            if(isSafe(row,col,board,n)){
                board[row][col] = 1;
                solve(fans,board,n,col+1);
                board[row][col] = 0;
            }
        }
    }
 
    vector<vector<int>> nQueen(int n) {
 
        vector<vector<int>> fans;
        vector<vector<int>> board(n, vector<int>(n,0));
        solve(fans,board,n,0);
        sort(fans.begin(), fans.end());
        return fans;
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<vector<int>> ans = ob.nQueen(n);
        if(ans.size() == 0)
            cout<<-1<<"\n";
        else {
            for(int i = 0;i < ans.size();i++){
                cout<<"[";
                for(int u: ans[i])
                    cout<<u<<" ";
                cout<<"] ";
            }
            cout<<endl;
        }
    }
    return 0;
}  