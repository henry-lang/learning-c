#include <stdlib.h>
#include "int_list.h"

struct IntList* int_list_init() {
    struct IntList* int_list = malloc(sizeof(struct IntList));
    int_list->length = 0;
    int_list
    return int_list;
}

void int_list_free(struct IntList* int_list) {
    
}