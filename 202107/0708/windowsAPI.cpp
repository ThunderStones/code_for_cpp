#include <windows.h>
#include <windowsx.h>

#define WINDOWS_CLASS_NAME L"WINCLASS" //L表示长字符，字符占两个字节
LRESULT CALLBACK WinsowProc(HWND hwnd, UINT msg, WPARAM wparam, LPARAM lparam); //消息处理函数 回调函数
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR szCmdLine, int iCmdShow)
{
    MessageBox(NULL, TEXT("Hello world"), TEXT("HelloMsg"), MB_YESNOCANCEL);
    return 0;
}
//　軽い　賑やか　薄い　若い　細い　立派　秘密ｎ　短い　狭い　濃い　暖かい　温い　汚い　新鮮　弱い　少ない　太い
//　古い　厚い　健康　低い　丸い　不味い　丈夫　丁寧　
//　結構　毎回　大勢　大分
//　難い　階
/*
入口函数 WinMain
int WINAPI WinMain(HINSTANCE hInstance,      实例句柄
                   HINSTANCE hPrevInstance,  
                   PSTR szCmdLine,           执行程序的命令行参数
                   int iCmdShow)             程序运行界面的最初显示方式
消息窗口函数
MessageBoxW(
     HWND hWnd,
     LPCWSTR lpText,
     LPCWSTR lpCaption,
     UINT uType);
*/