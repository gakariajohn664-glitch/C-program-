/*
Name:Boro John Gakaria
Reg:CT100/G/26190/28
*/
#include <stdio.h>

int main() {
    FILE *fp;
    float sale, total = 0;

    fp = fopen("sales.txt", "r"); // open file for reading
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Read each transaction and add to total
    while (fscanf(fp, "%f", &sale) == 1) {
        total += sale;
    }

    printf("Total sales for the day: %.2f\n", total);

    fclose(fp); // close file
    return 0;
}
	