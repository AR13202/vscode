#include <bits/stdc++.h>
#include <vector>
using namespace std;
void winnerSquareGame(int n) {
    vector<int> arr;
    int i=1;
    int it = 3;
    int turn = 1;
    while(i<=n){
        arr.push_back(i);
        i+= it; 
        it +=2;
    }
    for(int i=0;i<arr.size();i++){
        cout << arr[i] << " ";
    }
    cout << "\ndone\n";
    int q=arr.size()-1;
    while(n > 0){
        int a = 0;
        while(q>=0){
            if(n >= arr[q]){
                a = arr[q];
                break;
            }
            else {
                q--;
            }
        }
        cout << "done n =" << n << endl;
        q = arr.size()-1;
        turn++;
        n -= a;
    }
    if(turn%2==0){
        cout << "Alice Wins\n";
    }else {
        cout << "Bob Wins\n";
    }
}
int main(){
    int n;
    cin >> n;
    winnerSquareGame(n);
    return 0;
}