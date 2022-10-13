#include <stdio.h>

int main(){

    int marks[3];

    printf("physics : ");
    scanf("%d", &marks[0]);

    printf("chemistry : ");
    scanf("%d", &marks[1]);

    printf("maths : ");
    scanf("%d", &marks[2]);

   printf("physics = %d, ", marks[0]);
   printf("chemistry = %d, ", marks[1]);
   printf("maths = %d, ", marks[2]);

return 0;

}