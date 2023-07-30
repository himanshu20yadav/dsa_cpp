//problrm of maximum sum of non adjsent element
// by bottom up approch

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
     //vector<int> dp(arr.size()+2,0);

     int next1 =0;
     int next2 = 0;
     int curr;

     int n = arr.size();
     for(int index = n-1;index >= 0;index--){

        int incl = arr[index] + next2;
        int excl = 0+ next1;

       curr = max(incl,excl);

       //after each iteration 
       next2 = next1;
       next1 = curr;
        
     }
     cout<< "Returning ans "<< endl;
     return curr;
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