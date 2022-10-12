#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
    int n;
    //Taking input for width of the letter.
    cout << "Enter the width of letter:\t";
    cin >> n;
    
    //Implementing for loop 4 times the width to keep in the ratio of letter.
    for(int i=1;i<=4*n;i++)
    {
        //Creates gap for the upper part.
        cout << setw(4*n-i+1) << " ";
        
        //Executes when we have to print a blank triangle in out A
        if(i>n+1 && i<(n+1)*2){
            cout << string(n+1,'*') << string((i-n-1)*2-1,' ') << string(n+1,'*') << endl;
        }
        
        //Executes when we have to print the trapezium part of A
        else if(i>n*3){
            cout << string(n+2,'*') << string((i-n-2)*2-1,' ') << string(n+2,'*') << endl;
        }
        
        //Executes when we have to print normal triangle body of A
        else{
        cout << string(2*i-1,'*') << endl;
        }
    }
    return 0;
}
