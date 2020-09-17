


#include <stdio.h>

int main()
{
    int x;
    printf("enter your marks\n");
    scanf("%d",&x);
    if(x>=85&&x<=100)
    {
        printf("Congrajuslatins!!!\n");
        printf("Grade A");
       
    }
    
    else if(x>=70&&x<=84)
    {
        printf("Congrajuslatins!!!\n");
        printf("Grade B");
       
    }
     else if(x>=55&&x<=69)
    {
        printf("Congrajuslatins!!!\n");
        printf("Grade C");
       
    }
    
    else if(x>=40&&x<=54)
    {
        printf("Congrajuslatins!!!\n");
        printf("Grade D");
        
    }
    
    else if(x<40)
    {
        printf("Better luck next time!!\n");
        printf("Grade F");
        
    }
    
    else
    {
      printf("Enter Correct Marks")  ;
    
    }
return 0;
}
