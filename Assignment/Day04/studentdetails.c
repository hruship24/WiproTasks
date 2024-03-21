#include <stdio.h>

int main() {
    int rollno;
    char name[50];
    char gender;
    char phoneNo[15];
    char address[100];
    float m1, m2, m3, m4;
    float avgMarks, percentage;

    // Taking the input from user 
    printf("Enter Roll Number: ");
    scanf("%d", &rollno);
    fflush(stdin); // Clearing input buffer 
    printf("Enter Name: ");
    scanf("%[^\n]s", name);
    fflush(stdin);
    printf("Enter Gender: ");
    scanf(" %c", &gender);
    fflush(stdin);
    printf("Enter Phone Number: ");
    scanf("%s", phoneNo);
    fflush(stdin);
    printf("Enter Address: ");
    scanf("%[^\n]s", address);
    fflush(stdin);
    printf("Enter Marks for m1 m2 m3 m4 (space-separated): ");
    scanf("%f %f %f %f", &m1, &m2, &m3, &m4);

    // Calculating average and percentage here
    avgMarks = (m1 + m2 + m3 + m4) / 4.0;
    percentage = (avgMarks / 100) * 100; // Assuming maximum marks for each subject is 100

    // Output in specified format
    printf("\n\n");
    printf("%-6s %-10s %-7s %-13s %-25s %-4s %-4s %-4s %-4s %-6s %-9s\n", 
           "Rollno", "Name", "Gender", "PhoneNo", "Address", "M1", "M2", "M3", "M4", "Avg", "Percent");
    printf("-----------------------------------------------------------------------------\n");
    printf("%-6d %-10s %-7c %-13s %-25s %-4.1f %-4.1f %-4.1f %-4.1f %-6.2f %-9.2f\n",
           rollno, name, gender, phoneNo, address, m1, m2, m3, m4, avgMarks, percentage);
    printf("-----------------------------------------------------------------------------\n");

    return 0;
}
