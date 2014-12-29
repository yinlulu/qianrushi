/*************************************************
  Copyright (C), 1994-2014, Yinlulu
  File name:      my_strcpy
  Author:    Yinlulu   Version: 1.0       Date: 2014.6.1
  Description:    该程序实现复制字符串
  Others:         无
  Function List:  
                  my_strcpy
		  复制字符串
  History:        no
*************************************************/

#include <stdio.h>
#include <stdio.h>

/*************************************************
  Function:       my_strcpy
  Description:    复制字符串
  Calls:          no
  Called By:      create
  Input:          dest   要复制的字符串
                  src    被复制的字符串
  Output:         no
  Return:         no
  Others:         no
*************************************************/

void my_strcpy(char *dest, const char *src)
{
    while(*src != '\0')
    {
        *dest = *src;        //遍历字符串赋值
	dest++;
	src++;
    }

    *dest = '\0';
}
