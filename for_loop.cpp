https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem?isFullScreen=true


#include <iostream>
#include <cstdio>
using namespace std;

int main() {
     char* s[]={"one","two","three","four","five","six","seven","eight","nine","even","odd"};
    int n1,n2;
    cin>>n1>>n2;
    for(int i=n1;i<=n2;i++)
    {
        if(i<=9)
        {
            cout<<s[i-1]<<endl;
        }
        else if(i%2==0) {
        cout<<s[9]<<endl;
        }
        else {
        cout<<s[10]<<endl;
        }
    }
    
    return 0;
}
