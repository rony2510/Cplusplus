// #include <bits/stdc++.h>
#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int>st;

    st.emplace(10);
    st.push(500);
    st.push(100);
    st.push(505);

    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }


    


    return 0;
}