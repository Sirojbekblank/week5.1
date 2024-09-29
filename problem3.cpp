//
// Created by Sirojbek on 9/25/2024.
//
#include <iostream>
using namespace std;

int main() {
    int N,A,B;

    cin>>N>>A>>B;
    int sum=0;
    int result=0;
    for(int i=1;i<=N;i++) {
        int n =i;
        while(n>0) {
            sum+=n%10;
            n=n/10;

        }
        if(sum>=A && sum<=B) {
            result = result+i;

        }

        sum=0;
    }

    cout<<result<<endl;

    return 0;
}