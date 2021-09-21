#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>

int main()
{
pid_t p;
int a=20;
p=fork();

if(p<0)
{
 printf("FORK FAILEDN");
 exit(1);
}

if (p==0)
 {
  for(int i=1;i<=10;i++)
  {
   if(i%2!=0)
    {
     printf("odd no. =%d\n",i);
    }  
   }
  }
  
 else if(p>1)
  
   for(int i=1;i<=10;i++)
    {
     if(i%2==0)
      {
       printf("even no. = %dn\n", i);
      }
    }
  
    return 0;
     }      
