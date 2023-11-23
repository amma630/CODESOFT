#include<iostream>
#include<stdlib.h>//for exit functions
#include<cstdlib>//this header say to include rand(),srand()//
#include<time.h>
using namespace std;
//for Generating random  number
int  printRandoms(int lower, int upper,int count)
{

    int i;

    for (i = 0; i < count; i++)
    {

     int num=(rand()%100);
     //rand() is generate random number
         return num;

    }
}
int main()
{
           //here i am taking random 1 to 100 range

             int lower=1,upper=100,count=1,x;
             while(true)
             {
                      cout<<"Enter 1 to start game : "<<endl;
                      cout<<"Enter 2 to exit game"<<endl;
                      cin>>x;
                    if(x==1)
                    {
                        srand(time(0));
                        //srand() uses its argument seed as a seed for a new sequence of pseudo-random numbers to be returned by subsequent calls to rand(
                         int rn=printRandoms(lower, upper, count);
                        int n;
                         cout<<"\nEnter a guess number : ";
                         cin>>n;
                        if(rn==n)
                        cout<<"Congratulations you won the game"<<endl;
                       else if(rn>n)
                     cout<<"Enter number is too low"<<endl;
                      else
                     cout<<"Enter number is too high"<<endl;
            }
           else
          {
               exit(0);
               //
           }
    }

    return 0;
}
