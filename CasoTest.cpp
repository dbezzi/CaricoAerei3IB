#include <iostream>
#include <assert.h>

/**
 * Legge un intero viaggio e ritorna il numero di handling
 * di quella soluzione
 */
int contaHandling(const int aereo[8][8])
{
    int handling = 1;

    //...

    return handling;
}


int main ()
{
    int aereo[8][8] = {0};

    aereo[0][0] = 1;
    aereo[0][1] = 2;
    aereo[1][1] = 2;

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
            std::cout << aereo[i][j] << " ";
        std::cout << "\n";
    }
    assert(contaHandling(aereo) == 1);

    return 0;
}