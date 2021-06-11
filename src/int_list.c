#include <stdlib.h>
#include "int_list.h"

struct IntList* int_list_init() {
    struct IntList* int_list = malloc(sizeof(struct IntList));
    int_list->length = 0;
    int_list->data = calloc(0, sizeof(int));
    return int_list;
}

void int_list_free(struct IntList* int_list) {
    free(int_list->data);
    free(int_list);
}

void int_list_append(struct IntList* int_list, int value) {
    int_list->length++;
    int_list->data = realloc(int_list->data, sizeof(int) * int_list->length);
    *(int_list->data + sizeof(int) * (int_list->length - 1)) = value;
}

int int_list_get(struct IntList* int_list, int index) {
    return int_list->data[index];
}

int int_list_length(struct IntList* int_list) {
    return int_list->length;
}