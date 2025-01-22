/*Write a structure capable of storing date. Write a function
to compare those dates*/
#include <stdio.h>
typedef struct storingdate
{
    int mm;
    int dd;
    int yyyy;
} Date;

int compare(Date d1, Date d2)
{
    if (d1.yyyy == d2.yyyy)
    {
        if (d1.mm == d2.mm)
        {
            if (d1.dd == d2.dd)
            {
                return 0;
            }
            else if (d1.dd > d2.dd)
            {
                return 1;
            }
            else
            {
                return -1;
            }
        }
        else if (d1.mm > d2.mm)
        {
            return 1;
        }
        else
        {
            return -1;
        }
    }
    else if (d1.yyyy > d2.yyyy)
    {
        return 1;
    }
    else if (d1.yyyy < d2.yyyy)
    {
        return -1;
    }
}
int main()
{
    Date d1 = {12, 4, 2012};
    Date d2 = {11, 4, 2012};
    printf("%d", compare(d1, d2));
    return 0;
}