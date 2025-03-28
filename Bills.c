#include <stdio.h>


void CountBills(int);



int main(void){
int ScannerValue;
printf("enter a value\n-->");
scanf("%d", &ScannerValue);
CountBills(ScannerValue);
return 0;
}



void CountBills(int Value){
// 20 10 5 2
//20 dollar Bill
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
