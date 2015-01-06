/*************************************************
  Copyright (C), 1994-2014, yinlulu
  File name:      count_9
  Author:    yinlulu   Version: 1.0       Date: 2014.5.1
  Description:    该程序实现判断内存是否分配成功
  Others:         无
  Function List:  
                  is_malloc
		  判断内存是否分配成功
  History:        no
*************************************************/

#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include "../../include/typedef.h"

/*************************************************
  Function:       is_malloc
  Description:    判断一个指针内存是否分配成功
  Calls:          no
  Called By:      insert
  Input:          test  需要判断的指针
  Output:         no
  Return:         no
  Others:         no
*************************************************/

void is_malloc(link test)
{
    if(test == NULL)
    {
         printf("Mallo error!\n");   //为空打印退出
	 exit(MALLOC_ERROR);
    }
}
