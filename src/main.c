#include <stdio.h>
#include <stdbool.h>

#include "util/datatypes/list.h"
#include "util/datatypes/string.h"

void test_list() {
    List* list = list_init();

    for(int i = 0; i < 10000; i++) {
        list_push(list, i);
    }

    for(int i = 0; i < list_length(list); i++) {
        printf("%c\n", list_get_cast(list, i, int));
    }

    printf("Length: %d\n", list->curr_length);
    printf("Allocated: %d\n", list->alloc_length);

    list_clear(list);

    printf("Length: %d\n", list->curr_length);
    printf("Allocated: %d\n", list->alloc_length);

    list_free(list);
}

void test_list_advanced() {
    List* list = list_init();


}

int main() {
    String* name = string_init("Henry");
    string_append(name, " Langmack");
    for(int i = 0; i < 5; i++) {
        string_insert(name, "test", 2);
    }


    printf("%s\n", name->data);
    printf("%s: %lu\n", "Allocated: ", name->capacity);
    printf("%s: %lu\n", "Length: ", name->length);
    string_free(name);
}