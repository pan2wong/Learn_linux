#include <stdio.h>
//#include "smpSine/sampSine.h"
#include <unistd.h>
#include <sys/mman.h>
#include <stdlib.h>
#include <unistd.h>
int main()
{

   // sampleSine();
   // printf("this is writed by vim");
//    printf("PID=%d\n",getpid());
//    printf("PPID=%d\n",getppid());
    int retval;
    pid_t child;

    retval = system("ls -l");

    if(retval !=0){
        fprintf(stderr,"command returned %d\n",retval);
    }else{
        puts("command successfully executed");
    }
    exit(EXIT_SUCCESS);
}
