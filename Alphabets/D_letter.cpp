#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
char str;
void top(int n);
void midtop(int n);
void mid(int n);
void lowmid(int n);
void low(int n);
int main()
{
    int n;
    cout<<"Enter the width of the letter:\t";
    cin >> n;
    cout << "Enter the character for the letter to be printed of:\t";
    cin >> str;
    cout << endl;
    top(n);
    midtop(n);
    mid(n);
    lowmid(n);
    low(n);
    return 0;
}
void top(int n){
    for(int i=1;i <= n/2; i++){
        cout << string(3*n, str) << string(i,str) << endl;
    }
}
void midtop(int n){
    for(int i=1;i<=n/2;i++){
        cout << string(n,str) << setw(2*n+(n/2)+i) << string(n,str) << endl; 
    }
}
void mid(int n){
    for(int i=1;i<=2*n;i++){
        cout << string(n,str) << string(2*n,' ') << string(n,str) << endl;
    }
}
void lowmid(int n){
    for(int i=1;i<=n/2;i++){
        cout << string(n,str) << string(2*n-i,' ') << string(n,str) << endl;
    }
}
void low(int n){
    for(int i=0;i<n/2;i++){
        cout << string(n,str) << string(2*n+(n/2)-i,str) << endl;
    }
}