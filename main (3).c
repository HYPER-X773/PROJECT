#include <stdio.h>

int main()
{
    int a,b,c,choice;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    printf("1. adiition\n2. substraction\n3. Division\n4. Multiplication\n Choose a option");
    scanf("%d",&choice);
    if(choice==1){
        c=a+b;
        printf("answer = %d",c);
    }
    else if(choice==2){
        c=a-b;
        printf("answer = %d",c);
    }
   else if(choice==3){
        c=a/b;
        printf("answer = %d",c);
    }
    
else if(choice==4){
        c=a*b;
        printf("answer = %d",c);
    }
    else{
        printf("invalid");
    }
    return 0;
}
