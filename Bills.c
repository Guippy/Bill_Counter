#include <stdio.h>


void CountBills(int);



int main(void){
int ScannerValue;
int Option;
char Command[] = "cls";
while(1){
printf("\nCount bills(1)\nClear(2)\nExit(3)\n");
scanf("%d", &Option);
switch(Option){
    case 1:
        printf("enter a value\n-->");
        scanf("%d", &ScannerValue);
        CountBills(ScannerValue);
        break;
    case 2:
        system(Command);
        break;
    case 3:
        exit(0);
        break;
}
}
return 0;
}



void CountBills(int Value){
// 20 10 5 2
int X = 20;
while (1){
int ValueNew = (Value/X);
Value -= (ValueNew * X);
printf("%d dollar bills:%d\n",X , ValueNew);
if(X == 2){
    break;
}
switch((X >= 5) ? 1:2){
case 1:
    X = X/2;
    break;
case 2:
    X = 2;
    break;
}

}
}
