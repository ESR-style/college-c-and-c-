#include<stdio.h>
void input(int row,int col,int mat[10][10])
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("Enter element at position %d %d: ",i+1,j+1);
            scanf("%d",&mat[i][j]);
        }
    }
}
void display(int row,int col,int mat[10][10])
{
     for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
           printf("%d/t",mat[i][j]);
        }
        printf("/n");
    }
}
void sum(int row,int col,int mat1[10][10],int mat2[10][10],int result[10][10])
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            result[i][j]=mat1[i][j]+mat2[i][j];
        }
    }
}
void multiply(int row,int col,int mat1[10][10],int mat2[10][10],int result[10][10])
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            result[i][j]=0;
            for(int k=0;k<row;k++)
            {
                result[i][j]+=mat1[i][k]*mat2[k][j];
            }
        }
    }
}

int main()
{
    
    return 0;
}