//
// Created by Sirojbek on 9/27/2024.
//
#include <iostream>
using namespace std;

int main() {
    int a;
    cin>>a;
    int position =0;
    for (int i = 1; true; i++) {
        bool result = true;
        bool final;
        int original =i;
            while (i>0){

                if(i%10==3) {
                    result = false;
                    break;
                }
                i/=10;
            }

        i= original;
        if(result==true && i%3!=0) {
            position++;
            if(position==a) {
                final=true;
                cout<<i<<endl;
            }
        }
        if(final==true) {
            break;
        }

    }

    return 0;
}
