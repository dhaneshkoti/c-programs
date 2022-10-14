#include<stdio.h>

int main()
{
    int day;
    printf("enter day : ");
    scanf("%d", &day);
    
    switch(day){
          case 1 : printf("Monday \n");
                   break;
          case 2 : printf("tueday \n");
                   break;  
          case 3 : printf("Wednesday \n");
                   break;
          case 4 : printf("thursday \n");
                   break;
          case 5 : printf("friday \n");
                   break;
          case 6 : printf("saturday \n");
                   break;
          case 7 : printf("sunday \n");
                   break;
        default : printf("not a valid entry");
         }
   
    return 0;
}
