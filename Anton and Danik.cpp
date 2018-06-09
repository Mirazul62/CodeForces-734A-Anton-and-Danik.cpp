#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c[1000000];
    int i,n,count1=0,count2=0,len;
    cin>>n;
    cin>>c;


    for(i=0;i<n;i++)
    {
        if(c[i]=='A')
        {
            count1+=1;
        }
        if(c[i]=='D')
        {
            count2+=1;
        }
    }

    if(count1>count2)
    {
        cout<<"Anton";
    }
    else if(count1<count2)
    {
        cout<<"Danik";
    }
    else
    {
        cout<<"Friendship";
    }


}
