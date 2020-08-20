#include <stdio.h>
int main() {
  int n,a,b,c,d,valid=0;
  scanf("%d%d%d%d%d",&n,&a,&b,&c,&d);
  if(a%8==0 && b%8==0 && c%8==0 && d%8==0)
  {
    printf("Valid Numbers=4");
    }
 else if(a%8==0 && b%8==0 && c%8==0)
  {
    printf("Valid Numbers=3");
  }
else  if(a%8==0 && b%8==0 )
  {
    printf("Valid Numbers=2");
  }
 else if(a%8==0)
  {
    printf("Valid Numbers=1");
  }
  else
  {
    printf("No Valid Number");
  }
  
    
return 0;
}
