/*************************************************
  Copyright (C), 1994-2014, Yinlulu
  File name:      count_9
  Author:    Yinlulu   Version: 1.0       Date: 2014.6.1
  Description:    该程序实现比较两个字符串
  Others:         无
  Function List:  
                  my_strcmp
		  比较两个字符串
  History:        no
*************************************************/

#include <stdio.h>
#include <stdio.h>
#include <string.h>

/*************************************************
  Function:       my_strcmp
  Description:    比较两个字符串
  Calls:          no
  Called By:      choose
  Input:          src str  要比较的字符串
  Output:         no
  Return:         0 1 -1
  Others:         no
*************************************************/

int my_strcmp(char *src, char *str)
{
    int i;

    while((*src  != '\0') && (*str != '\0'))
    {
        if(*src == *str)
	{
	    src++;
            str++;           //相同继续遍历
	}
	
	if(*src > *str)
	{
	    return 1;         //大返回1
	}

        if(*src < *str)
	{
	    return -1;
	}
    }

    if(*src == '\0')
    {
        if(*str == '\0')
	{
	    return 0;
	}
	else
	{
	    return -1;
        }
    }
    else
    {
        return 1;
    }
}

