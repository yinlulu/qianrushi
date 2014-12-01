/*************************************************
  Copyright (C), 1994-2014, Yinlulu
  File name:      count_9
  Author:    Yinlulu   Version: 1.0       Date: 2014.6.1
  Description:    该程序实现删除结点
  Others:         无
  Function List:  
                  delete
		  删除链表中的结点
  History:        no
*************************************************/

#include <stdio.h>
#include <stdio.h>
#include "../../include/typedef.h"

/*************************************************
  Function:       delete
  Description:    删除结点
  Calls:          no
  Called By:      choose
  Input:          head 传入头指针
  Output:         no
  Return:         no
  Others:         no
*************************************************/

void delete(link *head, link newfriend)
{
    char rec;
    long int id;
    int count = 0;
    char name[20];
    
    printf("\033[40;36m请输入你要删除的好友的姓名: \033[0m");
    setbuf(stdin,NULL);
    scanf("%s",name);

    link temp = (*head)->next;

    while(temp != *head)
    {
         if(my_strcmp(temp->Name,name) == 0) //遍历链表
	 {
	     count++;                        //出现次数计数
	 }
	 temp = temp->next;
    }

    if(count == 0)
    {
        printf("\033[40;36m\n没有这个好友！\n\n\033[0m");
        printf("\033[40;36m请输入任意键返回主菜单: \033[0m");
	setbuf(stdin,NULL);
	scanf("%c",&rec);
	system("reset");
	interface(head,newfriend);   
    }

    else if(count == 1)
    {
        temp = (*head)->next;
        
	while(temp != *head)
	{
	    if((my_strcmp(temp->Name,name)) == 0)
	    {
		temp->prior->next = temp->next;       //删除结点
		temp->next->prior = temp->prior;
		printf("\033[40;36m\n删除成功！\033[0m\n");
		printf("\033[40;36m请输入任意键返回主菜单: \033[0m");
		setbuf(stdin,NULL);
		scanf("%c",&rec);
		system("reset");
		interface(head);
	    }
	    temp = temp->next;
	}
    }
    
    else
    {
        printf("\n\033[40;36m你输入的名字有下面几个人:\n\n\033[0m");
	temp = (*head)->next;
        
	while(temp != *head)
	{
	    if(my_strcmp(temp->Name,name) == 0)   //打印结点
	    {
	        output(temp);
		printf("\n");
	    }
	    
	    temp = temp->next;
	}

	printf("\033[40;36m请输入你要删除的好友的ID: \033[0m");
        setbuf(stdin,NULL);
	scanf("%ld",&id);
        
	temp = (*head)->next;

	while(temp != *head)
	{
	    if(temp->Id == id)
	    {
	        temp->prior->next = temp->next;   //删除结点
		temp->next->prior = temp->prior;
		printf("\033[40;36m\n删除成功！\033[0m\n\n");
		printf("\033[40;36m请输入任意键返回主菜单: \033[0m");
		setbuf(stdin,NULL);
		scanf("%c",&rec);
		system("reset");
		interface(head);
	    }
	    
	    temp = temp->next;
	}
    }
}
