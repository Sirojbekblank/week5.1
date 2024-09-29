//
// Created by Sirojbek on 9/25/2024.
//
#include <iostream>
using namespace std;

int main() {
    int x,y;
    cin>>x>>y;
    int result;
    if(x>2) {
        if((x-2)%y!=0) {
            result=(x-2)/y+2;
        }
        else {
            result=(x-2)/y+1;
        }

    }
    else {
        result=1;
    }

    cout<<result;
    return 0;
}