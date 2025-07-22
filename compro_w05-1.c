#include <stdio.h>
int main() {
    char name = 'D'; //ใช้ char เพื่อเก็บอักษรตัวแรกของชื่อตัวเอง (ตัวอักษรตัวใหญ่)
    int age = 19;        //ใช้ int เพื่อเก็บอายุ (เลขจำนวนเต็ม)
    double weight = 62.5; //ใช้ float เพื่อเก็บน้ำหนัก (กิโลกรัม)

    printf("Student %c is %d years old.\n", name, age);//แสดงผลอักษรตัวแรกของชื่อ, อายุ 
    printf("His weighs is %.1f kg.\n", weight);    //แสดงผลน้ำหนัก

    return 0;//คืนค่า 0 เพื่อบอกว่าโปรแกรมทำงานสำเร็จ
}
  

     

 
 
    
