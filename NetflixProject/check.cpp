#include<iostream>
using namespace std;
int main(){
    int x=10;
    {
        int x=30;
    }
    namespace A{
        int c=40;

    }
    cout<<x;
}