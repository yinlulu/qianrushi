/*************************************************
  Copyright (C), 1994-2014, Wangxin
  File name:      

display0000
  Author:    YinLuLu   Version: 1.0       Date: 2014.6.1
  Description:    该程序实现打印链表
  

Others:         无
  Function List:  
                  display
		  打印链表
  History:        no
*************************************************/

#include <stdio.h>
#include<stdio.h>
#include 

"../../include/typedef.h"

/*************************************************
  Function:       display
  

Description:    打印字符串
  Calls:          no
  Called By:      choose
  Input:          head  传入的头指针
  

Output:         no
  Return:         no
  Others:         no
*************************************************/

void display(link *head, link newfriend)
{
    char rec;
    link temp = (*head)->next;

    printf("\033[40;36m已

拥有好友的信息:\033[0m\n\n");

    while(temp != *head)
    {
        output(temp);            //打印信息
	temp 

= temp->next;       //遍历链表
    }
    printf("\033[40;36m请输入任意键返回主菜单: \033[0m");
    setbuf

(stdin,NULL);
    scanf("%c",&rec);
    system("reset");
    interface(head,newfriend);    //函数调用
}
