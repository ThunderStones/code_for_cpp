/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Alouette
 * @Date: 2020-11-21 18:34:33
 * @LastEditors: Alouette
 * @LastEditTime: 2020-11-21 18:48:49
 */
#include <stdio.h>
#include "sort.h"
#include "user_interface.h"

int main()
{
    int arr[10];
    int len = 10;
    sort_arr(arr, len);
    while (1)
    {
        UserInterfaceOled();
    }
    return 0;
}