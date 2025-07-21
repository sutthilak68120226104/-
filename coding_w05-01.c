#include <stdio.h>

int main() {

    // ประกาศตัวแปร

    char name = 'T';       // ตัวอักษรตัวแรกของชื่อ (พิมพ์ใหญ่)

    int age = 20;          // อายุของตัวเอง

    float weight = 51;   // น้ำหนักของตัวเอง

    // แสดงผลลัพธ์ออกหน้าจอ

    printf("Student %c is %d years old.\n", name, age);

    printf("His weighs is %.1f kg.\n", weight);
    return 0;
}