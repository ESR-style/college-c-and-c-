#include<stdio.h>
#include<string.h>
int stack[100];
int top=-1;
void push(int c)
{
    stack[++top]=c;
}
int pop()
{
    return stack[top--];
}
int perform_operation(char expression,int a,int b)
{
    switch(expression)
    {
        case '+':
            return a+b;
         case '-':
            return a-b;
         case '*':
            return a*b;
         case '/':
            return a/b;
        default:
            printf("invalid entry");
            return 0;
    }
}
int get_type(char c)
{
    if(c>='0'&&c<='9')
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    char postfix[10];
    int res,len,opr1,opr2,val;
    printf("Enter expression\n");
    scanf("%s",postfix);
    len=strlen(postfix);
    for(int i=0;i<len;i++)
    {
        switch(get_type(postfix[i]))
        {
            case 0:
                val=postfix[i]-'0';
                push(val);
                break;
            case 1:
                opr2=pop();
                opr1=pop();
                res=perform_operation(postfix[i],opr1,opr2);
                push(res);
                break;
        }
    }
    printf("result:%d\n",stack[top]);
    return 0;
}