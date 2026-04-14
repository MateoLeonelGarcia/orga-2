#include "type.h"
#include "list.h"
#include <stdlib.h>
#include <stdio.h>

fat32_t *new_fat32()
{
    fat32_t *n = malloc(sizeof(fat32_t));
    *n = 0;
    return n;
}
ext4_t *new_ext4()
{
    ext4_t *n = malloc(sizeof(ext4_t));
    *n = 0;
    return n;
}
ntfs_t *new_ntfs()
{
    ntfs_t *n = malloc(sizeof(ntfs_t));
    *n = 0;
    return n;
}
fat32_t *copy_fat32(fat32_t *file)
{
    fat32_t *n = malloc(sizeof(fat32_t));
    *n = *file;
    return n;
}
ext4_t *copy_ext4(ext4_t *file)
{
    ext4_t *n = malloc(sizeof(ext4_t));
    *n = *file;
    return n;
}
ntfs_t *copy_ntfs(ntfs_t *file)
{
    ntfs_t *n = malloc(sizeof(ntfs_t));
    *n = *file;
    return n;
}
void rm_fat32(fat32_t *file)
{
    free(file);
}
void rm_ext4(ext4_t *file)
{
    free(file);
}
void rm_ntfs(ntfs_t *file)
{
    free(file);
}

void printFat32List(list_t *l)
{
    printf("Lista FAT32 (size: %u):\n", l->size);
    node_t *n = l->first;
    while (n)
    {
        fat32_t *item = (fat32_t *)n->data;
        printf("%u  ", *item);
        n = n->next;
    }
    printf("\n");
}
void printExt4List(list_t *l)
{
    printf("Lista EXT4 (size: %u):\n", l->size);
    node_t *n = l->first;
    while (n)
    {
        ext4_t *item = (ext4_t *)n->data;
        printf("%u  ", *item);
        n = n->next;
    }
    printf("\n");
}
void printNtfsList(list_t *l)
{
    printf("Lista NTFS (size: %u):\n", l->size);
    node_t *n = l->first;
    while (n)
    {
        ntfs_t *item = (ntfs_t *)n->data;
        printf("%lu  ", *item);
        n = n->next;
    }
    printf("\n");
}