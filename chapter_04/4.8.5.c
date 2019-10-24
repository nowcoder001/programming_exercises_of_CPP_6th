/*Write a program that requests the download speed in megabits per second (Mbs) and
the size of a file in megabytes (MB). The program should calculate the download time
for the file. Note that in this context one byte is eight bits. Use type float, and use /
for division. The program should report all three values (download speed, file size, and
download time) showing two digits to the right of the decimal point, as in the following:
    At 18.12 megabits per second, a file of 2.20 megabytes
    downloads in 0.97 seconds.*/

#include<stdio.h>
#define BIT_TO_BYTE 8     //每字节包含的位数

int main(void)
{
    float m_speed;
    float b_speed;
    float file_size;
    printf("Enter the download speed in megabits per second(Mbs): ");
    scanf("%f",&b_speed);
    m_speed = b_speed/BIT_TO_BYTE;
    printf("Enter the size of a file in megabytes (MB):");
    scanf("%f",&file_size);
    printf("Download speed(MBs): %.2f\n",m_speed);
    printf("File size(MB): %.2f\n",file_size);
    printf("Download time(s): %.2f\n",file_size/m_speed);
    
    return 0;
}