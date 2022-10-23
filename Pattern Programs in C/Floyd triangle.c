#include <stdio.h>  
#include <conio.h>  
void main()  
{   
    int i, j, lols, k = 1;  
    
    printf (" Enter a number to define the rows: \n "); 
    
    scanf("%d", &lols);  
    
    printf("\n\n");  
    for (i = 1; i <= lols; i++)   
    {  
        for (j = 1; j <= i; j++)   
        {  
            printf("%d ", k);   
            k += 1;  
        }  
        printf("\n");  
    }  
    getch();      
}  
