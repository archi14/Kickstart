#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isPalindrom(string s)
{
  int i=0,j=s.size()-1;
  while(i<j)
  {
    if(s[i]!=s[j])
    {
      return false;
    }
    i++;
    j--;
  }
  return true;
}
int main()
{
  int t;
  cin>>t;
  int CASE=1;
  while(t--)
     {
         ll n;
         cin>>n;
         ll countPalindrom = 0;
         ll limit = sqrt(n);
         for(ll i=1;i<=limit;i++)
         {
           if(n%i==0)
           {
             if(isPalindrom(to_string(i)))
             {
               countPalindrom++;
             }
             ll b = n/i;
             if(b!=i && isPalindrom(to_string(b)))
             {
               countPalindrom++;
             }
           }
         }

         cout<<"Case #"<<CASE<<": "<<countPalindrom;
         if(t!=0)
         {
           cout<<endl;
         }
         CASE++;

     }
 return 0;
}
