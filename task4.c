#include <stdio.h>

int main()
{
    float arr[30] = {6.68, 3.14, 13.36, 25, 9, 38, 1, 67, 26.72, 45.4, 6, 14, 14, 25, 16.2, 22, 185, 236, 247.7, 224, 777.6, 24, 77, 12, 77, 84};
    float count = arr[0];
    int index = 0;
    for(int x = 0; x < sizeof(arr)/sizeof(float); x++)
    {
        if(arr[x] > count)
        {
            count = arr[x];
            index = x;
        }
    }
    printf("Индекс массива с максимальным значением: %d\n", index);
    printf("Максимальное значение в массиве: %.3f\n", count);
    return 0;
}