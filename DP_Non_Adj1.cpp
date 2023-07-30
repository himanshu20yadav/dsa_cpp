//solution of q1 dp by bottom up aproch 
//for topdown 1 st part see dpTopdown1 file
// this is the solution of maximum sum of non adjesent element.
//by bottom up approch.



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

int solveTab(vector<int>arr){
     vector<int> dp(arr.size()+2,0);

     int n = arr.size();
     for(int index = n-1;index >= 0;index--){

        int incl = arr[index] + dp[index+2];
        int excl = 0+ dp[index+1];

        dp[index] = max(incl,excl);
        
     }
     return dp[0];
}

int main(){
vector<int> arr;
arr.push_back(2);
arr.push_back(1);
arr.push_back(4);
arr.push_back(9);




//vector<int>dp(arr.size(),-1);

//cout<<"answer is " << solve(arr,0,dp) << endl;
cout<<"answer is " << solveTab(arr) << endl;

return 0;


   return 0; 
}