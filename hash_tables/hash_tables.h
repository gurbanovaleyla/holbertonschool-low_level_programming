#ifndef HASHMAP_H
#define HASHMAP_H

#include <stddef.h>

/* =========================
   Type definitions
   ========================= */

typedef const char *key_t;   /* keys are strings */
typedef void *value_t;       /* values are generic */

/* Hash map entry */
typedef struct hashmap_entry
{
    key_t key;
    value_t value;
    struct hashmap_entry *next;
} hashmap_entry_t;

/* Hash map structure */
typedef struct hashmap
{
    size_t size;
    hashmap_entry_t **buckets;
} hashmap_t;

/* =========================
   Function prototypes
   ========================= */

/* Create and destroy */
hashmap_t *hashmap_create(size_t size);
void hashmap_destroy(hashmap_t *map);

/* Core operations */
int hashmap_set(hashmap_t *map, key_t key, value_t value);
value_t hashmap_get(const hashmap_t *map, key_t key);
int hashmap_delete(hashmap_t *map, key_t key);

/* Utility */
size_t hashmap_hash(const char *key);

#endif /* HASHMAP_H */
