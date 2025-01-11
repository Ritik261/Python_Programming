#write dining philosopher program in c
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <time.h>
#include <string.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/sem.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <semaphore.h>
#include <sys/mman.h>
#include <sys/time.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <signal.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/msg.h>
#include <sys/sem.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <semaphore.h>
#write main
int main(int argc, char *argv[])
{
    int i;
    int status;
    int pid;
    int philosophers[5];
    int forks[5];
    int semid;
    int shmid;
    int *shm;
    int *s;
    int *s1;
    int *s2;
    int *s3;
    int *s4;
    int *s5;
    int *s6;
    int *s7;
    int *s8;
    int *s9;
    int *s10;
    int *s11;
    int *s12;
    int *s13;
    int *s14;
    int *s15;
    int *s16;
    int *s17;
    int *s18;
    int *s19;
    int *s20;
    int *s21;
    int *s22;
    int *s23;
    int *s24;
    int *s25;
    int *s26;
    int *s27;
    int *s28;
    int *s29;
    int *s30;
    int *s31;
    int *s32;
    int *s33;
    int *s34;
    int *s35;
    int *s36;
    int *s37;
    int *s38;
    int *s39;
    int *s40;
    int *s41;
    int *s42;
    int *s43;
    int *s44;
    int *s45;
    int *s46;
    int *s47;
    int *s48;
    int *s49;
    int *s50;
    int *s51;
    int *s52;
    int *s53;
    int *s54;
    int *s55;
    int *s56;
    int *s57;
    int *s58;
    int *s59;
    int *s60;
    int *s61;
    int *s62;
    int *s63;
    int *s64;
    int *s65;
    int *s66;
    int *s67;
    int *s68;
    int *s69;
    int *s70;
    int *s71;
    int *s72;
    int *s73;
    int *s74;
    int *s75;
    int *s76;
// 5 philosophers, 5 forks
// each philosopher needs 2 forks to eat

# 5 philosophers, 5 forks
# each philosopher needs 2 forks to eat
# each philosopher will eat 3 times
# each philosopher will think 3 times
# each philosopher will wait 1 second between each action
# each philosopher will be a separate process
# each fork will be a separate process


