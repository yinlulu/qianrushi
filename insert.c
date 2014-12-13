/*************************************************
  Copyright (C), 1994-2014, Yinlulu
  File name:      count_9
  Author:    Yinlulu   Version: 1.0       Date: 2014.6.1
  Description:    该程序实现插入结点，并排序
  Others:         无
  Function List:  
                  insert
		  插入结点并排序
  History:        no
*************************************************/

#include <stdio.h>
#include <stdio.h>
#include "../../include/typedef.h"

/*************************************************
  Function:       insert
  Description:    插入结点，并排序
  Calls:          no
  Called By:      choose
  Input:          num 传入需要找的数字
  Output:         no
  Return:         no
  Others:         no
*************************************************/

void insert(link *head, link newfriend)
{
    
    char test;
    
    newfriend = (link)malloc(sizeof(struct friend));
    is_malloc(newfriend);
    input(newfriend);            //输入新结点数据
    
    link temp = (*head)->next;
    
    while(temp != *head)
    {
        if(my_strcmp(newfriend->Name,temp->Name) == -1)
        {
	        //QIANMIAN
	        newfriend->next = temp;
	        temp->prior->next = newfriend;    //姓名小于头用头插
	        newfriend->prior = temp->prior;
	        temp->prior = newfriend;
		break;
        }

        if(my_strcmp(newfriend->Name,temp->Name) == 0) //姓名相同比较ID
        {
            if(newfriend->Id < temp->Id)
	    {
	        //QIANMIAN
	        newfriend->next = temp;           //ID小头插
	        temp->prior->next = newfriend;
	        newfriend->prior = temp->prior;
	        temp->prior = newfriend;
		break;
	    }
	    else
            {
                
		newfriend->prior = temp;
                newfriend->next = temp->next;
		temp->next->prior = newfriend;   //ID大后插
		temp->next = newfriend;
                
	        break;
	    }
        } 
	
	if(temp->next == *head)
	{
	    newfriend->prior = temp;
	    newfriend->next = temp->next;
	    temp->next->prior = newfriend; //插到最后
	    temp->next = newfriend;     
	    break;
	}

        if(my_strcmp(newfriend->Name,temp->Name) == 1)
        {
            temp = temp->next;             //最大姓名
	}
    }

    if(temp == *head)
    {
        temp->next = newfriend;
        newfriend->prior = temp;
        newfriend->next = *head;         //第一个数据
        (*head)->prior = newfriend;
    }

    printf("\n\033[40;36m添加成功！\033[0m\n\n");
    printf("\033[40;36m你要继续添加吗？ Y/N: \033[0m");
    scanf("%c",&test);
    setbuf(stdin,NULL);

    if(test == 'Y')
    {
        system("reset");
	insert(head,newfriend);
    }
    else
    {
        system("reset");
	interface(head,newfriend);
    }
}
