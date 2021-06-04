// code starts here
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// function declaration
char MainFunctionTable();
void SearchWorker();
void ManageWorker();
void MonthlyInsuranceCostTable();
void IncomeTaxRateTable();
void Validation();
void main();

char MainFunctionTable() // print main function table
{
    char selection;
    // draft table
    printf("1 - search worker by name/id\n2 - manage workers\n"
           "3 - monthly insurance cost tabel\n4 - income tax rate table\n"
           "Q - Exit program\n");
    printf("Please enter character: ");
    scanf("%c", &selection);
    return selection;
}

void SearchWorker() // search worker function
{
}

void ManageWorker() // manage worker function
{
}

void MonthlyInsuranceCostTable() // show monthly insurance cost table
{
    system("cls");
    fflush(stdin);
    printf("--------------------------------------\n"
           "|    Age    | Monthly Insurance Cost |\n"
           "--------------------------------------\n"
           "| Up to 35  |   RM110                |\n"
           "--------------------------------------\n"
           "| 36 to 65  |   RM160                |\n"
           "--------------------------------------\n"
           "| Over 65   |   RM250                |\n"
           "--------------------------------------\n");
    printf("\nHi Gua Gua");
    printf("\nPlease press any key to back to the main menu.");
    getchar();
    main();
}

void IncomeTaxRateTable() // show income tax rate table
{
    system("cls");
    fflush(stdin);
    printf("--------------------------------------------\n"
           "|  Gross Monthly Income  | Income Tax Rate |\n"
           "--------------------------------------------\n"
           "|     Up to RM999.99     |      0%%         |\n"
           "--------------------------------------------\n"
           "| RM1000.00 to RM2999.99 |      2.5%%       |\n"
           "--------------------------------------------\n"
           "|  RM3000.00 and above   |      5%%         |\n"
           "--------------------------------------------\n");
    printf("\nPlease press any key to back to the main menu.");
    getchar();
    main();
}

void Validation() // validate input errors
{
}

void main() // main function
{
    system("cls");
    fflush(stdin);
    char selection;

    selection = MainFunctionTable();
    switch (selection)
    {
    case '1':
        SearchWorker();
        break;

    case '2':
        ManageWorker();
        break;

    case '3':
        MonthlyInsuranceCostTable();
        break;

    case '4':
        IncomeTaxRateTable();
        break;
    case 'q':
    case 'Q':
        exit(0);
        break;

    default:
        break;
    }
}