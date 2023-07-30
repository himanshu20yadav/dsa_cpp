#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string>q;
    q.push("hui");
    q.push("ka");
    q.push("be");
    cout<<"size before pop "<<q.size()<<endl;
    cout<<"first element"<<q.front()<<endl;
    q.pop();
    cout<<"first ELement"<<q.front()<<endl;
    cout<<"size after pop"<<q.size()<<endl;
}