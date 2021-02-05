//
// Created by giuse on 04/02/2021.
//

#include "user.h"

void insertion_sort(user_t user[], int n)
{
    int i,j;
    for (i = 1; i < n; i++) {
        user_t temp = user[i];
        j = i - 1;
        while (j >= 0 && strcmp(user[j].surname, temp.surname) > 0) {
            user[j+1] = user[j];
            j--;
        }
        user[j+1] = temp;
    }
}

void print_user(user_t user)
{
    printf("Nome: %s, Cognome: %s, Domicilio: %s, Telefono: %s\n", user.name, user.surname, user.address, user.telephone);
}