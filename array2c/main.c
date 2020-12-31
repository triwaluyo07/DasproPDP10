#include <stdio.h>
#include <stdlib.h>

///Nama : Tri Waluyo
///Kelas: 4103
///Nim  : A11.2017.10097

int main()
{
    int input;
    int array_dinamis[5];
    float array_dinamis2[5];
    char array_dinamis3[5];
    int idx;

    idx=0;
    while(idx<5)
    {
    printf("inputkan nilai array[%d] dalam int :",idx);
    scanf("%d",&array_dinamis[idx]);
     idx++;
    }

    idx=0;
    while(idx<5)
    {
    printf("[%d] ",array_dinamis[idx]);
    idx++;
    }
   puts("\n");


    idx=0;
    while(idx<5)
    {
    printf("inputkan nilai array[%d] dalam float : ",idx);
    scanf("%f",&array_dinamis2[idx]);
     idx++;
    }

    idx=0;
    while(idx<5)
    {
    printf("[%.2f] ",array_dinamis2[idx]);
    idx++;
    }
    puts(" \n");

    idx=0;
    while(idx<5)
    {
    printf("inputkan nilai array[%d] dalam char : ",idx);
    scanf("%s",&array_dinamis3[idx]);
    idx++;
    }

    idx=0;
    while(idx<5)
    {
    printf("[%c] ",array_dinamis3[idx]);
    idx++;
    }
    printf("\n");
    return 0;
}
