//
// Created by giuse on 05/02/2021.
//

#include "list.h"


void append(list_t *list, user_t *user)
{
    user_t *object_pointer;

    list->size += 1;

    object_pointer = realloc(list->array, list->size * sizeof(user_t));

    list->array = object_pointer;
    list->array[list->size-1] = *user;
}

bool contains(list_t *list, user_t user)
{
    int i;
    for(i = 0; i < list->size; i++)
    {
        user_t temp = list->array[i];
        if(strcmp(user.name, temp.name) == 0 && strcmp(user.surname, temp.surname) == 0 &&
        strcmp(user.address, temp.address) == 0 && strcmp(user.telephone, temp.telephone) == 0) return true;
    }
    return false;
}