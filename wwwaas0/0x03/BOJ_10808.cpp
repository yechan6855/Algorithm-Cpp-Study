#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    int arr[26]; //전역에 이렇게 선언하면 알아서 0으로 채워짐
    fill(arr, arr+26, 0);

    for (char c : s) {
        arr[c - 97]++;
    }

    for (int a: arr) {
        cout << a << ' ';
    }
}