// myButton.cpp: 实现文件
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "myButton.h"


// myButton

IMPLEMENT_DYNAMIC(myButton, CButton)

myButton::myButton()
{

}

myButton::~myButton()
{
}


BEGIN_MESSAGE_MAP(myButton, CButton)
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()



// myButton 消息处理程序




void myButton::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	int x = rand() % 300;
	int y = rand() % 300;
	MoveWindow(x, y, 80, 30);
	CButton::OnMouseMove(nFlags, point);
}
