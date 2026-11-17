#include <stdio.h>
#include <string.h>

int main()
{
    int choice, size, shape;
    int row, col, space;
    int rows, number;
    int prelim, midterm, prefinal, finalGrade;
    int total, length, i, flag;
    float average;
    char word[50];
    char again;

    while (1)
    {
        printf("\nMAIN MENU\n");
        printf("1. Pattern Generator\n");
        printf("2. Pascal's Triangle\n");
        printf("3. Grade Calculator\n");
        printf("4. Palindrome Checker\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("\nEnter size: ");
            scanf("%d", &size);

            printf("\nPATTERN MENU\n");
            printf("1. Right Triangle\n");
            printf("2. Square\n");
            printf("3. Isosceles Triangle\n");
            printf("4. Inverted Right Triangle\n");
            printf("5. Christmas Tree\n");
            printf("Enter pattern choice: ");
            scanf("%d", &shape);

            if (shape == 1)
            {
                for (row = 1; row <= size; row++)
                {
                    for (col = 1; col <= row; col++)
                    {
                        printf("* ");
                    }
                    printf("\n");
                }
            }
            else if (shape == 2)
            {
                for (row = 1; row <= size; row++)
                {
                    for (col = 1; col <= size; col++)
                    {
                        printf("* ");
                    }
                    printf("\n");
                }
            }
            else if (shape == 3)
            {
                for (row = 1; row <= size; row++)
                {
                    for (space = 1; space <= size - row; space++)
                    {
                        printf(" ");
                    }

                    for (col = 1; col <= 2 * row - 1; col++)
                    {
                        printf("*");
                    }
                    printf("\n");
                }
            }
            else if (shape == 4)
            {
                for (row = size; row >= 1; row--)
                {
                    for (col = 1; col <= row; col++)
                    {
                        printf("* ");
                    }
                    printf("\n");
                }
            }
            else if (shape == 5)
            {
                for (i = 1; i <= 3; i++)
                {
                    for (row = 1; row <= size; row++)
                    {
                        for (space = 1; space <= size - row; space++)
                        {
                            printf(" ");
                        }

                        for (col = 1; col <= 2 * row - 1; col++)
                        {
                            printf("*");
                        }
                        printf("\n");
                    }
                }

                for (row = 1; row <= 2; row++)
                {
                    for (space = 1; space < size; space++)
                    {
                        printf(" ");
                    }
                    printf("*\n");
                }
            }
            else
            {
                printf("Invalid pattern choice!\n");
            }
        }

        else if (choice == 2)
        {
            printf("\nEnter number of rows: ");
            scanf("%d", &rows);

            for (row = 0; row < rows; row++)
            {
                for (space = 0; space < rows - row - 1; space++)
                {
                    printf("   ");
                }

                number = 1;

                for (col = 0; col <= row; col++)
                {
                    printf("%6d", number);

                    number = number * (row - col) / (col + 1);
                }

                printf("\n");
            }
        }

        else if (choice == 3)
        {
            printf("\nEnter Prelim grade: ");
            scanf("%d", &prelim);

            printf("Enter Midterm grade: ");
            scanf("%d", &midterm);

            printf("Enter Pre-Final grade: ");
            scanf("%d", &prefinal);

            printf("Enter Final grade: ");
            scanf("%d", &finalGrade);

            total = prelim + midterm + prefinal + finalGrade;

            average = total / 4.0;

            printf("\nTotal: %d", total);
            printf("\nAverage: %.2f", average);

            if (average >= 75)
            {
                printf("\nStatus: PASS\n");
            }
            else
            {
                printf("\nStatus: FAIL\n");
            }
        }

        else if (choice == 4)
        {
            printf("\nEnter a word: ");
            scanf("%49s", word);

            length = strlen(word);
            flag = 0;

            for (i = 0; i < length / 2; i++)
            {
                if (word[i] != word[length - 1 - i])
                {
                    flag = 1;
                }
            }

            if (flag == 0)
            {
                printf("\n%s is a PALINDROME.\n", word);
            }
            else
            {
                printf("\n%s is NOT A PALINDROME.\n", word);
            }
        }

        else
        {
            printf("\nInvalid menu choice!\n");
        }

        if (choice >= 1 && choice <= 4)
        {
            printf("\nDo you want to try another operation? (Y/N): ");
            scanf(" %c", &again);

            if (again == 'N' || again == 'n')
            {
                break;
            }
        }
    }

    printf("\nThank you for using the program!\n");

    return 0;
}