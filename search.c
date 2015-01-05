
/*************************************************
  Copyright (C), 1994-2014, yinlulu
  File name:      count_9
  Author:    yinlulu   Version: 1.0       Date: 2014.6.1
  Description:    该程序实现查找好友
  Others:         无
  Function List:  
                  search
		  查找好友
  History:        no
*************************************************/

#include <stdio.h>
#include<stdio.h>
#include "../../include/typedef.h"

/*************************************************
  Function:       search
  Description:    查找好友
  Calls:          no
  Called By:      search
  Input:          head  传入头指针
  Output:         no
  Return:         no
  Others:         no
*************************************************/

void search(link *head, link newfriend)
{
   
    char rec;
    int count = 0;

    printf("\033[40;36m请输入你要查找的好友的姓名: \033[0m");
    
    char aim_name[20];
    setbuf(stdin,NULL);
    scanf("%s",aim_name);
   
    link temp = (*head)->next;
    
    while(temp != *head)
    {
         if(my_strcmp(aim_name,temp->Name) == 0)
	 {
	     count++;
	     output(temp);
	 }     
	 
	 temp = temp->next;
    }
    
    if(count == 0)
    {
        
	printf("\n\033[40;36m查找失败！\033[0m\n\n");
	printf("\033[40;36m没有你要查找的好友信息！\n\033[0m");
	printf("\n\033[40;36m请输入任意键返回主菜单: \033[0m");
	setbuf(stdin,NULL);
	scanf("%c",&rec);
	system("reset");
	interface(head,newfriend);
    } 
    else
    {
	printf("\n\033[40;36m查找成功！\033[0m\n\n");
	printf("\n\033[40;36m请输入任意键返回主菜单: \033[0m");
	setbuf(stdin,NULL);
	scanf("%c",&rec);
	system("reset");
	interface(head,newfriend);
    }
}
