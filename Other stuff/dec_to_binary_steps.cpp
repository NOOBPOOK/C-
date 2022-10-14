#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    float num,num1;
    int i,j,k,l,t;
    int rem[100];
    int dec[100];
    cout << "Enter the Number to be converted into binary:"<<endl;
    cin >> num;
    cout << endl;
    cout << "2 |" << setw(5) << int(num) << endl;
    num1 = num;
    for(i=0; num != 0;i++)
    {
        cout << "2 |" << setw(5) << int(num/2) << "  " << setw(2) << int(int(num)%2) << endl;
        rem[i] = int(num)%2;
        num = int(num)/2;
    }
    cout << "Your Integer Answer is :";
    for(j=i-1;j>=0;j--)
    {
        cout << rem[j];
    }
    t = 0;
    cout << endl << endl;
    num = num1;
    if(num - int(num)/1 != 0){
        cout << "For Decimal Part:" << endl;
        for(k=0;num!=0 and k<5;k++){
            cout << setw(5+t) << num  << endl;
            num = num - int(num);
            cout << setw(5+t) << "X2" << endl;
            cout << setw(t) << "-" << setw(5) << setfill('-') << "-" << setfill(' ') << endl;
            dec[k] = int(num*2);
            num = num*2;
            t += 5;
        }
        cout << setw(5+t) << num  << endl << endl;
        cout << "For Decimal Part:  0.";
        for(l=0;l<k;l++)
        {
            cout << dec[l];
        }
        cout << endl << endl << "Whole Decimal in Binary: ";
        for(j=i-1;j>=0;j--)
        {
        cout << rem[j];
        }
        cout << ".";
        for(l=0;l<k;l++)
        {
            cout << dec[l];
        }
    }
    return 0;
}