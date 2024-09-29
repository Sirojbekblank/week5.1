//
// Created by Sirojbek on 9/24/2024.
//
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    string answer ="";
    for(int i=1;i<=t;i++) {
        int n;
        cin>>n;
        string s= to_string(n);
        string number ="";
        for(int j=s.length()-1;j>=0;j--) {
            number+=s[j];
            if(j>0) {
                number+=" ";
            }
        }
        answer+=number+"\n";
    }
    cout<<answer<<endl;
    return 0;
}