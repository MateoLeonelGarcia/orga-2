#include <stdio.h>
#include "list.h"
int main()
{
    list_t *l = listNew(TypeFAT32);
    printList(l);
    fat32_t *f1 = new_fat32();
    fat32_t *f2 = new_fat32();
    fat32_t *f3 = new_fat32();
    fat32_t *f4 = new_fat32();
    fat32_t *f5 = new_fat32();
    *f2 += 1;
    *f3 += 2;
    *f4 += 3;
    *f5 += 4;

    listAddFirst(l, f5);
    listAddFirst(l, f4);
    listAddFirst(l, f3);
    listAddFirst(l, f2);
    listAddFirst(l, f1);
    printList(l);
    swap(1, 3, l);
    printList(l);
    listDelete(l);
    rm_fat32(f1);
    rm_fat32(f2);
    rm_fat32(f3);
    rm_fat32(f4);
    rm_fat32(f5);
    return 0;
}