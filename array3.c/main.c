#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

///Nama : Tri Waluyo
///Kelas: 4103
///Nim  : A11.2017.10097

int main()
{
    int input;
    char input2;
    int input3;
    int idx;
    char validasi='n';
    int c;


    printf("masukkan ukuran array : ");
    scanf("%d",&input);

    float array_dinamis[input];

    idx=0;
    while(idx<=input && validasi=='n')
    {
     if (idx>=input)
        {
        fflush(stdin);
        printf("apakah anda ingin input lagi? (y/n) : ");
        scanf("%c",&validasi);

        if(validasi=='y')
            {
            printf("inputkan nilai array[%d] dalam float : ",idx);
            scanf("%f",&array_dinamis[idx]);
            idx++;
            input++;
            validasi='n';
            }
        else
            {
                validasi='y';

            }

        }

     else if (validasi=='n')
        {
        printf("inputkan nilai array[%d] dalam float : ",idx);
        scanf("%f",&array_dinamis[idx]);
        idx++;
        validasi='n';

        }

    }

    c=idx;
    idx=0;
    while(idx<c)
    {
        printf("[%.2f] ",array_dinamis[idx]);
    idx++;
    }
    return 0;
}
