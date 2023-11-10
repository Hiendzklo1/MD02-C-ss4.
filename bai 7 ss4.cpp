#include <stdio.h>

int main() {
    float baseSalary, actualWorkingDays, salary;
    const int totalWorkingDaysInMonth = 26;
    const float overtimeRate = 1.5;
    printf("Nhap vao luong co ban: ");
    scanf("%f", &baseSalary);
    printf("Nhap vao so ngay cong thuc te cua nhan vien: ");
    scanf("%f", &actualWorkingDays);
    if (actualWorkingDays <= totalWorkingDaysInMonth) {
        salary = baseSalary * (actualWorkingDays / totalWorkingDaysInMonth);
    } else {
        float overtimeDays = actualWorkingDays - totalWorkingDaysInMonth;
        salary = baseSalary + (baseSalary * (overtimeDays * overtimeRate / totalWorkingDaysInMonth));
    }
    printf("Luong cua nhan vien la: %.2fVND\n", salary);
}

