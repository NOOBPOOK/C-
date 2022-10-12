#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
    int n;
    cout << "Enter the width of letter:\t";
    cin >> n;
    for(int i=1;i<=4*n;i++)
    {
        cout << setw(4*n-i+1) << " ";
        if(i>n+1 && i<(n+1)*2){
            cout << string(n+1,'*') << string((i-n-1)*2-1,' ') << string(n+1,'*') << endl;
        }
        else if(i>n*3){
            cout << string(n+2,'*') << string((i-n-2)*2-1,' ') << string(n+2,'*') << endl;
        }
        else{
        cout << string(2*i-1,'*') << endl;
        }
    }
    return 0;
}
