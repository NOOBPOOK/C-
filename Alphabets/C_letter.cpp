#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

char str;
int g = 0;
void top(int n);
void topmid(int n);
void mid(int n);
void low(int n);
int simp(int n);
int main()
{
    int n;
    cout<<"Enter the width of the letter:\t";
    cin >> n;
    cout << "Enter the character to be printed with:\t";
    cin >> str;
    cout << endl;
    if(n%2==1){
        g = 1;
    }
    top(n);
    topmid(n);
    mid(n);
    topmid(n);
    low(n);
    return 0;
}
void top(int n)
{   
    int j = simp(n);
    for(int i=1;i<=n-1;i++){
        if(i>n/2){
            cout << string(n-i,' ') << string(n,str) << string(n+j,' ') << string(n,str) << endl;
            j+=2;
        }
        else{
            cout << setw(n) << string(i,str) << string(2*n,str) << string(i,str) << endl;
        }
    }
}
void topmid(int n)
{
    for(int i=1;i<=n;i++){
        cout << string(n,str) << string(2*n,' ') << string(n,str) << endl;
    }
}
void mid(int n)
{
    for(int i=1;i<=n;i++){
        cout << string(n,str) << endl;
    }
}
void low(int n)
{ 
    int h = 2;
    for(int i=1;i<=n-1;i++){
        if(i<n/2+g){
            cout << string(i,' ' ) << string(n,str) << string(2*n-h,' ') << string(n,str) << endl;
            h+=2;
        }
        else{
            cout << setw(n) << string(n-i,str) << string(2*n,str) << string(n-i,str) << endl;
        }
    }
}
int simp(int n)
{
    int j;
    if(n%2==0){
        j = 2;
    }
    else{
        j = 1;
    }
    return j;
}

