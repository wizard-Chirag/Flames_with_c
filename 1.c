// #include<stdio.h>

// void main()
// {
//     char a[10]={'a','b','0','j','q'},b[10];
//     int i=0,j=0,n;
//     int c=0;
//     while(i<4)
//     {
//         if(a[i]!='0')
//         {
//             b[j]=a[i];
//             c+=1;
//             j++;
//         }
//         i++;
//     }
//     printf("\n%d\n",c);
//     for(i=0;i<j;i++)
//     {
//         printf("\n%c",b[i]);
//     }
// }

#include<stdio.h>

int main()
{
    int i = 0;
    char a[10] = {'a','b','0','j','l'};
    char b[10];
    int c = 0;
    int j = 0;

    while(i < 5)
    {
        if(a[i] != '0')
        {
            b[j] = a[i];   // copy to new array
            j++;
            c++;
        }
        i++;
    }


    printf("Count = %d\n", c);

    printf("Array b elements: ");
    for(i = 0; i < j; i++)
    {
        printf("%c ", b[i]);
    }

    for(i=0;i<j;i++)
    {
        a[i]=b[i];
    }
    b[2]='0';
    printf("\nArray a elements: ");
    for(i = 0; i < 5; i++)
    {
        printf("%c ", b[i]);
    }
    return 0;
}

// / for(i=0;i<6;i++)
//     // {
//     //     printf("\n%c",q[f]);
//     //     f=(f+1)%6;
//     // }
//     // printf("\n%d\n",f);
//     while (zc!=5)
//     {
//         while (i<a)
//         {
//             printf("f:%d\n",f);
//             if(q[f]!='0')
//             {
//                 c++;
//             }
//             i++;
//             f=(f+1)%6;
//         //     printf("%c\n",q[f]);
//         }
//         printf("%c\n",q[f]);
//         q[f]='0';
//         zc++;
//         f=0;
//         // printf("%d\n",zc);
//     }
//     // // f=0;
//     // for(i=0;i<6;i++)
//     // {
//     //     printf("\n%c",q[f]);
//     //     f=(f+1)%6;
//     // 