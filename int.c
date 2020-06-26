#include<stdio.h>
#include<conio.h>
#define minutes_per_hour 60 /*pre defines contant if we dont want to use a value then we can use this*/
int main()
{
int totalMinutes=112;
int hours=totalMinutes/minutes_per_hour;
printf("hours: %d\n",hours);/*what we want to farmat as an integer*/
int minutes=totalMinutes % minutes_per_hour;
printf("minutes: %d\n",minutes);
return 0;
}
/* %d is a format specifier for integer*/
/* \n after format specifier*/
