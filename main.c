#include "binary_search.h"

int main() {
    user_t users[] = {
            {"Giuseppe", "Trematerra", "Via Casa Mia 8", "081334455"},
            {"Mario", "Rossi", "Via Liberta' SNC", "081655563"},
            {"Leonardo", "Gagliola", "Via Santo Stefano 12", "081678896"},
            {"Tizio", "Lurido", "Via Burro 23", "081722345"},
            {"Antonio", "Amato", "Via Mostarda 44", "0815677893"},
            {"Gennaro", "Giapponese", "Contrada Amato 23", "08134443"},
            {"Sara", "Liguori", "Via Lollipop 53", "0813748713"},
            {"Alfonso", "Maria", "Via Berlino 3", "081334455"},
            {"Maria", "La Peste", "Via Tronco 4", "081655563"},
            {"Raffaele", "Gazzeglio", "Via Dei Santi 11", "081678896"},
            {"Dante", "Alighieri", "Via Commedia 77", "081722345"},
            {"Giovanni", "Boccaccio", "Via Decamerone 16", "0815677893"},
            {"Guido", "Guinizzelli", "Cupa Mare 10", "08134443"},
            {"Francesco", "Risorto", "Via Gelato 90", "08135656713"},
            {"Lorenzo", "Tritacarne", "Via Delle Suore 1", "0815634455"},
            {"Fausto", "Loro", "Via Sidone 32", "08164545363"},
            {"Savesta", "Del Maglio", "Via dell'Orto 12", "0865568963"},
            {"Loredana", "Marido", "Via Cubo 65", "0817254654"},
            {"Federica", "La Sposa", "Via Colombo 34", "085645656445"},
            {"Giorgio", "Guidone", "Contrada Tizio 67", "0815443453"},
            {"Giorgio", "Lettieri", "Via Apostrofo 89", "0814365547"},
            {"Giuseppe", "Da Nizza", "Via Esposito 34", "0843563655"},
            {"Domenico", "Mito", "Via Sensazionale 22", "0812354633"},
            {"Peppe", "Aurisi", "Via Facebook 17", "08175424254"},
            {"Antonio", "Polla", "Via Acton 23", "08123554364"},
            {"Simone", "Lampolla", "Via Monastero 50", "08154353534"},
            {"Cassandra", "Ramirez", "Via Della Quaglia 93", "0864362636"},
            {"Esmeralda", "Rosanda", "Via dei Dragoni 44", "08123542554"},
            {"Pippo", "Baudo", "Via Pippo Baudo 11", "0813246363"},
            {"Michael", "Trematerra", "Via dai Nostri Cuori 33", "0812523532"},
    };
    int i, index = -1;
    list_t *list = calloc(1, sizeof(list_t));
    char name[30];
    char surname[30];
    char address[30];
    printf("Benvenuto nell'elenco telefonico!\n");
    printf("Di seguito e' possibile cercare il numero di telefono in base al nome, cognome e domicilio.\n");
    printf("Inserire il nome da cercare:\n");
    gets(name);
    printf("Inserire il cognome da cercare:\n");
    gets(surname);
    printf("Inserire il domicilio da cercare:\n");
    gets(address);
    insertion_sort(users, USERS);
    binary_search(surname, users, 0, USERS - 1, list);
    //Scorriamo la lista di omonimi in modo da trovare l'esatto risultato ed
    //eventualmente terminare il ciclo
    for(i = 0; i < list->size; i++) {
        user_t user = list->array[i];
        if (strcmp(user.name, name) == 0 && strcmp(user.surname, surname) == 0 &&
            strcmp(user.address, address) == 0)
        {
            index = i;
            break;
        }
    }
    //Se l'indice è stato trovato, stampare a video i dati
    //altrimenti avvisare l'utente che non c'è alcuna corrispondenza
    if(index != -1)
    {
        printf("E' stata trovata la seguente corrispondenza:\n");
        print_user(list->array[index]);
    } else {
        printf("Non e' stata trovata alcuna corrispondenza.");
    }
    return 0;
}
