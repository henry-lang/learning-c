#include <stdlib.h>
#include "person.h"

struct Person* person_init() {
    struct Person* person = malloc(sizeof(struct Person));
    return person;
}

void person_free(struct Person* person) {
    free(person);
}

void person_set_name(struct Person* person, char* name) {
    person->name = name;
}

void person_set_gender(struct Person* person, char gender) {
    person->gender = gender;
}

void person_set_age(struct Person* person, int age) {
    person->age = age;
}
