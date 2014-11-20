/*************************************************
  Copyright (C), 1994-2014, yinlulu
  File name:      create
  Author:    yinlulu   Version: 1.0       Date: 2014.11.20
  Description:    该程序实现创建一个链表头结点
  Others:         无
  Function List:  
                  create
		  创建一个结点
  History:        no
*************************************************/

#include <stdio.h>
#include <malloc.h>
#include "../../include/typedef.h"

/*************************************************
  Function:       create
  Description:    创建一个结点
  Calls:          no
  Called By:      main
  Input:          head  传入的头指针
  Output:         no
  Return:         no
  Others:         no
*************************************************/

void create(link *head)
{
    *head = (link)malloc(sizeof(struct friend));
    is_malloc(*head);

    (*head)->next = *head;    //双向链表
    (*head)->prior = *head;
    
    (*head)->Id = 1;
    my_strcpy((*head)->Address,"A");
    my_strcpy((*head)->Phone_num,"B");   //赋值
    my_strcpy((*head)->Firm_num,"C");
    my_strcpy((*head)->Name,"D");

}
