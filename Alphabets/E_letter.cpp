#include <iostream>
#include <string>

using namespace std;
char str;
void top(int n);
void mid(int n);
void mid_up(int n);
void low(int n);
int main()
{
    int n;
    cout << "Enter the width of the letter:\t";
    cin >> n;
    cout << "Enter the character for the letter to be printed with:\t";
    cin >> str;
    cout << endl;
    top(n);
    mid(n);
    mid_up(n);
    mid(n);
    low(n);
}
void top(int n)
{
    for(int i=0;i<(n/2+n%2);i++){
        cout << string((4*n)-i,str) << endl;
    }
}
void mid(int n)
{
    for(int i=0;i<n;i++){
        cout << string(n, str) << endl;
    }
}
void mid_up(int n)
{
    int h = 2;
    int j;
    if((n/2)%2==0){
        j = n/2+1;
    }
    else{
        j = n/2;
    }
    for(int i=0;i<j;i++){
        if(i>(n/4)){
            cout << string(3*n+i-h,str) << endl;
            h+=2;
        }
        else{
            cout << string(3*n+i,str) << endl;
        }
    }
}
void low(int n)
{
    for(int i=0;i<n/2+n%2;i++){
        cout << string((4*n)-(n/2)-(n%2)+i, str) << endl;
    }
}

