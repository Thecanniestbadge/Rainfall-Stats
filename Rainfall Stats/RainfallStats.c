// Programmer:		Thecanniestbadge
// Date:			06/28/2023
// Program Name:	Rainfall Stats
// Description:		This program displays total and average rainfall for a year. It uses an array to hold 
//                  rainfall values and a parallel array to hold month names. It also shows the lowest and 
//                  highest rainfalls and the corresponding months. The rainfall data is provided by the user.

#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 

int main(void)
{
    // Constant and Variable Declarations
    double rainfall[13];  // Array to store rainfall values
    double totalRainfall = 0;
    double averageRainfall;
    double maxRainfall = 0;
    double minRainfall = 0;
    int minMonth = 0;
    int maxMonth = 0;
    char months[13][4] = { "", "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };

    // Prompt the user for rainfall input and calculate total, min and max rainfall
    for (int i = 1; i <= 12; i++) {
        printf("Enter the rainfall (in inches) for %s: ", months[i]);
        scanf("%lf", &rainfall[i]);

        // Calculate the total rainfall
        totalRainfall += rainfall[i];

        // Determine the month with the minimum and maximum rainfall
        if (i == 1 || rainfall[i] < minRainfall) {
            minRainfall = rainfall[i];
            minMonth = i;
        }
        if (rainfall[i] > maxRainfall) {
            maxRainfall = rainfall[i];
            maxMonth = i;
        }
    }
    // *** CALCULATION *** 
    // Calculate the average rainfall
    averageRainfall = totalRainfall / 12.0;
    printf("\n"); // Blank line

    // *** OUTPUT *** 
    // Display the rainfall values
    printf("The rainfall that was entered was:\n");
    for (int i = 1; i <= 6; i++) {
        printf("%s\t", months[i]);
    }
    printf("\n");
    for (int i = 1; i <= 6; i++) {
        printf("%.1lf\t", rainfall[i]);
    }
    printf("\n"); // Blank line
    printf("\n"); // Blank line to seperate the 12 months into 2 rows of 6 
    for (int i = 7; i <= 12; i++) {
        printf("%s\t", months[i]);
    }
    printf("\n");
    for (int i = 7; i <= 12; i++) {
        printf("%.1lf\t", rainfall[i]);
    }
    printf("\n"); // Blank line
    printf("\n"); // Blank line to seperate the output from the chart

    // Display the total, average, lowest and highest rainfalls and their months
    printf("The total rain that fell was %.1lf inches.\n", totalRainfall);
    printf("The average monthly rainfall was %.1lf inches.\n", averageRainfall);
    printf("The lowest monthly rainfall was %.1lf inches in %s.\n", minRainfall, months[minMonth]);
    printf("The highest monthly rainfall was %.1lf inches in %s.\n", maxRainfall, months[maxMonth]);
    printf("\n"); // Blank line

    return 0;
} // end main()
