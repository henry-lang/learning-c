#ifndef INT_LIST_H
#define INT_LIST_H

struct IntList {
    int* data;
    unsigned int length;
};

struct IntList* int_list_init();
void int_list_free(struct IntList* int_list);

void int_list_append(struct IntList* int_list, int value);
void int_list_remove(struct IntList* int_list, int index);
void int_list_set(struct IntList* int_list, int index, int value);
int int_list_get(struct IntList* int_list, int index);
int int_list_length(struct IntList* int_list);
void int_list_clear(struct IntList* int_list);

#endif // INT_LIST_H
