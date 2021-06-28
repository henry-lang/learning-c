#ifndef HLTE_STRING_H
#define HLTE_STRING_H

#include <stddef.h>

typedef struct {
    size_t capacity;
    size_t length;
    char* data;
} String;

String* string_init(const char* source);
void string_init_alloc(String* string, size_t size);
void string_set(String* string, const char* source);

void string_insert(String* string, const char* to_insert, int index);
void string_append(String* string, const char* to_append);

bool string_realloc(String* string, size_t size);

void string_free(String* string);

#endif //HLTE_STRING_H
