// EECS 348 Lab 05 - Sales Report
// Name: Jerry Merveille
// KUID: 3203634
// LAB session: Thursday 9 AM - 10:50 AM
// LAB Assignment: 01
// Description: This program reads 12 monthly sales and generate a sales report.
// The program display the month and sales; show the minimum, maximum, and average monthly sales; 
// generate a six-month moving average report; and display the sales from highest to lowest.

#include <stdio.h>

void sort_descending(float sales[], char *months[12]);
float calculate_average(float sales[], int start_index, int end_index);

void print_sales_report(float sales[], char *months[12]);
void sales_summary_report(float sales[], char *months[12]);
void moving_average_report(float sales[], char *months[12]);
void descending_sales_report(float sales[], char *months[12]);

int main() {

    int year = 2024;
    float sales[12] = {23458.01, 40112.00, 56011.85, 37820.88, 37904.67, 60200.22, 72400.31, 
                        56210.89, 67230.84, 68233.12, 80950.34, 95225.22};
    char *months[12] = {"January", "February", "March", "April", "May", "June", 
                        "July", "August", "September", "October", "November", "December"};

    printf("\nMonthly Sales Report for %d\n", year);
    print_sales_report(sales, months);
    printf("\nSales Summary Report:\n");
    sales_summary_report(sales, months);
    printf("\nSix-Month Moving Average Report:\n");
    moving_average_report(sales, months);
    printf("\nSales Report (Highest to Lowest):\n");
    descending_sales_report(sales, months);

    return 0;
}

void print_sales_report(float sales[], char *months[12]) {
    printf("%-10s %15s\n", "Month", "Sales");
    for (int i = 0; i < 12; i++) {
        printf("%-10s %15.2f\n", months[i], sales[i]);
    }
}

void sales_summary_report(float sales[], char *months[12]) {
    float min = sales[0];
    float max = sales[0];

    for (int i = 0; i < 12; i++) {
        if (sales[i] < min) {
            min = sales[i];
        }
        if (sales[i] > max) {
            max = sales[i];
        }
    }

    float average_sales = calculate_average(sales, 0, 11);

    printf("Minimum Sales: %.2f\n", min);
    printf("Maximum Sales: %.2f\n", max);
    printf("Average Sales: %.2f\n", average_sales);
}