#include <stdio.h>
#include <stdbool.h>

void ChoseBills(int[]);
void CountBills(int, int[]);



int main(void){
int Option;
int Bills[] = {1, 1, 1, 1, 1, 1, 1};
char Command[] = "cls";
while(1){
printf("\nCount bills(1)\nClear(2)\nExit(3)\n");
scanf("%d", &Option);
switch(Option){
    case 1:
        ChoseBills(Bills);
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



void ChoseBills(int Bills[]){
//100 50 20 10 5 2 1
int Index;
int Value;
char Command[] = "cls";
while(1){
 int ValueDisplay = 100;
 for(int x = 0; x < 7; x++){
    printf("%d:%s(%d)\n",ValueDisplay, (Bills[x]) ? "True":"False", x+1);
    if (ValueDisplay == 50){
        ValueDisplay = 20;
    }
    else{
    ValueDisplay = ValueDisplay/2;
    }
 }
 printf("Change Bills(1-7)\nEnable all(8)\nDisable all(9)\nClear(10)\nContinue(11)\n-->");
 scanf("%d", &Index);
 if (Index <=7 && Index > 0){
    int y = (Bills[Index - 1]) ? 0:1;
    Bills[Index - 1] = y;
 }
 else if (Index == 8 && Index > 0){
for(int x = 0; x < 7; x++){
    Bills[x] = 1;
}
 }
else if (Index == 9 && Index > 0){
for(int x = 0; x < 7; x++){
    Bills[x] = 0;
}
}
else if (Index == 10 && Index > 0){
 system(Command);

}
else{
printf("enter a value\n-->");
scanf("%d", &Value);
CountBills(Value, Bills);
break;
}
}
}



void CountBills(int Value, int Bills[]){
//100 50 20 10 5 2 1
int X = 100;
int Y = 0;
while (1){
if (Bills[Y] == 1){
int ValueNew = (Value/X);
Value -= (ValueNew * X);
printf("%d dollar bills:%d\n",X , ValueNew);
}
Y ++;
if(X == 1){
    break;
}
switch((X != 50) ? 1:2){
case 1:
    X = X/2;
    break;
case 2:
    X = 20;
    break;
}

}

}
