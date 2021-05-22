#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "slope.h"

int size=5;
char* unit="X";
int main(int numargs, char** args){
    //printf("%d",numargs);
    //check if there is two or more arguments
    if(numargs>1){
        unit=args[1];
        if(strcmp(unit,"help")==0){
            help(args[0],unit);
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
            printf("%s",unit);
        }
        printf("\n");
    }
}

void help(char* program,char* arg){
    printf("Usage: %s (unit used in slope) (size of the slope)\n",program);
    exit(0);
}