#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void upper(int n);
void mid(int n);
void lower(int n);

int main()
{
    int n;
    cout<<"Enter the width of the letter\t";
    cin >> n;
    cout << endl;
    upper(n);
    mid(n);
    lower(n);
    return 0;
}
void upper(int n){
    for(int a=0;a<n;a++)
    {
        cout << string(n,'*') << string(a,'*') <<setw(int(2*n)-a+n) << string(n,'*') << endl;
    }
}

void mid(int n){
    for(int a=0;a<n;a++){
        cout << string(n,'*') << string(a,' ') << string(n,'*') << string(n-a,' ') << string(n,'*') << endl;
    }
}

void lower(int n){
    for(int a=0;a<n;a++)
    {
        cout << string(n,'*') << string(int(2*n)-n+a,' ') << string(n+(n-a),'*') << endl;
    }
}