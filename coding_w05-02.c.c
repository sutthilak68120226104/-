#include <stdio.h>

int main() {
// ข้อมูลส่วนบุคคล
char name[30] = "Tide";
int age = 20;
float height = 171.0;

// ข้อมูลผลการเรียน
char subject = 'E'; // E แทน English
float grade = 3.00;
char symbol = 'B';

// แสดงผลลัพธ์
printf("%s is %d years old and %.1f centimeters tall.\n", name, age, height);
printf("In subject %c, %s got %.2f which is symbolized as '%c'.\n", subject, name, grade, symbol);

return 0;
}
