#include <stdio.h>
main()
{
    int num1, num2;

    printf("Enter numbers: ");
    scanf("%d", &num1);
    
//    printf("Enter numbers: ");
//    scanf("%d",&num2);

    
    if(num1 > num2)
    {
        printf("%d is maximum", num1);        
    }
 
    if(num2 > num1)
    {
        printf("%d is maximum", num2);
    }

    
    if(num1 == num2)
    {
        printf("Both are equal");
    }

    return 0;
}
