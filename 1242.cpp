#include <iostream>
#include <string>
using namespace std;
 
string napis;
 
int main()
{
    int N,i,l_z=52,zn[l_z];
    cin>>N;
    for(i=0;i<l_z;i++) zn[i]=0;
    for(int j=0;j<=N;j++)
    {
               getline(cin,napis);
               for(i=0;i<napis.size();i++)
               {
                      if( static_cast<int>(napis[i]>=65)   &&  static_cast<int>(napis[i]<=90) ) zn[static_cast<int>(napis[i]-39)]++;
                      else if(static_cast<int>(napis[i]>=97) &&  static_cast<int>(napis[i]<=122) ) zn[static_cast<int>(napis[i]-97)]++;
                      else continue;    
               }
    }
    for(i=0;i<l_z;i++)
    {
                      if(zn[i]!=0)
                      {
                                  if(i<26) cout << "\n" << (char)(i+97) << "\t" << zn[i];
                                  else cout << "\n" << (char)(i+39) << "\t" << zn[i];
                      }
    }
 
}
