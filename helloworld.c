#include <stdio.h>
int main(){
    int a, b;
    int operation;
   
    printf("enter a=");
    scanf("%d", &a);
   
    printf("enter b=");
    scanf("%d", &b);
    
    printf("operation=");
    scanf(" %c", &operation);
    
    if(operation == '+', "sum","plus","PLUSE","SUM"){
     printf("Result: %d\n", a + b);
}else if(operation == '-', "minus","SUBTRACT","subtract","sub","SUB"){
 printf("Result: %d\n", a - b);
}else if(operation == '*', "into","INTO","MULTIPLY","multiply"){
 printf("Result: %d\n", a * b);
}else if(operation == '/',"divide","DIVIDE"){
  if (b != 0){
 printf("Result: %d\n", a / b);
  }else 
        printf("Cannot divide by zero\n");
        }
        else {
        printf("Invalid operation\n");
  
}
    return 0;
}


   
    
    

    

