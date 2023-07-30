#include<iostream>
#include<stack>
using namespace std;
int main(){

    stack<string>s;
    s.push("himanshu");
    s.push("yadav");
    s.push("Tirodi");
    cout<<"Top Element ->"<<s.top()<<endl;
    s.pop();
    cout<<"Top Element->"<<s.top()<<endl;
    cout<<"size of stack"<<s.size()<<endl;
    cout<<"EMpty or not"<<s.empty()<<endl;

}