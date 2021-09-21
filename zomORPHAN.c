
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
int main()
{
 
    int x = fork();
  
    if (x > 0)
        printf("IN PARENT PROCESS MY PROCESS ID IS = %d\n", getpid());
                              
  
    else if (x == 0) {
        sleep(5);
        x = fork();
  
        if (x > 0) {
   printf("IN CHILD PROCESS MY PROCESS ID IS =%d\n PARENT PROCESS ID IS=%d\n", getpid(), getppid());
          
  
   while(1)
     sleep(1);
  
   printf("IN CHILD PROCESS MY PARENT PROCESS ID IS =%d\n", getppid());
                              
        }
  
        else if (x == 0)
            printf("IN CHILD'S CHILD PROCESS MY PARENT ID is=%d\n", getppid());
                  
    }
  
    return 0;
}
