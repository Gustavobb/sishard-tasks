#include <stdlib.h>

#include "vec_int.h"

typedef struct _vec_int {
    int *data;
    int size;
    int capacity;
} vec_int;


vec_int *vec_int_create() {
    vec_int *vec = malloc(sizeof(vec_int));
    vec -> size = 0;
    vec -> capacity = 2;
    vec -> data = malloc(vec -> capacity * sizeof(int));
    return vec;
}

void vec_int_destroy(vec_int **_v) {
    vec_int *v = *_v;
    free(v -> data);
    free(v);
    *_v = NULL;
}

int vec_int_size(vec_int *v) {
    return v -> size;
}

int vec_int_at(vec_int *v, int pos, int *val) {
    if (pos < v -> size && pos >= 0) {
        *val = v -> data[pos];
        return 1;
    }
    return 0;
}

int vec_int_insert(vec_int *v, int pos, int val) {

    if (pos > v -> size || pos < 0) return 0;
    if (v -> size == v -> capacity) {
        int *new_data_ptr = realloc(v->data, sizeof(int) * (v->capacity * 2));
        if (new_data_ptr == NULL) return 0;
        v->data = new_data_ptr;
        v->capacity *= 2;
    }

    for (int i = v -> size; i > pos; i --) {
        v -> data[i] = v -> data[i - 1];
    }

    v -> data[pos] = val;
    v -> size ++;
    return 1;
}

int vec_int_remove(vec_int *v, int pos) {
    
    if (pos >= v -> size || pos < 0) return 0;
    
    for (int i = pos; i < v -> size; i ++) {
        v -> data[i] = v -> data[i + 1];
    }

    v -> size --;

    if (v -> size*4 == v -> capacity) {
        int *new_data_ptr = realloc(v->data, sizeof(int) * (v->capacity/2));
        if (new_data_ptr == NULL) return 0;
        v->data = new_data_ptr;
        v->capacity /= 2;
    }

    return 1;
}
