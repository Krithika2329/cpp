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










#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
        srand(static_cast<unsigned int>(time(nullptr)));
        int secretnumber=rand()%100+1;
   
    int guess;
   do{
    cout<<"enter a number from 1-100:"<<endl;
    cin>>guess;
    
    if(guess<secretnumber)
    {cout<<"your guess is less than secret number"<<endl;
    }
    else if(guess>secretnumber)
    {cout<<"your guess is greater than secret number"<<endl;
    }
    else
    {cout<<"your guess is right"<<endl;
}
}
while(guess!=secretnumber);
}
