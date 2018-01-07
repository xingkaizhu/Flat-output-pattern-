#include <stdio.h>
int main()
{
	int m,n,k,i,l;
	char *c[9]={"--**-**--","-*--*--*-","-*-----*-","--*---*--","---*-*---","----*----"};
	scanf("%d %d",&m,&n);
	if(m>=1&&m<=5&&n>=1&&n<=5)
    { 
      for(k=0;k<m;k++)
	  for(i=0;i<6;i++)
       {
     	for(l=0;l<n;l++)
       printf("%s",c[i]);
         printf("\n");
	   }
	}
	else printf("Input Error");
	return 0;
 } 
