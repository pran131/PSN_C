#include <stdio.h>

int main() {

    int a;
    printf ("Enter your age: ");
    scanf  ("%d", &a);
    
    switch (a)      
    {
    case 1:             
        printf ("you are a minor");
        break;
    case 14:
        printf ("you are a teen");
        break;
    case 18:
        printf("You can vote");
        break;
    
    default:
        break;
    }

}