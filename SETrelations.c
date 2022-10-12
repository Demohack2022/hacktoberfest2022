#include <stdio.h>
#include <stdlib.h>

int size = 4;

int isReflexive(int arr[size][size])
{
    int isReflexive;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == j)
            {
                if (arr[i][j] == 1)
                {
                }
                else
                {
                    isReflexive = 0;
                    break;
                }
            }
        }
    }
    return isReflexive ? 1 : 0;
}

int isSymmetric(int arr[size][size])
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i != j)
            {
                if (arr[i][j] != arr[j][i])
                {
                    return 0;
                }
            }
        }
    }
    return 1;
}

int isTransitive(int arr[size][size])
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            for (int k = 0; k < size; k++)
            {
                if (i != j && i != k)
                {
                    if (arr[i][j] == 1 && arr[j][k] == 1 && arr[i][k] == 1)
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

int main()
{
    int n;
    printf("Enter the number of elements in relation(upto 16): ");
    scanf("%d", &n);
    int arr[n][2];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            printf("pair[%d] = ", i);
            scanf("%d %d", &arr[i][j], &arr[i][j+1]);
        }
        
    }

    int R1[4][4] = {
        {0, 0 ,0 ,0},
        {0, 0 ,0 ,0},
        {0, 0 ,0 ,0},
        {0, 0 ,0 ,0},
        
    };
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            R1[arr[i][j]][arr[i][j+1]] = 1;
        }
        
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ", R1[i][j]);
        }
        printf("\n");
    }


    int choice = 1;
    while (choice)
    {
        printf("1. Reflexive\n2. Symmetric\n3. Transitive\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            if (isReflexive(R1))
            {
                printf("Reflexive!\n");
            }
            else
            {
                printf("Not Reflexive!\n");
            }
            break;
        }

        case 2:
        {
            if (isSymmetric(R1))
            {
                printf("Symmetric!\n");
            }
            else
            {
                printf("Not Symmetric!\n");
            }
            break;
        }

        case 3:
        {
            if (isTransitive(R1))
            {
                printf("Transitive!\n");
            }
            else
            {
                printf("Not Transitive!\n");
            }
            break;
        }
        default:{
            printf("Invalid choice!");
            break;
        }
        }
    }

    return 0;
}