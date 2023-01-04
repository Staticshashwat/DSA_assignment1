https://www.hackerrank.com/challenges/c-tutorial-conditional-if-else/problem?isFullScreen=true


#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char* s[]={"one","two","three","four","five","six","seven","eight","nine"};
    int n;
    cin>>n;
    if(n<=9)
    {
        cout<<s[n-1];
    }
    else
    {
        cout<<"Greater than 9";
    }
    return 0;
}
