#include<stdio.h>

int main(){

    char item[10][20] = {"book","pen","ruler","pencile"};
    printf("List of menus:\t");

    for (int i = 0; i < 4; i++) 
   {
     printf("%s\t", item[i]);
   }
    return 0;
}

