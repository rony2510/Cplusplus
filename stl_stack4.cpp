// #include <bits/stdc++.h>
#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int>st;

    st.emplace(10);
    st.emplace(100);
    st.emplace(1000);
    st.push(50);
    st.push(500);

    if(st.empty()){
        cout<<"empty stack"<<endl;
    }
    else{
        cout<<"not empty stack"<<endl;
    }


    


    return 0;
}