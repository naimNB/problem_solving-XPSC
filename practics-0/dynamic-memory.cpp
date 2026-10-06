#include<bits/stdc++.h>
using namespace std;

int *p;
void fun(){
    int x = 10;
    p = &x;
    cout<<*p<<"\n";
    return;
}
int main(){

    fun();
    cout <<*p<<"\n";
    return 0;
}