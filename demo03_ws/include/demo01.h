#ifndef DEMO01_H
#define DEMO01_H

typedef struct branch
{
    int id;
    struct leaf *head;
}branch_data;

typedef struct leaf
{
    int id;
    struct leaf *next;
}leaf_data;


#endif
