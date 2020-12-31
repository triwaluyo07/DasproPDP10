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
    int x;
    int y;
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

    for(i=0;i<input;i++)
    {
        if(array[i]%2==1)
        {
            x=array[i];
            y=i;
        }

    }

    printf("\n %d terdapat pada index ke %d ",x,y);

    return 0;
}
