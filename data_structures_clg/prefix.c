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
int perform_operation(char c,int a,int b)
{
    switch (c)
    {
    case '+':return a+b;
    case '-':return a-b;
    case '*':return a*b;
    case '/':return a/b;
    default:
        return 0;
        break;
    }
}
int main()
{
    char prefix[10];
    int res,len,val,opr1,opr2;
    printf("Enter expression\n");
    scanf("%s",prefix);
    len=strlen(prefix);
    for(int i=len-1;i>=0;i--)
    {
        switch (get_type(prefix[i]))
        {
        case 0:
            val=prefix[i]-'0';
            push(val);
            break;
        case 1:
            opr1=pop();
            opr2=pop();
            res=perform_operation(prefix[i],opr1,opr2);
            push(res);
            break;
        
        }
    }
    printf("Result: %d",stack[top]);
}