//
// Created by giuse on 04/02/2021.
//

#ifndef ELENCO_TELEFONICO_BINARY_SEARCH_H
#define ELENCO_TELEFONICO_BINARY_SEARCH_H

#include "user.h"
#include "list.h"

/*
 * Questa funzione ha il compito di ricercare all'interno di un array di utenti
 * uno (o piu) utenti con uno specifico cognome.
 * Se vengono trovati piu di uno, vengono inseriti in una lista e
 * poi confrontati successivamente
 * @input char key: chiave da ricercare rappresentante il cognome dell'utente
 * @input user_t user: array di utenti in cui cercare
 * @input int first: primo elemento che servirà nel calcolo del mediano
 * @input int last: ultimo elemento che servirà nel calcolo del mediano
 * @input list_t list: lista che andrà a contenere eventuali omonimi del dato cognome
 */
void binary_search(char *key, user_t user[30], int first, int last, list_t *list);


#endif //ELENCO_TELEFONICO_BINARY_SEARCH_H
