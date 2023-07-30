#include<iostream>
#include<map>
using namespace std;
int main(){

    map<int,string> a;
    a[1]="him";
    a[2]="kumar";
    a[3]="sffs";
    for(auto i:a){
        cout<<i.first<<" "<<i.second<<endl;
    }
}