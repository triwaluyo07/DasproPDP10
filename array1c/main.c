#include <stdio.h>
#include <stdlib.h>

///Nama : Tri Waluyo
///Kelas: 4103
///Nim  : A11.2017.10097

int main()
{
    int array [10];
    array[0] = 2;
    array[1] = 4;
    array[2] = 6;
    array[3] = 8;
    array[4] = 10;
    array[5] = 1;
    array[6] = 3;
    array[7] = 5;
    array[8] = 7;
    array[9] = 9;

    int idx;
    idx=0;
    int ukuran =sizeof(array)/sizeof(int);
    while(idx<ukuran)
    {
       printf("%d ",array[idx]);
        idx++;
    }

    puts(" \n");

    char array2[10];
    array2[0] = 'a';
    array2[1] = 'g';
    array2[2] = 'j';
    array2[3] = 'b';
    array2[4] = 'l';
    array2[5] = 'k';
    array2[6] = 'p';
    array2[7] = 't';
    array2[8] = 'q';
    array2[9] = 'v';

    char idx2;

    idx2=0;

    while(idx2<sizeof(array2)/sizeof(char))
    {
       printf("%c ",array2[idx2]);
        idx2++;
    }

    puts("\n");

    float array3 [10];
    array3[0] = 2.65;
    array3[1] = 4.33;
    array3[2] = 6.91;
    array3[3] = 8.82;
    array3[4] = 10.34;
    array3[5] = 1.56;
    array3[6] = 3.41;
    array3[7] = 5.13;
    array3[8] = 7.27;
    array3[9] = 9.51;

    int idx3;

    idx3 = 0;
    while(idx3<sizeof(array3)/sizeof(float))
    {
    printf("%.2f ",array3[idx3]);
    idx3++;
    }
    return 0;
}
