#include<bits/stdc++.h>
using namespace std;
int arr[26];

int main()
{
    string s;
    cin >> s;

    for(int i = 0; i < s.size(); i++){
        arr[(char)s[i] - 97] += 1;
    }
    

    for(int i = 0; i < 26; i++){
        cout << arr[i] << " ";
    }

}