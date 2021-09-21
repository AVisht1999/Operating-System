#include <stdio.h>
#include <unistd.h>
#include<stdlib.h>
#include<string.h>
int main()
{
  int p;
  int fd[2];
  char *msg = "HEY BRO !";
  pipe(fd);
  p=fork();
  
  if(p==-1)
  {
    
    printf("fork failed");
    exit(-1);
  
   }
   
   if(p>0)
   {
   
   close(fd[0]);
   write(fd[1],msg,strlen(msg));
   close(fd[1]);
   
   }
   
   
   else (p==0);
   {
    
    char buff[50];
    memset(buff,0,50);
    close(fd[1]);
    read(fd[0],buff,strlen(msg));
    close(fd[0]);
    printf("Received data : %s\n", buff);
   
    }
    
    return 0;
    
 }
    
    
    
    
    
