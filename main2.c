#include  <stdio.h>
#include  <sys/types.h>

#define   MAX_COUNT  200

void  child_process(void);                
void  parent_process(void);              

void  main(void)
{
     pid_t  pid;

     pid = fork();
     if (pid == 0) 
          child_process();
     else 
          parent_process();
}

void  child_process(void)
{
     int i;

     for (i = 1; i <= MAX_COUNT; i++)
          printf("   This line is from child, value = %d\n", i);
     printf("   *** Child process is done ***\n");
}

void  parent_process(void)
{
     int i;
     for (i = 1; i <= MAX_COUNT; i++)
          printf("This line is from parent, value = %d\n", i);
     printf("*** Parent is done ***\n");
}