#include <stdio.h>

int main ()
{
    // Converts the number of minutes to days and years

    // Create Variables to store (should all be of type double)
    // minutes (int)
    // minutes in year
    // Years
    // Days
    int minutes = 0;
    double years = 0.0;
    double days = 0.0;
    double minutesAyear = 0;

    // Should ask the user to enter the number of minutes via the terminal
    printf("Enter number of minutes to be converted:");

    // Ask the user for input
    scanf("%d", &minutes);

    minutesAyear = (60 * 24 * 365);

    years = (minutes / minutesAyear);
    days = (minutes / 60.0) / 24.0;

    // Should display as output the minutes and then its equivalent in years and days
    printf("%d minutes is approximately %f years and %f days\n", minutes, years, days);

    return 0;
}