#include <stdio.h>
#include <stdlib.h>
///Nama : Tri Waluyo
///Kelas: 4103
///Nim  : A11.2017.10097

int main()
{
    int i;
    int jumlah=0;
    int input;

    int array[50];

    printf("Masukan ukuran array : ");
    scanf("%d",&input);

    i=0;
    while(i<input)
    {
        printf("input ke-%d : ",i);
        scanf("%d",&array[i]);
    i++;
    }

    i=0;
    while(i<input)
    {
        if(array[i]%2 == 0)
        {
            jumlah++;
            if(jumlah==2)
            {
                printf("\n data %d terdapat pada index[%d]",array[i],i);
            }
        }
    i++;
    }


    return 0;
}
