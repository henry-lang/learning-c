#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "int_list.h"

struct IntList* int_list_init() {
    struct IntList* int_list = malloc(sizeof(struct IntList));
    int_list->curr_length = 0;
    int_list->alloc_length = 1;
    int_list->data = calloc(1, sizeof(int));
    return int_list;
}

void int_list_free(struct IntList* int_list) {
    free(int_list->data);
    free(int_list);
}

void int_list_append(struct IntList* int_list, int value) {
    if(int_list->curr_length != 0) {
        if(int_list->curr_length > int_list->alloc_length)
            if(!int_list_alloc(int_list)) return;
    }
    int_list_set(int_list, int_list->curr_length, value);
    int_list->curr_length++;
}

void int_list_remove(struct IntList* int_list, unsigned int index) {

}

void int_list_set(struct IntList* int_list, unsigned int index, int value) {
    int_list->data[index] = value;
}

int int_list_get(struct IntList* int_list, unsigned int index) {
    return int_list->data[index];
}

unsigned int int_list_length(struct IntList* int_list) {
    return int_list->curr_length;
}

bool int_list_alloc(struct IntList* int_list) {
    unsigned int new_length = int_list->alloc_length * 2;
    int* new_data = realloc(int_list->data, sizeof(int) * new_length);
    if(new_data != NULL) {
        int_list->data = new_data;
        return true;
    } else {
        printf("Failed to reallocate array.");
        return false;
    }
}

void int_list_clear(struct IntList* int_list) {

}