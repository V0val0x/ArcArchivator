#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int> snowBalls;
    int lastOut = n;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        snowBalls.push_back(a);
        sort(snowBalls.begin(), snowBalls.end(), greater<>());
        if(snowBalls[0] == lastOut){
            cout << a << ' ';
            lastOut--;
            snowBalls.erase((snowBalls.begin()));
        }
        while(snowBalls[0] == lastOut){
            cout << snowBalls[0] << ' ';
            lastOut--;
            snowBalls.erase((snowBalls.begin()));
        }
        if(i < n - 1)
            cout << "\n";
    }
    return 0;
}
