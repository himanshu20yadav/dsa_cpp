#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
//creation
     map<string,int>n;
    //insertion
    //1
    pair<string,int>p = make_pair("babar",3);
    n.insert(p);

    //2
    pair<string,int>pair2("love",2);
    n.insert(pair2);

    //3
    n["mera"]=1;
    //what will happen
    n["mera"]=2;

    //search

    cout<<n["mera"]<<endl;
    cout<<n.at("babbar")<<endl;

    cout<<n["unknownkey"]<<endl;
    cout <<n.at("unknownkey")<<endl;

    //size
    cout<<n.size()<<endl;
    //to check presense
    cout << n.count("love")<<endl;
    //erase
    n.erase("love");
    cout <<n.size()<<endl;

    //iterator
    map<string,int> :: iterator it = n.begin();

    while(it != n.end()){
        cout <<it->first << " "<<it->second <<endl;
    it++;}


    return 0;


}