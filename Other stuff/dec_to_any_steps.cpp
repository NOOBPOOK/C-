#include<iostream>
#include<iomanip>


using namespace std;
char hexa(int);
int main()
{
    float num,num1;
    int i,j,k,l,t,base;
    int rem[100];
    int dec[100];
    cout << "Enter the Number to be converted :"<<endl;
    cin >> num;
    cout << "Enter the Base to be converted into :" << endl;
    cin >> base;
    cout << endl;
    cout << base << " |" << setw(5) << int(num) << endl;
    num1 = num;
    for(i=0; num != 0;i++)
    {
        cout << base << " |" << setw(5) << int(num/base) << "  " << setw(2) << int(int(num)%base) << endl;
        rem[i] = int(num)%base;
        num = int(num)/base;
    }
    cout << "\nYour Integer Answer is :";
    for(j=i-1;j>=0;j--)
    {
        if(base != 16){        
            cout << rem[j];}
        else{
            if(rem[j]>=10){
                cout << hexa(rem[j]);
            }
            else{
                cout << rem[j];
            }
        }
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
            dec[k] = int(num*base);
            num = num*base;
            t += 5;
        }
        cout << setw(5+t) << num  << endl << endl;
        cout << "For Decimal Part:  0.";
        for(l=0;l<k;l++)
        {
            if(base != 16){        
            cout << dec[l];}
        else{
            if(dec[l]>=10){
                cout << hexa(dec[j]);
            }
            else{
                cout << dec[l];
            }
        }
        }
        cout << endl << endl << "Whole Decimal in Binary: ";
        for(j=i-1;j>=0;j--)
        {
        if(base != 16){        
            cout << rem[j];}
        else{
            if(rem[j]>=10){
                cout << hexa(rem[j]);
            }
            else{
                cout << rem[j];
            }
        }
        }
        cout << ".";
        for(l=0;l<k;l++)
        {
        if(base != 16){        
            cout << dec[l];}
        else{
            if(dec[l]>=10){
                cout << hexa(dec[l]);
            }
            else{
                cout << dec[l];
            }
        }
        }
    }
    return 0;
}

char hexa(int n)
{
    if (n==10)
        return 'A';
    else if(n==11)
        return 'B';
    else if(n==12){
        return 'C';
    }
    else if(n==13){
        return 'D';
    }
    else if(n==14){
        return 'E';
    }
    else if(n==15){
        return 'F';
    }
    else{
        return 0;
    }
}