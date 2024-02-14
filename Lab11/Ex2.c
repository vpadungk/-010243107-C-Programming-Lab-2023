#include <stdio.h>
struct Book{
    char Title[50];
    char Author[50];
    int Price;
    float Weight;
};

int main(){
    struct Book Cpro = {
        "C programming",
        "John Smith",
        250,
        0.5
    };

    printf("Title: %s\n", Cpro.Title);
    printf("Author: %s\n", Cpro.Author);
    printf("Price: %d Baht\n", Cpro.Price);
    printf("Weight: %.1f kg\n", Cpro.Weight);

    return 0;
}