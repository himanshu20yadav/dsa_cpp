//This is the solution by TOP DOWN approch of DP 
//question find the maximum sum of non adjesent element
//2 1 4 9 is given
//rec + memoization



#include<iostream>
#include<vector>
using namespace std;

int solve (vector<int>& arr, int index ,vector<int>& dp){

    //base case
    if(index >= arr.size())
         return 0;

    if(dp[index]  != -1)
           return dp[index];


    int incl = arr[index] + solve(arr, index+2,dp);
    int excl = 0+ solve(arr, index+1,dp);


    return dp[index] = max( incl,excl);
}

int main(){
vector<int> arr;
arr.push_back(2);
arr.push_back(1);
arr.push_back(4);
arr.push_back(9);

int ans = 0;


vector<int>dp(arr.size(),-1);

cout<<"answer is " << solve(arr,0,dp) << endl;


return 0;


   return 0; 
}