#include<stdio.h>
#include<conio.h>

int main()

{
    int x,y,z;
    char ch;
    
    printf("Please Enter a Character Here   \n");
    scanf("%c", &ch);
    
    printf("The Character Hera is %c\n", ch);
    
    printf("Please Enter The Value of x\n");
    scanf("%d", &x);
    
    printf("Pleas Enter The Value of y\n");
    scanf("%d", &y);
    
    z=x+y;
    
    printf("The Sum of %d+%d=%d\n", x,y,x+y);
    
    printf("Hello World\n");
    
    getch();
    
    return 0;
    
}
