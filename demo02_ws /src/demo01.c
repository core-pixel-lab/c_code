#include <stdio.h>
#include "../include/demo01.h"

test demo01;

int main(int argc, char const *argv[])
{
    demo01.id = 1;
    demo01.num = 0.5;
    printf("Hello,world!\n");
    printf("The id of demo01 is %d,\n",demo01.id);
    printf("the num of demo01 is %f.\n",demo01.num);

    return 0;
}


