#include <bits/stdc++.h>
#include "hello.h"

using namespace std;

int main() {
    srand(time(0));
    int ans;
    ans = randomNumber();
    cout << PlayerGuess(ans) << endl;
    return 0;
}