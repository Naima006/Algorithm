#include<iostream>
using namespace std;

int reverseNumber(int num, int reversedNum) {
    if (num == 0) {
        return reversedNum;
    } else {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        return reverseNumber(num / 10, reversedNum);
    }
}

int main() {
    int num, reversedNum = 0;
    cout << "Enter a number: ";
    cin >> num;

    reversedNum = reverseNumber(num, reversedNum);
    cout << "Reversed number: " << reversedNum << endl;

    return 0;
}
