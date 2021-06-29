#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "string.h"

String* string_init(const char* source) {
    size_t source_length = strlen(source);

    String* string = malloc(sizeof(String));
    string->length = source_length;
    string->capacity = source_length + 1;
    string->data = malloc(sizeof(char) * string->capacity);
    strcpy(string->data, source);

    return string;
}

void string_set(String* string, const char* source) {
    string->length = strlen(source);
    char* new = realloc(string->data, sizeof(char) * (string->length + 1));
    if(new == NULL) return;
    string->data = new;

    strcpy(string->data, source);
}

bool string_insert(String* string, const char* to_insert, const size_t index) {
    size_t added_length = strlen(to_insert);
    size_t needed_size = string->length + added_length + 1;

    if(needed_size > string->capacity) {
        if(!string_realloc(string, needed_size)) return false;
    }

    string->length = string->length + added_length;

    memmove(string->data + index + added_length, string->data + added_length, string->length - index);
    memcpy(string->data + index, to_insert, added_length);


    return true;
}

bool string_append(String* string, const char* to_append) {
    const size_t added_length = string->length;
    const size_t needed_size = string->length + added_length + strlen(to_append);

    if(needed_size > string->capacity) {
        if(!string_realloc(string, needed_size)) return false;
    }

    strcat(string->data, to_append);

    string->length = string->length + added_length;

    return true;
}

bool string_realloc(String* string, const size_t size) {
    size_t new_size = string->capacity;
    while(new_size < size) {
        new_size <<= 1;
    }

    char* new_data = realloc(string->data, sizeof(char) * new_size);
    if(new_data == NULL) return false;

    string->data = new_data;
    string->capacity = new_size;
    return true;
}

void string_free(String* string) {
    free(string->data);
    free(string);
}