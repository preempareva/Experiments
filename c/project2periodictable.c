#include <stdio.h>

int main(){
    int n,m,a;

    printf("\nWelcome to periodic table!!\n");

    printf("Enter 1 to know more about an element!!\n");
    printf("Enter 2 to close the periodic table!!\n\n");
    printf("Enter N: ");
    scanf("%d",&n);

    if(n==1){
        printf("\nPress 3 to search element by atomic number\n");
        printf("Enter: ");
        scanf("%d",&m);

        if(m==3){
            printf("\nEnter the atomic number of element to be searched : ");
            scanf("%d",&a);
        
            if(a==1){
                printf("\nName : Hydrogen \n");
                printf("Symbol : H \n");
                printf("Atomic number : 1 \n");
                printf("Element configuration : 1s \n");
                printf("Discoverd by henry cavendish \n");
                printf("Charge : +1 \n");
            }
        
        }

    }
else if (n==2){
    printf("The periodic table is now closing\n\n");
    printf(". . . . . . . . . \n");
    printf("Thankyou Periodic table is now closed!! \n\n\n");

    return 0;
}
}