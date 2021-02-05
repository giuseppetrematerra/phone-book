//
// Created by giuse on 04/02/2021.
//

#ifndef ELENCO_TELEFONICO_USER_H
#define ELENCO_TELEFONICO_USER_H

#include <string.h>
#include <stdio.h>

#define USERS 30

typedef struct
{
    char name[30];
    char surname[30];
    char address[30];
    char telephone[30];
} user_t;

/*
 * Questa funzione ha il compito di ordinare in modo crescente un array di utenti
 * mediante l'algoritmo di inserimento
 * @input user_t user: array di utenti da ordinare
 * @input int n: lunghezza dell'array
 */
void insertion_sort(user_t user[], int n);
/*
 * Questa funzione ha il compito di stampare un determinato utente
 * @input user_t user: utente da stampare
 */
void print_user(user_t user);

#endif //ELENCO_TELEFONICO_USER_H
