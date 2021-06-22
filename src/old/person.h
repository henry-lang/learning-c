#ifndef PERSON_H
#define PERSON_H

struct Person {
    char* name;
    char gender;
    int age;
};

struct Person* person_init();
void person_free(struct Person* person);

void person_set_name(struct Person* person, char* name);
void person_set_gender(struct Person* person, char gender);
void person_set_age(struct Person* person, int age);

#endif //PERSON_H