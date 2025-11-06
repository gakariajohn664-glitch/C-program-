/*
Name:Boro John Gakaria
Reg:CT100/G/26190/25
*/

	#include <stdio.h>

struct Student {
    char name[50];
    int regNo;
    float marks;
};

int main() {
    FILE *fp;
    struct Student s;

    fp = fopen("results.dat", "rb"); // open binary file for reading
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("STUDENT RESULTS\n");
    printf("------------------------------\n");
    printf("Name\t\tRegNo\tMarks\n");
    printf("------------------------------\n");

    // Read and display all records
    while (fread(&s, sizeof(struct Student), 1, fp)) {
        printf("%s\t%d\t%.2f\n", s.name, s.regNo, s.marks);
    }

    fclose(fp); // close file
    return 0;
}
}