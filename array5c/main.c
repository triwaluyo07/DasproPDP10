#include <stdio.h>
#include <stdlib.h>

///Nama : Tri Waluyo
///Kelas: 4103
///Nim  : A11.2017.10097

int main()
{
    char kal[50];

    printf ("ketikkan beberapa kata: ");
    gets(kal);

    strrev(kal);

    printf ("dibalik jadi: %s\n",kal);
    return 0;
}
