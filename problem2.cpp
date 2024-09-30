//
// Created by Sirojbek on 9/24/2024.
//
#include <iostream>
using namespace std;

int main() {
    int len;
    cin >> len;
    string answer = "";

    for (int i = 1; i <= len; i++) {
        int num;
        int digit;
        cin >> num;
        string number = "";

        while (num != 0) {
            digit = num % 10;
            num = num / 10;
            number += to_string(digit);
            number += " ";
        }
        answer += number;
        answer += "\n";
    }
    cout << answer;
    return 0;
}
