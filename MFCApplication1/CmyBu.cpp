// CmyBu.cpp: 实现文件
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "CmyBu.h"


// CmyBu

IMPLEMENT_DYNAMIC(CmyBu, CButton)

CmyBu::CmyBu()
{

}

CmyBu::~CmyBu()
{
}


BEGIN_MESSAGE_MAP(CmyBu, CButton)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()



// CmyBu 消息处理程序




void CmyBu::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	GetParent()->GetDlgItem(IDC_EDIT1)->ShowWindow(SW_HIDE);
	CButton::OnLButtonDown(nFlags, point);
}


void CmyBu::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	GetParent()->GetDlgItem(IDC_EDIT1)->ShowWindow(SW_SHOW);
	CButton::OnLButtonUp(nFlags, point);
}
