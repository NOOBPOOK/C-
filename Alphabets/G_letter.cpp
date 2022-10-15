#include <iostream>
#include <string>

using namespace std;

char str;
int simply(int n, int j);
void top(int n);
void mid(int n, int i);
void straight(int n);
void center(int n);
void mid2(int n);
void low(int n, int i);
int main()
{
    int n;
    cout << "Enter the width of the letter:\t";
    cin >> n;
    cout << "Enter the character for the letter to be printed of:\t";
    cin >> str;
    cout << endl;
    top(n);
    straight(n);
    center(n);
    mid2(n);
}
void top(int n)
{
    int i;
    for(i=0;i<n/2+n%2;i++){
        cout << string(n-i,' ') << string((2*n)+(2*i),str) << endl;
    }
    mid(n,i);
}
void mid(int n, int i)
{
    for(int j=0;0<n-i;i++,j++){
        cout << string(n-i,' ') << string(n,str) << string(simply(n,j),' ') << string(n,str) << endl;
    }
}
int simply(int n, int j)
{
    if(n%2==0){
        return n+(2*j);
    }
    else{
        return n+(2*j)+1;
    }
}
void straight(int n)
{
    for(int i=0;i<n/2+n%2;i++){
        cout << string(n,str) << endl;
    }
}
void center(int n)
{
    for(int i=0;i<n/2+n%2;i++){
        cout << string(n,str) << string(n,' ') << string(2*n,str) << endl;
    }
}
void mid2(int n)
{
    int i;
    for(i=1;i<=n/2;i++){
        cout << string(i,' ') << string(n,str) << string(2*n-(2*i),' ') << string(n,str) << endl;
    }
    low(n,i);
}
void low(int n, int i)
{
    i++;
    for(int j=0;j<n/2+n%2;j++,i++){
        cout << string(i,' ') << string(4*n-(2*i),str) << endl;
    }
}