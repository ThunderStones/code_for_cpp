/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Alouette
 * @Date: 2020-11-21 18:35:12
 * @LastEditors: Alouette
 * @LastEditTime: 2020-11-21 18:42:47
 */
//菜单显示状态
#ifndef __user_interface_h__
#define __user_interface_h__

typedef enum
{
    INFO_START = 0,
    INFO_IMAGE,
    INFO_PID,
} MenuStatusNode;

//行显示状态
typedef enum
{
    LINE1 = 0,
    LINE2,
    LINE3,
    LINE4,
    LINE5,
    LINE6,
    LINE7,
    LINE8,
} LineStatusNode;

//显示界面配置结构体
//定义显示的菜单，行数
typedef struct
{
    MenuStatusNode MenuStatus;
    LineStatusNode LineStatus;
} InterfaceCfgNode;

void UserInterfaceOled(void); //用户界面(OLED)

#endif