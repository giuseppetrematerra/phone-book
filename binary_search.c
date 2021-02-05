//
// Created by giuse on 04/02/2021.
//

#include "binary_search.h"


void binary_search( char *key, user_t user[30], int first, int last, list_t *list)
{
    int middle, result, i = 0;
    if(first > last)
        return;
    middle = (first+last)/2;
    result = strcmp(key, user[middle].surname);
    if(result == 0)
    {
        append(list, &user[middle]);
        //Una volta trovato il risultato, si suppone che omonimi di cognome
        //possano trovarsi indietro o avanti rispetto al primo risultato trovato
        //quindi scorriamo d'apprima indietro e successivamente in avanti
        //in modo da raccogliere in una lista tutti i risultati omonimi
        while((middle - i) >= 0 && strcmp(user[middle - i].surname, key) == 0)
        {
            user_t user_minus = user[middle - i];
            if(!contains(list, user_minus))
                append(list, &user_minus);
            i++;
        }
        i = 0;
        while((middle + i) < USERS && strcmp(user[middle + i].surname, key) == 0)
        {
            user_t user_plus = user[middle + i];
            if(!contains(list, user_plus))
                append(list, &user_plus);
            i++;
        }
    } else if(result < 0)
    {
        binary_search(key, user, first, middle - 1, list);
    } else {
        binary_search(key, user, middle + 1, last, list);
    }
}