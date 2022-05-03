#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long double ld;
int main()
{
  int t;
  cin>>t;
  int CASE=1;
  while(t--)
     {
         ld r,a,b;
         cin>>r>>a>>b;
         ld term = r;
         ld totalArea = term*term;

           int flag=1;
           while(term>0)
           {

               if(!flag)
               {
                 term = floor(term/b);
               }else
               {
                 term*=a;
               }
             flag=!flag;
             totalArea+=term*term;
           }

         totalArea*=M_PI;

         cout.precision(6);
         cout<<"Case #"<<CASE<<": "<<std::fixed<<totalArea;

         if(t!=0)
         {
           cout<<endl;
         }
         CASE++;


     }
 return 0;
}
