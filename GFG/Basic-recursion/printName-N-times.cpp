#include<bits/stdc++.h>
using namespace std;

// print name N times using recursion and global variable.
// int cnt=0;
// void name(int n){
    
//     if (cnt==n) return;
//     cout << "Eshaan" <<"\n";
//     cnt++;
//     name(n);
// }


// int main(){
//     int n;
//     cout<< "Enter n:";
//     cin>> n;
//     name(n);
//     return 0;
    
// }



//print name N times using recursion and without global variable
void name(int i, int n){
    if(i>n) return;
    cout << "Eshaan" <<"\n";
    name(i+1,n);
}

int main(){
    int n;
    cout << "Enter value of n:";
    cin >> n;
    name(1,n);
    return 0;
}
