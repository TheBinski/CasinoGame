#ifndef NUMBERLIST_H
#define NUMBERLIST_H

typedef struct NumberList NumberList;

void freeList();

void insert(int num);

int findNumber(int num);

int getNumber(int index);

#endif