#include <iostream>
#include <fstream>
#include <assert.h>

int contaHandling(const int aereo[8][8],int rig,int dest)
{
    int handling=0;
    if(rig==8)
    {
        return 0;
    }
    for(int i=0;i<8;i++)
    {
        if(aereo[rig][i]==dest)
        {
            for(int j=i+1;j<8;j++)
            {
                if(aereo[rig][i]!=dest && aereo[rig][i]!=0)
                {
                    handling++;
                }
            }
        }
    }

    return handling+contaHandling(aereo,rig+1,dest+1);
}


int main ()
{
    int aeroporti, handling;
    int aereo[8][8] = {0};
    std::ifstream file("TestMatcandelli.txt");
    file >> aeroporti;

    for(int i = 0; i < aeroporti;i++)
    {
        for(int j = 0;j<8;j++)
            file >> aereo[i][j];
    }
    file >> handling;

    for (int i = 0; i < aeroporti; i++)
    {
        for (int j = 0; j < 8; j++)
            std::cout << aereo[i][j] << " ";
        std::cout << "\n";
    }

    assert(contaHandling(aereo,0,1) == handling);

    return 0;
}

    assert(contaHandling(aereo) == handling);

    return 0;
}
