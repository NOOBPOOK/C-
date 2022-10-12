#include <iostream>
#include <string>

using namespace std;
char str;
void top(int n);
void mid(int n);
void top2(int n);
void low(int n);
int main()
{
    int n;
    cout << "Enter the width of the letter to be printed out:\t";
    cin >> n;
    cout << "Enter the character for the letter to be printed of:\t";
    cin >> str;
    cout << endl;
    top(n);
    mid(n);
    top2(n);
    mid(n);
    mid(n);
}
void top(int n)
{
    for(int i=0;i<n/2+n%2;i++){
        cout << string(4*n-i,str) << endl; 
    }
}
void mid(int n)
{
    for(int i=0;i<n/2+n%2;i++){
        cout << string(n,str) << endl;
    }
}
void top2(int n)
{
    for(int i=0;i<n/2+n%2;i++){
        cout << string(3*n-i,str) << endl;
    }
}