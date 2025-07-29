#include<bits/stdc++.h>
using namespace std;

int a, b, c;
int arr[101];
int main() {
    cin >> a >> b >> c;

    int x, y;
    while(cin >> x >> y){
        for(int i = x + 1; i <= y; i++){
            arr[i] += 1;
        }
    }

    int result = 0;

    for(int i = 0; i < 101; i++){
        if(arr[i] == 1){
            result += a * arr[i];
        }
        if(arr[i] == 2){
            result += b * arr[i];
        }
        if(arr[i] == 3){
            result += c * arr[i];
        }
    }

    cout << result;

    return 0;
}