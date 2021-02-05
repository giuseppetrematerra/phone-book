//
// Created by giuse on 05/02/2021.
//

#ifndef ELENCO_TELEFONICO_LIST_H
#define ELENCO_TELEFONICO_LIST_H

#include "user.h"
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct
{
    user_t *array;
    uint8_t size;
} list_t;

/*
 * Questa funzione ha il compito di inserire un elemento all'interno della lista
 * @input list_t list: lista da aggiornare
 * @input user_t user: utente da aggiungere
 */
void append(list_t *list, user_t *user);
/*
 * Questa funzione ha il compito di controllare se un elemento è già nella lista
 * @input list_t list: lista da controllare
 * @input user_t user: utente da controllare
 */
bool contains(list_t *list, user_t user);

#endif //ELENCO_TELEFONICO_LIST_H
