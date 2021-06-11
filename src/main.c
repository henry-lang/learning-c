#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0

#include "person.h"

void test_person() {
    struct Person* person = person_init();
    person_set_name(person, "Henry Langmack");
    person_set_age(person, 13);
    person_set_gender(person, 'm');
    printf("%s\n", person->name);
    printf("%d\n", person->age);
    printf("%c\n", person->gender);
    person_delete(person);
}

void test_list() {

}

int main() {
    test_person();

    return 0;
}