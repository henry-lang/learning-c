#include <stdio.h>

#include "util/list.h"
#include "util/string.h"

void test_list() {
    List* list = list_init();

    for(char i = 0; i < 100; i++) {
        list_push(list, i);
    }

    for(char i = 0; i < list_length(list); i++) {
        printf("%c\n", list_get_cast(list, i, char));
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
    List* list = list_init();

    for(int i = 0; i < 1000; i++) {
        String* str = string_init("Hello, World!");
        list_push(list, str);
    }

    for(int i = 0; i < 1000; i++) {
        list_pop(list);
    }

    list_free(list);
}