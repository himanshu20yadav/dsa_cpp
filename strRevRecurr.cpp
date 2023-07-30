#include<iostream>
using namespace std;

void solve(string &str ,int i,int j ){
    //base case

    if(i>=j)
       return;

    //case1
    swap(str[i],str[j]);

    //rec
    solve(str,i+1,j-1);
}

  void printSubsequences(string str,int index ,string ans){
    //base case
    if(index == str.length()){
        cout << ans << endl;
        return;
    }

    //include
    printSubsequences(str,index+1,ans + str[index]);
   //exclude
   printSubsequences(str,index+1,ans);
}



int main(){

    string str = "abc";

    //solve(str,0,str.length()-1);
     string ans = " ";
     printSubsequences(str,0,ans);
    //cout<<ans<<endl;
 return 0;
}