#include<stdio.h>






int main()
{
    int *maxFloors = 0;
    int *inputFloor = 0;

    printf("Please enter the max amount of floors in the building: ");
    scanf("%d", &maxFloors);

    printf("Please enter the floor you wish to go to: ");
    scanf("%d", &inputFloor);

    for(int i = 0; i <= inputFloor; i++)
    {
        printf("%d\n", i);
        if(i == inputFloor){
            printf("You have reached your floor! Have a nice day!\n");
        }

    }

    return 0;


}
