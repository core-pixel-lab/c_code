#include <stdio.h>
#include "../include/demo01.h"

branch_data bra;
leaf_data lea[3];

int main(int argc, char const *argv[])
{
    bra.id = 0;
    bra.head = &lea[0];
    for(int i = 0; i < 3; i++)
    {
        lea[i].id = i+1;
        
        if(i = 2)
        continue;

        lea[i].next = &lea[i];
    }

    printf("Hello,world!\n");

    return 0;
}


