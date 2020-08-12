#include <stdio.h>
#include <libc.h>
#include "triangle.h"

int size=5;
char* letter="X";
int main(int numargs, char** args){
    //printf("%d",numargs);
    //check if there is two or more arguments
    if(numargs>1){
        letter=args[1];
        if(strcmp(letter,"help")==0){
            help(args[0],letter);
        }
    }
    //check if there is three or more arguments
    if(numargs>2){
        size=atoi(args[2]);
    }

    int row;
    int width;
    for(row=0;row<size;row++){
        for(width=-1;width<row;width++){        
            printf("%s",letter);
        }
        printf("\n");
    }
}

void help(char* program,char* arg){
    printf("Usage: %s (letter used in triangle) (size of the triangle)\n",program);
    exit(0);
}