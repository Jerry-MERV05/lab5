// EECS 348 Lab 05 - Sales Report
// Name: Jerry Merveille
// KUID: 3203634
// LAB session: Thursday 9 AM - 10:50 AM
// LAB Assignment: 01
// Description: This program reads 12 monthly sales and generate a sales report.
// The program display the month and sales; show the minimum, maximum, and average monthly sales; 
// generate a six-month moving average report; and display the sales from highest to lowest.

#include <stdio.h>

void get_sales(float sales[], char *months[12]);
void sort_descending(float sales[], char *months[12], int size);
float calculate_average(float sales[], int size, int start_index, int end_index);

void print_sales_report(float sales[], char *months[12]);
void sales_summary_report(float sales[], char *months[12]);
void moving_average_report(float sales[], char *months[12]);
void descending_sales_report(float sales[], char *months[12]);

int main() {

    int year;
    float sales[12];
    char *months[12] = {"January", "February", "March", "April", "May", "June", 
                        "July", "August", "September", "October", "November", "December"};

    printf("Please enter the year for the sales report: ");
    scanf("%d", &year);

    get_sales(sales, months);

    printf("\nSales Report for %d\n", year);

    return 0;
}

void get_sales(float sales[], char *months[12]) {
    for (int i = 0; i < 12; i++) {
        printf("Please enter the sales for month %s: ", months[i]);
        scanf("%.2f", &sales[i]);
    }
}