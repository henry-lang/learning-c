#include <stdio.h>

#include "person.h"
#include "int_list.h"

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

void test_int_list() {
    struct IntList* int_list = int_list_init();

    for(int i = 0; i < 1000; i++) {
        int_list_append(int_list, i);
        printf("%d\n", int_list_get(int_list, i));
    }

    for(int i = 0; i < 1000; i++) {

    }

    int_list_free(int_list);
}

int main() {
//    test_person();
    test_int_list();
    return 0;
}