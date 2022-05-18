
#include <iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

int main()
{
    char str[100];
    system("clear");
    cout<<"Enter String :";
    cin>>str;
    int l=0;
    int h=strlen(str)-1;
    while(l<h)
    {
        if(str[l++]!=str[h--])
        {
            cout<<"String '"<<str<<"' is Not Pelindrome !";
            exit(1);
        }
    }
    cout<<"String '"<<str<<"' is Pelindrome";
    return 0;
}
