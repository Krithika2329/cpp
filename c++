#include<iostream>
using namespace std;
int main()
{
    int a, i, count;
    cout<<"enter a number:";
    cin>>a;
    for(i=2;i<=a;i++)
    {
        if(a%i==0)
        {count ++;
        }
    }
if(count ==1)
{cout<<"its a prime no"<<endl;
}
else
{cout<<"its not a prime"<<endl;
}
return 0;
}
