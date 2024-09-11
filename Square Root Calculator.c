#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <windows.h>
int main(){
SetConsoleTitle("Square Root Calculator");
float a;
printf("What number would you like to find the square root of? ");
scanf("%f",&a);
printf("Answer: ");
printf("%f", sqrt(a));
getch();
}
