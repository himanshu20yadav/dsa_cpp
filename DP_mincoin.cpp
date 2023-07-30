#include<iostream>
#include<vector>
using namespace std;
//this is the solution of q minimum coin for given target ,this solution may be produced rong ans because some logic is wrong in this code

int minCoin(int target,vector<int>& arr ,vector<int>& dp){
    //base case
    if(target == 0){
        return 0;
        if(target < 0)
            return INT8_MAX;

        if(dp[target != -1]){
            return dp[target];
        }
    int mini = INT8_MAX;

    for(int i=0;i<arr.size();i++){
        int ans = minCoin(target - arr[i],arr,dp);
        //the ans is valid than update nini

        if(ans != INT8_MAX){
            mini = min(mini,1+ans);
        }
    }
    return dp[target]= mini;
    }
}
int solve(int n ,int a, int b,int c){
    //base case 
    if(n == 0){
        return 0;
    }
    if(n < 0){
        return INT8_MIN;

    }
    int maxi = INT8_MIN;
    int first = solve(n-a,a,b,c);
    int second = solve(n-b,a,b,c);
    int third = solve(n-c,a,b,c);

    maxi = 1 + max(maxi,(first, max(second,third)));
     return maxi;
}

int solveMem(int n ,int a, int b,int c,vector<int>& dp){
    //base case 
    if(n == 0){
        return 0;
    }
    if(n<0){
        return INT8_MIN;

    }
    if(dp[n] != -1){
        return dp[n];
    }
    int first = solveMem(n-a,a,b,c,dp);
    int second = solveMem(n-b,a,b,c,dp);
    int third = solveMem(n-c,a,b,c,dp);

    return  dp[n] = 1 + max(first, max(second,third));

}
int minCoinTab(vector<int>& arr,int t){
    vector<int>dp(t+1,INT8_MAX);
    dp[0] = 0;
    for(int target = 1; target <= t; target++){
        int mini = INT8_MAX;

        for(int i=0;i<arr.size();i++){
            if(target-arr[i] >= 0 ){
                int ans = dp[target - arr[i]];

                //if ans is valid than update mini
                if(ans!= INT8_MAX){
                    mini = min(mini,1+ans);

                }

            }
        }dp[target] = mini;
    }
    return dp[t];
    
    }

int main(){
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);

    int target = 7;

    //vector<int>dp(target+1,-1);

    cout << minCoinTab(arr,target) << endl;
}