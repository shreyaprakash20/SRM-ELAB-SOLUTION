#include <iostream>
using namespace std;
int main() {
	int n,t1=0,t2=1,nextterm=0;
  cin>>n;
  
  for(int i=1;i<=n;++i)
  {
    if(i==1)
    {
      cout<<t1;
      continue;
    }
    if(i==2)
    {
      cout<<endl<<t2<<endl;
      continue;
    }
    nextterm=t1+t2;
    t1=t2;
    t2=nextterm;
    
    cout<<nextterm<<endl;
  }
	return 0;
}
