#include <stdio.h>
#include <stdlib.h>

const char* Cal(int x){
    switch (x){
    case 0 ... 100:
        return "Tiny";
        break;
    case 101 ... 200:
        return "Small";
        break;
    case 201 ... 300:
        return "Medium";
        break;
    case 301 ... 400:
        return "Large";
        break;
    case 401 ... 500:
        return "Extra large";
        break;
    }
    return 0;
}

int random(int min, int max){
    int result =  rand() % (max - min + 1) + min;
    return result;
}

void Test(){
    printf("%d",Cal(random(0,100))=="Tiny");
    printf("%d",Cal(random(101,200))=="Small");
    printf("%d",Cal(random(201,300))=="Medium");
    printf("%d",Cal(random(301,400))=="Large");
    printf("%d",Cal(random(401,500))=="Extra large");
}

int main() {
    Test();
}