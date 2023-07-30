// this is the ROD cutting problem solution by dp
//we need to find maximum number of cuts 
//given n length rod and we can cut the rod a,b,c size.


#include<iostream>
#include<vector>
using namespace std;

int solve(int n,int a,int b,int c){
    //base case
    if(n==0){
        return 0;
    }
    if(n < 0){
        return 1;

    }
   

    int first = solve(n-a,a,b,c);
    int second = solve(n-b,a,b,c);
    int third = solve(n-c,a,b,c);

    return  1+max(first,max(second,third));
}

int solveMem(int n,int a,int b,int c,vector<int>& dp){
    //base case
    if(n==0){
        return 0;
    }
    if(n < 0){
        return INT8_MIN ; }

    int first = solveMem(n-a,a,b,c,dp);
    int second = solveMem(n-b,a,b,c,dp);
    int third = solveMem(n-c,a,b,c,dp);
      if(dp[n] != -1){
        return dp[n];
    }
    return dp[n] = 1+max(first,max(second,third));
}
int main(){
    int n = 17;
    int a = 10;
    int b = 11;
    int c = 3;

    vector<int>dp(n+1,-1);

    int ans = solveMem(n,a,b,c,dp);
    if(ans <= 0)
        ans = -1;

    cout << "max cuts are " << ans << endl;

    return 0;

}