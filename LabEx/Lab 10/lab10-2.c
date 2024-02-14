#include <stdio.h>

float convert(char grade)
{
    if(grade == 'A')
        return 4.0;
    else if(grade == 'B')
        return 3.0;
    else if(grade == 'C')
        return 2.0;
    else if(grade == 'D')
        return 1.0;
    else
        return 0.0;
}

int countGrade (char grade, char data[][10], int size)
{
    int i,j;
    int count = 0;
    for(i=0; i<size; i++)
        for(j=0; j<10; j++)
            if(grade == data[i][j])
                count++;

    return count;
}

int main (void)
{
    float x=0;
    int   y=0;
    char data[3][10] = {{'A','B','C','B','B','F','C','C','D','C'},
                        {'A','A','C','C','B','D','D','C','D','F'},
                        {'A','B','B','C','B','C','D','C','D','C'}};

    ;  //Statement

    printf("%.2f %d",x,y);
}
