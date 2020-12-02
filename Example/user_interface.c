/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Alouette
 * @Date: 2020-11-21 18:35:04
 * @LastEditors: Alouette
 * @LastEditTime: 2020-11-21 18:50:34
 */
//结构体初始化
#include "user_interface.h"
InterfaceCfgNode InterfaceCfg =
    {
        .MenuStatus = INFO_START,
        .LineStatus = LINE1,
};

//界面操作逻辑部分
//更改所在行，所在页
void FunctionSelection(void)
{
}

//参数调试
void DebugParameter(void)
{
}

//OLED界面显示
void OledDisplay(void)
{
    switch (InterfaceCfg.MenuStatus)
    {
    case INFO_START:
        break;
    case INFO_PID:
        break;
    case INFO_IMAGE:
        break;
    }
}

void UserInterfaceOled(void)
{
    FunctionSelection(); //功能选择
    DebugParameter();    //参数调节
    OledDisplay();       //OLED屏幕显示
}
