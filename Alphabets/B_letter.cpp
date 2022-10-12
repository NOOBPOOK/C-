#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

char str;

void top(int n);
void low(int i,int n);
int simp(int n);
int main()
{
    int n;
    cout << "Enter the width of the letter:\t";
    cin >> n;
    cout << "Enter the character to be printed with:\t";
    cin >> str;
    cout << endl;
    for(int j=0;j<2;j++){
        top(n);
    }
    cout << string(2*n,str) << endl;
    return 0;   
}
void top(int n)
{
    int i;
    for(i=0;i<=(4.5*n/8);i++){
        if(i>=2){
            cout << string(simp(n),str) << string(((2*n)+i)-(n),' ') << string(n/2,str) << endl;
        }
        else{
            cout << string((2*n)+i,str)<<endl;
        }
    }
    low(i,n);
}
void low(int i, int n)
{
    cout << string(simp(n),str) << string(((2*n)+i)-(n),' ') << string(n/2,str) << endl;
    for(int j=1;j<=4.5*n/8;i--,j++){
    if(j<=(4.5*n/8)-1){
        cout << string(simp(n),str) << string(((2*n)+i)-(n),' ') << string(n/2,str) << endl;
    }
    else{
        cout << string((2*n)+i,str) << endl;
    }
    }
}
int simp(int n)
{
    if(n%2==1){
        return (n/2)+1;
    }
    else{
        return n/2;
    }
}