#include<iostream>
#include<deque>
using namespace std;
int main(){


    deque<int>d;

    d.push_back(1);
    d.push_front(2);


    cout<<endl;
    cout<<"print first index element->"<<d.at(1)<<endl;

    cout<<"float"<<d.front()<<endl;
    cout<<"back"<<d.back()<<endl;
    cout<<"Empty or not"<<d.empty()<<endl;
    d.erase(d.begin(),d.begin()+1);
 cout<<"after erase"<<d.size()<<endl;

}