#include <bits/stdc++.h>
#include "hello.h"

using namespace std;


int takeNumber() {
    int n;
    cout << "Enter a number < 100: ";
    do {
        cin >> n;
    } while (n >= 100);
    return n;
}

int PlayerGuess(int ans) {
    int guess = 0;
    do {
        guess = takeNumber();
        if (guess > ans) {
            cout << "The number is greater than the answer." << endl;
        }
        else if (guess < ans) {
            cout << "The number is less than the answer." << endl;
        }
    }
    while (guess != ans);
    cout << "Correct!" << endl;
    return guess;
}

// Created by Long on 15/02/2025.
//
//
// Created by Long on 15/02/2025.
//
