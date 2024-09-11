#include <stdio.h>
#include <conio.h>
#include <windows.h>
int main(){
SetConsoleTitle("First Letter");
char a;
printf("Enter a word: ");
scanf("%c",&a);
printf("First letter: ");
printf("%c",a);
getch();
return 0;
}
