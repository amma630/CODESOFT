#include<iostream>
using namespace std;
int main()
{
    int n1,n2,sub=0,sum=0,mul=0,chy;
   float div=0;
   cout<<"please Confirm your choice \nFor no 1 without Decimal\nFor  no 2 With decimal\n";
   cin>>chy;
   float n11,n22,sub1=0,sum1=0,mul1=0;
   float div1=0;
   if(chy==1)
   {
        while(true)
        {
            cout<<"\nEnter a number 1  : ";
           cin>>n1;
           cout<<"\nEnter a number 2  : ";
           cin>>n2;


            int op;
               //Enter integral numbers it  works but it not works
                  cout<<"Enter no 1 for +"<<endl;
                  cout<<"Enter no 2 for  -"<<endl;
                  cout<<"Enter no 3 for x"<<endl;
                  cout<<"Enter no 4 for %"<<endl;
                  cout<<"Enter no 5  for exit"<<endl;
                  cout<<"Choice your option  :  ";
                  cin>>op;
                  switch(op)
                  {

                      case 1:

                                      sum=n1+n2;
                                           cout<<n1<<"+ " <<n2<<"="<<sum<<endl;

                                       break;

                      case 2:  sub=n1-n2;
                                    cout<<n1<<"-"<<n2<<"="<<sub<<endl;
                                     break;
                      case 3: mul=n1*n2;
                                    cout<<n1<<"x"<<n2<<"="<<mul<<endl;
                                break;
                      case 4:  div=n1/(float)n2;
                                cout<<n1<<"/"<<n2<<"="<<div<<endl;
                                break;
                      case 5:  exit(0);

                  }


        }


   }
   else
   {
        while(true)
        {
            cout<<"\nEnter a number 1  : ";
           cin>>n11;
           cout<<"\nEnter a number 2  : ";
           cin>>n22;


            int op;
               //Enter integral numbers it  works but it not works
                  cout<<"Enter no 1 for +"<<endl;
                  cout<<"Enter no 2 for  -"<<endl;
                  cout<<"Enter no 3 for x"<<endl;
                  cout<<"Enter no 4 for %"<<endl;
                  cout<<"Enter no 5  for exit"<<endl;
                  cout<<"Choice your option  :  ";
                  cin>>op;
                  switch(op)
                  {

                      case 1:

                                      sum1=n11+n22;
                                           cout<<n11<<"+ " <<n22<<"="<<sum1<<endl;

                                       break;

                      case 2:  sub1=n11-n22;
                                    cout<<n11<<"-"<<n22<<"="<<sub1<<endl;
                                     break;
                      case 3: mul1=n11*n22;
                                    cout<<n11<<"x"<<n22<<"="<<mul1<<endl;
                                break;
                      case 4:  div1=n11/n22;
                                cout<<n11<<"/"<<n22<<"="<<div1<<endl;
                                break;
                      case 5:  exit(0);

                  }


        }

   }


}
