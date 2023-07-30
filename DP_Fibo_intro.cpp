//intro lec1 of dp on fibonanci problem

#include<iostream>
#include<vector>
using namespace std;

//recursion
int solve(int n){
    //base case
    if(n<=1){
        return n;
    }
    
    
    
    int ans = solve(n-1) + solve(n-2);
    return ans;
    

}
//rec + memo
//step 1: creat dp array
//step 2: store the ans in dp array
//step 3 : check if dp array alrady has answer ,if yes ,then return.just after the base case 

int solveMem(int n,vector<int>& dp){
    //base case
    if(n==0)
        return 0;
    
    if(n==1)
        return 1;
    //step 3:
    if(dp[n] != -1){
        return dp[n] ;
    }
    
    int ans = solveMem(n-1,dp) + solveMem(n-2,dp);
    //step2
    return dp[n] = ans;
    

}
//Bottom Up approach 
//step1: dp array creation 
//step2: Base cae analysis of Rec code and update dp array accordingly
//step3: find the range for the changing variable and copy paste the llogic in rec code accordingly
int solveTab(int nthTerm){

    //step1: creat a dp array
    vector<int>dp(nthTerm+1,0);

    //step2:base case and update dp array
    dp[0]=0;
    dp[1]=1;
//step3:find range and copy paste
for(int n=2; n<=nthTerm;n++){
    int ans = dp[n-1]+ dp[n-2];
    dp[n] =ans;
}
return dp [nthTerm];
  
}
//for space optimization

int solveTabSO(int nthTerm){

    //step1: creates Dp array 
    int prev1 = 1;
    int prev2 = 0;
    int curr;
   
   //step3: find range and copy paste 
   for(int n=2;n <= nthTerm; n++){
       int ans = prev1 + prev2;
       curr = ans;
       prev2 = prev1;
       prev1 = curr;
   }
   return prev1;
}
int main(){
    int n;
    cout << "Enter the value of n "<<endl;
    cin >>n;
    //step 1;
    //vector<int> dp(n,-1);
    //int ans = solveMem(n,dp);

    cout << "ans is -> "<< solveTabSO(n) << endl;


    return 0;
}