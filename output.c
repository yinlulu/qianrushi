/*************************************************
  Copyright (C), 1994-2014, Yinlulu
  File name:      count_9
  Author:    Yinlulu   Version: 1.0       Date: 2014.6.1
  Description:    该程序实现输出一个结点内容
  Others:         无
  Function List:  
                  output
		  输出一个结点内容
  History:        no
*************************************************/

#include <stdio.h>
#include <stdio.h>
#include "../../include/typedef.h"

/*************************************************
  Function:       output
  Description:    输出一个结点内容
  Calls:          no
  Called By:      search delete
  Input:          temp  传入的结点
  Output:         no
  Return:         no
  Others:         no
*************************************************/

void output(link temp)
{
    printf("\033[40;36mId:        %ld\033[0m\n",temp->Id);
    printf("\033[40;36m姓名:      %s\033[0m\n",temp->Name);
    printf("\033[40;36m手机号码:  %s\033[0m\n",temp->Phone_num);
    printf("\033[40;36m家庭住址:  %s\033[0m\n",temp->Address);
    printf("\033[40;36m公司号码:  %s\033[0m\n\n",temp->Firm_num);

}
