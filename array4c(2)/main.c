#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

///Nama : Tri Waluyo
///Kelas: 4103
///Nim  : A11.2017.10097

int main()
{
    int input;
    char validasi;
    float input2;
    int idx;

    printf("masukkan ukuran array : ");
    scanf("%d",&input);

    float array_dinamis[input];

    idx=0;
    while(idx<input)
    {
    printf("inputkan nilai array[%d] dalam float : ",idx);
    scanf("%f",&array_dinamis[idx]);
     idx++;
    }
    fflush(stdin);
    printf("apakah anda ingin input lagi? (y/n) : ");
    scanf("%c",&validasi);

    if(validasi=='y')
    {
        printf("masukkan ukuran array : ");
        scanf("%d",&input);

         float array_dinamis[input];

        idx=0;
        while(idx<input)
        {
        printf("inputkan nilai array[%d] dalam float : ",idx);
        scanf("%f",&array_dinamis[idx]);
        idx++;
        }
            printf("mau cari angka berapa? ");
            scanf("%f",&input2);

            idx=0;
            bool find = false;
            int cari=0;
                while(idx<input2)
            {
                if(array_dinamis[idx] == input2)
                {
                    find=true;
                    cari=idx;
                }
            idx++;
            }

                        if(find==true)
                        {
                            printf("data %.2f ketemu pada index %d",input2,idx);
                        }
                        else
                        {
                            printf("data tidak ditemukan");
                        }
    printf("\n");
    }
    else if (validasi=='n')
        {
            printf("mau cari angka berapa? ");
            scanf("%f",&input2);

            idx=0;
            bool find = false;
            int cari=0;
                while(idx<input2)
            {
                if(array_dinamis[idx] == input2)
                {
                    find=true;
                    cari=idx;
                }
            idx++;
            }

                        if(find==true)
                        {
                            printf("data %.2f ketemu pada index %d",input2,idx);
                        }
                        else
                        {
                            printf("data tidak ditemukan");
                        }
    printf("\n");
        }
        else
        {
            printf("salah input bosku...");
        }


    return 0;
}

