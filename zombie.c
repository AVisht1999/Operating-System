#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>

int main()
{
 pid_t c_pid;
 c_pid = fork();

  if(c_pid >0)
   sleep(10);

  else
   exit(0);
 return 0;
}

