#include <iostream>

using namespace std;

void PrintHead(void);
void PrintCalendar(int firstday);

int main(void)
{
    int firstday = 0;
    do{
        cout << "iupt the day of the first day: ";
        cin >> firstday;
    }while(firstday > 7 | firstday < 1);

    PrintHead();
    PrintCalendar(firstday);
}

void PrintHead(void)
{
    printf("Calendar\n");
    printf("--------------------------\n");
    printf("Su  Mo  Tu  We  Th  Fr  sa\n");
}

void PrintCalendar(int firstday)
{
    int data = 1;
    int firstdayTran = firstday % 7;
    
    for(int i = 0; i < firstdayTran % 7; i++)
    {
        printf("    ");
    }
    printf("%2d", data);

    if(firstdayTran != 6)
    {
        printf("  ");
    }
    else
    {
        printf("\n");
    }

    for(data = 2; data <= 31 ; data++)
    {

        int today = (firstdayTran + data - 1) % 7;

        printf("%2d", data);

        if( today == 6)
        {
            printf("\n");
        }
        else
        {
            printf("  ");
        }
    }
    printf("\n");

}