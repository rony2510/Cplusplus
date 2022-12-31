// #include <bits/stdc++.h>
#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int>st,pt;

    st.emplace(10);
    st.push(500);

    cout<<pt.size()<<endl;

    st.swap(pt);

    cout<<pt.size()<<endl;


    


    return 0;
}