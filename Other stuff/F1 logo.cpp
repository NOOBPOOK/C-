#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

char str;
void top(int n);
void mid(int n, int i);
void low(int n, int i);
int main()
{
    int n;
    cout << "Enter the width of the letter:\t";
    cin >> n;
    cout << "Enter the character for the letter to be printed with:\t";
    cin >> str;
    cout << endl;
    top(n);
}
void top(int n)
{
    int i;
    for(int j=0;j<n/2+n%2;i++,j++){
        cout << string(3*n-i,' ') << string(n*7,str) << "   " << string(n*2,str) << endl;
        i++;
    }
    mid(n,i);
}
void mid(int n,int i)
{
    cout << string(3*n-i,' ') << string(n*2,str) << string(n*5+3,' ') << string(n*2,str) << endl;
    i+=2;
    for(int j=0;j<n/2+n%2;j++,i++){
        cout << string(3*n-i,' ') << string(n*2,str) << "   " << string(5*n-3,str) << "   " << string(n*2,str) << endl;
        i++;
    }
    low(n,i);
}
void low(int n, int i)
{
    for(int j=0;3*n-i>0;j++,i++){
        cout << string(3*n-i,' ') << string(n*2,str) << "   " << string(n*2,str) << string(n*3,' ') << string(n*2,str) << endl;
        i++;
    }
}
