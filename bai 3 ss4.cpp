#include <stdio.h>

int main() {
    int oldIndex, newIndex, electricityConsumed;
    float bill = 0;
    printf("nhap chi so cu : ");
    scanf("%d", &oldIndex);
    printf("nhap chi co moi: ");
    scanf("%d", &newIndex);
    electricityConsumed = newIndex - oldIndex;
    if (electricityConsumed >= 0 && electricityConsumed < 50) {
        bill = electricityConsumed * 10000;
    } else if (electricityConsumed >= 50 && electricityConsumed < 100) {
        bill = 50 * 10000 + (electricityConsumed - 50) * 15000;
    } else if (electricityConsumed >= 100 && electricityConsumed < 150) {
        bill = 50 * 10000 + 50 * 15000 + (electricityConsumed - 100) * 20000;
    } else if (electricityConsumed >= 150 && electricityConsumed < 200) {
        bill = 50 * 10000 + 50 * 15000 + 50 * 20000 + (electricityConsumed - 150) * 25000;
    } else if (electricityConsumed >= 200) {
        bill = 50 * 10000 + 50 * 15000 + 50 * 20000 + 50 * 25000 + (electricityConsumed - 200) * 30000;
    }
    printf("so dien tieu thu: %d kWh\n", electricityConsumed);
    printf("tien dien can thanh toan: %.2f VND\n", bill);
}

