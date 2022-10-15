#include <iostream>
#include <string>
using namespace std;

char str;
void top(int n);
void mid(int n);
int main()
{
    int n;
    cout << "Enter the width of the letter to be printed with:\t";
    cin >> n;
    cout << "Enter the character for the letter to be printed with:\t";
    cin >> str;
    cout << endl;
    top(n);
    mid(n);
    top(n);
}
void top(int n)
{
    for(int i=0;i<n;i++){
        cout << string(n,str) << string(1.5*n,' ') << string(n,str) << endl;
    }
}
void mid(int n)
{
    for(int i=0;i<n/2+n%2;i++){
        cout << string(3.5*n,str) << endl;
    }
}