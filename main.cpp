#include <iostream>
using namespace std;

int main() {
    int a[10],m=0,c=0,n,i;
    cout<<"enter the total count\n";
    cin>>n;
    cout<<"enter the pattern\n";
    for(i=0;i<n;i++)
    cin>>a[i];

for(i=0;i<n;i++)
{

    if(a[i]==1)
    {
        m++;
        if(i!=0)
        {
            if(a[i-1]==0)
            {
                a[i-1]=2;
                c--;
                continue;
            }
        }
        if(1!=(n-1))
        {
             if(a[i+1]==0)
            {
                a[i+1]=2;
                c--;
                continue;
            }

        }

    }
    else if(a[i]==0)
    c++;

}
if (m>c)
    cout<<"winner is Missionaries ";
else if(c>m)
    cout<<"winner is Cannibals ";
else
    cout<<"its a tie";

}


