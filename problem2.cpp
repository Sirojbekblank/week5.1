//
// Created by Sirojbek on 9/24/2024.
//
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    string answer ="";
    while(t--) {
        string n;
        cin>>n;
        string number ="";
        for(int j=n.length()-1;j>=0;j--) {
            number+=n[j];
            if(j>0) {
                number+=" ";
            }
        }
            answer+=number+"\n";

    }
    cout<<answer<<endl;
    return 0;
}
