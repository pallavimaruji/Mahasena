#include <iostream>

using namespace std;

int main()
{
    int t,c=0,i,d=0;
    cin>>t;
    int a[t];
    for(i=0;i<t;i++)
        cin>>a[i];
    for(i=0;i<t;i++)
    {
        if(a[i]%2==0)
            c++;
        else
            d++;
    }
    if(c>d)
        cout<<"READY FOR BATTLE"<<endl;
    else
        cout<<"NOT READY"<<endl;
return 0;
}
