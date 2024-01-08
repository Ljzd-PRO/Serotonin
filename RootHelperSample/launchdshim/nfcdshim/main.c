#include <dlfcn.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>

int (*SBSystemAppMain)(int argc, char *argv[], char *envp[], char* apple[]);

int main(int argc, char *argv[], char *envp[], char* apple[]) {
    return 0;
}

