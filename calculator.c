#include <stdio.h>

int main()
{ float num1,num2,result;
  char oper;gi
  scanf("%f %c %f",&num1,&oper,&num2);
  if(oper == '+'){
      result = num1 + num2;
      printf("Result => %f",result);
  }
  else if(oper == '-'){
      result = num1 - num2;
      printf("Result => %f",result);
  }
  else if(oper == '*'){
      result = num1 * num2;
      printf("Result => %f",result);
  }
  else if(oper == '/'){
      if(num2 != 0){
      result = num1 / num2;
      printf("Result => %f",result);}
      else{
          printf("num2 zero not allow");
      }
  }
  else{
      printf("Invalid Operator");
  }
    return 0;
}
