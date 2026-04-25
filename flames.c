#include<stdio.h>
#include<string.h>

char a1[20],a2[20];

// FUNCTION TO FIND NUMBER OF LETTERS LEFT AVTER RULING OUT COMMON LETERES
int zeroCheck(char arr[20], int n)
{
    int i,c=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]!='0'){
            c++;
        }
    }
    return c;
}

int test1(char name1[20], char name2[20])
{
    
    int i,j,n,m,a,b,c,found;
    char symbol;
    n=strlen(name1);
    m=strlen(name2);
    for(i=0;i<n;i++)
    {
        a1[i]=name1[i];
    }
    for(i=0;i<m;i++)
    {
        a2[i]=name2[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a2[j]==a1[i]){
                a2[j]='0';
                a1[i]='0';
            }
        }   
    }
    a=zeroCheck(a1,n);
    b=zeroCheck(a2,m);
    c=a+b;
    // printf("\nTotal leftovers 1:%d\n",a);
    // printf("\nTotal leftovers 2:%d\n",b);
    // printf("\nTotal leftovers :%d\n",c);   
    return c;
}


// FUNCTION TO FIND THE FINAL LETTER 
char test2(int count)
{
    int i=0, delInd=0, n=6;
    char symbol;
    char flames[6] = {'F','L','A','M','E','S'};
    
    while (n>1)
    {
        delInd=(count-1)%n;
        for(i=delInd;i<n-1;i++)
        {
            flames[i]=flames[i+1];
        }
        n--;
    }
    symbol=flames[0];
    
    return symbol;
}

void main()
{
    int units;
    char name1[20],name2[20],final;

    printf("\t\t\tFLAMES\n");
    printf("\tWelcome to the game of Relationships...\n");
    printf("\t\tWhat is your Relation.?.\n");
    printf("Enter your name:");
    scanf("%s",name1);
    printf("Enter your partner's name:");
    scanf("%s",name2);

    units=test1(name1,name2);

    final=test2(units);
    
    switch (final)
    {
    case 'F':
        printf("You Relation is Friends");
        break;
    case 'L':
        printf("You Relation is Lovers");
        break;
    case 'A':
        printf("You are Affectionate to each other");
        break;
    case 'M':
        printf("You Relation is Marriage");
        break;
    case 'E':
        printf("You Relation is Enimeies");
        break;
    case 'S':
        printf("You Relation is Siblings");
        break;
    
    default:
        break;
    }
}