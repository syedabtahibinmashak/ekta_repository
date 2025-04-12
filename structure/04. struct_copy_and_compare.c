#include<stdio.h>
int main()
{
    typedef struct date
    {
        int day;
        int month;
        int year;
    } date;

    date a,b,c;

    a.day=22;
    a.month=11;
    a.year=2024;

    b=a;

    if((a.day==b.day) && (a.month==b.month) && (a.year==b.year))
        printf("A and B dates are same!\n");
    else printf("A and B dates are not same!\n");

    c=a;
    c.month=3;

    if((a.day==c.day) && (a.month==c.month) && (a.year==c.year))
        printf("A and C dates are same!\n");
    else printf("A and C dates are not same!\n");

    return 0;
}
