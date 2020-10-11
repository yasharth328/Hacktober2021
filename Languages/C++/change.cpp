#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int get_change(int m) {
    int coins[] = {10, 5, 1};
    int count = 0;
    for (int i = 0; m > 0; i++) {
        count += m / coins[i];
        m %= coins[i];
    }
    return count;
}

int main() {
    int m;
    cin >> m;
    cout << get_change(m) << '\n';
}