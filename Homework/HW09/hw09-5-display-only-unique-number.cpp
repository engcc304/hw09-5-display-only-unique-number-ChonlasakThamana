/*
    ผู้ใช้กรอกจำนวนอาเรย์ที่ต้องการกรอก จากนั้นผู้ใช้ทำการกรอกข้อมูลลงไปในอาเรย์จนครบ และให้คุณแสดงค่าในอาเรย์ที่ไม่มีการซ้ำกันเท่านั้น โดยแสดงผลลัพธ์จากน้อยไปมาก
    
    Test case:
        Input N :
            5
        Input :
            1
        Input :
            1
        Input :
            2
        Input :
            3
        Input :
            3
    Output:
        Unique value : 2

    
    Test case:
        Input N :
            6
        Input :
            9
        Input :
            9
        Input :
            5
        Input :
            6
        Input :
            2
        Input :
            1
    Output:
        Unique value : 1 2 5 6

*#include <stdio.h>

int main() {
    int N;

    // รับค่า N จากผู้ใช้
    printf("Input N: ");
    scanf("%d", &N);

    // สร้างอาเรย์เพื่อเก็บข้อมูล
    int arr[N];

    // รับข้อมูลจากผู้ใช้และเพิ่มลงในอาเรย์
    for (int i = 0; i < N; i++) {
        printf("Input: ");
        scanf("%d", &arr[i]);
    }

    // ตรวจสอบและแสดงค่าที่ไม่ซ้ำกันและเรียงจากน้อยไปมาก
    printf("Unique value: ");

    // ใช้ Bubble Sort เพื่อเรียงลำดับค่าในอาเรย์
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // สลับค่าในกรณีที่มีค่าใหญ่กว่าอยู่ข้างหน้า
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // แสดงผลลัพธ์ที่ไม่ซ้ำกัน
    for (int i = 0; i < N; i++) {
        if (i == 0 || arr[i] != arr[i - 1]) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
