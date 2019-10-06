/*Write a program that requests the download speed in megabits per second (Mbs) and
the size of a file in megabytes (MB). The program should calculate the download time
for the file. Note that in this context one byte is eight bits. Use type float, and use /
for division. The program should report all three values (download speed, file size, and
download time) showing two digits to the right of the decimal point, as in the following:
    At 18.12 megabits per second, a file of 2.20 megabytes
    downloads in 0.97 seconds.*/

#include<stdio.h>
#define DOWNLOAD_BIT 18.12
#define SIZE_OF_FILE 2.20

int main(void)
{
    float download_bytes;
    download_bytes = DOWNLOAD_BIT/8;
    printf("At %.2f megebits per second, a file of %.2f megabytes\n",DOWNLOAD_BIT,SIZE_OF_FILE);
    printf("downloads in %.2f seconds.",SIZE_OF_FILE/download_bytes);

    return 0;
}