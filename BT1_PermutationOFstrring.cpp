#include<iostream>
#include<vector>
using namespace std;


void printAllPermutation(int index,vector<string>& output,string& str){
    //base case
    if(index == str.length()){
        output.push_back(str);
        return;

    }
    for(int j=index; j<str.length();j++){
        swap(str[index],str[j]);

        printAllPermutation(index+1,output,str);
    
    //backtrack
    swap(str[index],str[j]);
    
    }
}
int main(){
    string str = "abcd";
    int index = 0;
    vector<string>output;
    printAllPermutation(index,output,str);

    cout << " print All perms "<<endl;
    for(int i=0;i<output.size();i++){
        cout << output[i] << endl;

    }
    cout<<endl;
    return 0;
}
