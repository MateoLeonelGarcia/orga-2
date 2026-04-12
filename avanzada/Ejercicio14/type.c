#include "type.h"
#include <stdlib.h>

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