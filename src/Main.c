#if defined(__linux__)
#include "/home/codeleaded/System/Static/Container/Array.h"
#elif defined(_WINE)
#include "/home/codeleaded/System/Static/Container/Array.h"
#elif defined(_WIN32)
#include "F:/home/codeleaded/System/Static/Container/Array.h"
#elif defined(__APPLE__)
#error "Apple not supported!"
#else
#error "Platform not supported!"
#endif

int main(){

    Array Numbers = Array_New(sizeof(int),10);

    Array_Set(&Numbers,"NUM0",2);
    Array_Set(&Numbers,"NUM1",5);
    Array_Set(&Numbers,"NUM2",0);
    Array_Set(&Numbers,"NUM3",4);
    Array_Set(&Numbers,"NUM4",8);
    Array_Set(&Numbers,"NUM5",1);
    Array_Set(&Numbers,"NUM6",3);
    Array_Set(&Numbers,"NUM7",7);
    Array_Set(&Numbers,"NUM8",9);
    Array_Set(&Numbers,"NUM9",6);

    //Index_t Index = Array_Search_Linear(&Numbers,"NUM4",Cmp_Bytewise);
    //printf("Index: %d\n",Index);
    //Array_Sort_Bubble(&Numbers,Cmp_Bytewise);
    //Array_Sort_Selection
    //Array_Sort_Insertion
    //Array_Sort_Merge
    //Array_Sort_Quick

    Array_Sort_Insertion(&Numbers,Cmp_Bytewise);

    Array_Print(&Numbers);
    Array_Free(&Numbers);



    return 0;
}