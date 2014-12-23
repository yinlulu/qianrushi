/*************************************************
  Copyright (C), 1994-2014, Yinlulu
  File name:      count_9
  Author:    Yinlulu   Version: 1.0       Date: 2014.5.1
  Description:    该程序实现输出一个界面
  Others:         无
  Function List:  
                  interface
		  输出一个界面
  History:        no
*************************************************/

#include <stdio.h>
#include <stdio.h>
#include "../../include/typedef.h"

/*************************************************
  Function:       count_num
  Description:    求出1－n中9的个数，返回个数
  Calls:          choose
  Called By:      main
  Input:          num 传入需要找的数字
  Output:         no
  Return:         返回9的个数
  Others:         no
*************************************************/

void interface(link *head, link newfriend)
{
    printf("\033[40;36m\t\t+===============================================+\n\033[0m");
    printf("\033[40;36m\t\t|\t\t\t\t\t\t|\n\033[0m");
    printf("\033[40;36m\t\t|\t\t多功能电子通讯录\t\t|\n\033[0m");
    printf("\033[40;36m\t\t|\t\t\t\t\t\t|\n\033[0m");
    printf("\033[40;36m\t\t|\t\t\t\t\t\t|\n\033[0m");
    printf("\033[40;36m\t\t|\t\t\t\t\t版本:1.0|\n\033[0m");
    printf("\033[40;36m\t\t|-----------------------------------------------|\n\033[0m");
    printf("\033[40;36m\t\t|\t1:添加好友信息    2:查看好友信息\t|\n\033[0m");
    printf("\033[40;36m\t\t|-----------------------------------------------|\n\033[0m");
    printf("\033[40;36m\t\t|\t3:搜索好友信息    4:删除好友信息\t|\n\033[0m");
    printf("\033[40;36m\t\t+===============================================+\n\033[0m");
    printf("\n\t\t\033[40;36m请选择你要实现的功能:\033[0m");
    printf("\n\n\t\t\033[40;36mINSERT/DISPLAY/SEARCH/DELETE: \033[0m");
    
    choose(head,newfriend);   //函数调用
}
