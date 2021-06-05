#include<stdio.h>
 
int main()
{
	int n=5;
    int space =n - 1;
 
   
    for (int i = 1; i <=n; i++)
    {
        
        for (int j = 1;j <=i; j++)
            printf("*");
 
       
        for (int j = 1;j <= space; j++)
            printf("  ");
            for (int j = 1;j <= i; j++)
            printf("* ");
 
        printf("\n");
        space--;
    }
 
   
    space = 0;
 
    
    for (int i = n; i > 0; i--)
    {
        
        for (int j = 1;j <=i; j++)
            printf("*");
        for (int j = 1; j <= space; j++)
            printf("  ");
 
        
        for (int j = 1;j <= i;j++)
            printf("* ");
 
        printf("\n");
        space++;
    }
    return 0;
}
 


