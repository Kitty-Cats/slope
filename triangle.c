#include <stdio.h>
#include <libc.h>

int size=7;
char* letter="X";
int main(int argv, char** argc){
    letter=argc[1];
    size=atoi(argc[2]);
    int row;
    int width;
    for(row=0;row<size;row++){
        for(width=0;width<row;width++){        
            printf("%s",letter);
        }
        printf("\n");
    }
}