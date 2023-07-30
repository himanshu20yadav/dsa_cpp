#include<iostream>
#include<stack>
using namespace std;

int prec(char c){
    

    if(c=='^'){
        return 3;
    }
    else if(c=='*'||c=='/'){
        return 2;
    }
    else if(c=='*'||c=='-'){
        return 1;

    }
    else{
        return -1;
    }
    }
    


string infixTOpostfix(string S){
    stack<char>st;
    string res;

    for(int i=0;i<S.length();i++){
        if((S[i]>='a'&& S[i]<='Z')||(S[i]>='A'&&S[i]<='Z')){
            res+=S[i];
        }
        else if(S[i]=='('){
            st.push(S[i]);

        }
        else if(S[i]==')'){
            while(!st.empty()&&st.top()!='('){
                res += st.top();
                st.pop();
            }
        }
        else{while(!st.empty() && prec(.pop()>= prec(S[i])){
            res += st.top();
            st.pop();
        }
        st.push(S[i]);
        }
    }
    while(!st.empty()){
        res += st.top();
        st. pop();
    }
    return res;
}
int main(){
    cout<<infixTOpostfix("(a-b/c)*(a/k-l)")<<endl;
}
