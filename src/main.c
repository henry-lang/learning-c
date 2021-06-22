#include <stdio.h>
#include <stdlib.h>

#include "person.h"
#include "util/list.h"

void test_person() {
    struct Person* person = person_init();
    person_set_name(person, "Henry Langmack");
    person_set_age(person, 13);
    person_set_gender(person, 'm');
    printf("%s\n", person->name);
    printf("%d\n", person->age);
    printf("%c\n", person->gender);
    person_free(person);
}

void test_list() {
    List* list = list_init();

    for(int i = 0; i < 100000; i++) {
        list_push(list, i);
    }

    for(int i = 0; i < 60000; i++) {
        list_pop(list);
    }

    for(int i = 0; i < list_length(list); i++) {
        printf("%d\n", (int) list_get(list, i));
    }

    printf("Length: %d\n", list->curr_length);
    printf("Allocated: %d\n", list->alloc_length);

    list_clear(list);

    printf("Length: %d\n", list->curr_length);
    printf("Allocated: %d\n", list->alloc_length);

    list_free(list);
}

int main() {
    test_list();
}