// #include <bits/stdc++.h>
#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int>st;

    st.emplace(10);
    st.emplace(100);
    st.emplace(1000);
    

    cout<<st.top()<<endl;

    return 0;
}