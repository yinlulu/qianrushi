/*************************************************
  Copyright (C), 1994-2014, Yinlulu
  File name:      count_9
  Author:    Yinlulu   Version: 1.0       Date: 2014.6.1
  Description:    该程序实现输入一个结点
  Others:         无
  Function List:  
                  input
		  该函数实现输入一个结点
  History:        no
*************************************************/

#include <stdio.h>
#include <stdio.h>
#include "../../include/typedef.h"

/*************************************************
  Function:       input
  Description:    输入一个结点信息
  Calls:          no
  Called By:      insert 
  Input:          newfriend
  Output:         no
  Return:         no
  Others:         no
*************************************************/

void input(link newfriend)
{
    printf("\033[40;36m请输入你要添加的好友信息:\033[0m\n");
    printf("\033[40;36mId:        \033[0m");
    scanf("%ld",&(newfriend->Id));
    setbuf(stdin,NULL);
    printf("\033[40;36m姓名:      \033[0m");
    scanf("%s",newfriend->Name);
    setbuf(stdin,NULL);
    printf("\033[40;36m手机号码:  \033[0m");
    scanf("%s",newfriend->Phone_num);
    setbuf(stdin,NULL);
    printf("\033[40;36m家庭住址:  \033[0m");
    scanf("%s",newfriend->Address);
    setbuf(stdin,NULL);
    printf("\033[40;36m公司电话:  \033[0m");
    scanf("%s",newfriend->Firm_num);
    setbuf(stdin,NULL);
}
