
// calcDlg.cpp: 实现文件
//

#include "stdafx.h"
#include "calc.h"
#include "calcDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CcalcDlg 对话框



CcalcDlg::CcalcDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_CALC_DIALOG, pParent)
	, m_result(_T(""))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CcalcDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_result);
}

BEGIN_MESSAGE_MAP(CcalcDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &CcalcDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON4, &CcalcDlg::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON7, &CcalcDlg::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON2, &CcalcDlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON6, &CcalcDlg::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON8, &CcalcDlg::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON3, &CcalcDlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON5, &CcalcDlg::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON9, &CcalcDlg::OnBnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTON11, &CcalcDlg::OnBnClickedButton11)
	ON_BN_CLICKED(IDC_BUTTON10, &CcalcDlg::OnBnClickedButton10)
	ON_BN_CLICKED(IDC_BUTTON12, &CcalcDlg::OnBnClickedButton12)
	ON_BN_CLICKED(IDC_BUTTON13, &CcalcDlg::OnBnClickedButton13)
	ON_BN_CLICKED(IDC_BUTTON14, &CcalcDlg::OnBnClickedButton14)
	ON_BN_CLICKED(IDC_BUTTON15, &CcalcDlg::OnBnClickedButton15)
	ON_BN_CLICKED(IDC_BUTTON16, &CcalcDlg::OnBnClickedButton16)
END_MESSAGE_MAP()


// CcalcDlg 消息处理程序

BOOL CcalcDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void CcalcDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CcalcDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CcalcDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CcalcDlg::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	m_result += L"1";
	UpdateData(FALSE);
}


void CcalcDlg::OnBnClickedButton4()
{
	// TODO: 在此添加控件通知处理程序代码
	m_result += L"2";
	UpdateData(FALSE);
}


void CcalcDlg::OnBnClickedButton7()
{
	// TODO: 在此添加控件通知处理程序代码
	m_result += L"3";
	UpdateData(FALSE);
}


void CcalcDlg::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	m_result += L"4";
	UpdateData(FALSE);
}


void CcalcDlg::OnBnClickedButton6()
{
	// TODO: 在此添加控件通知处理程序代码
	m_result += L"5";
	UpdateData(FALSE);
}


void CcalcDlg::OnBnClickedButton8()
{
	// TODO: 在此添加控件通知处理程序代码
	m_result += L"6";
	UpdateData(FALSE);
}


void CcalcDlg::OnBnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码
	m_result += L"7";
	UpdateData(FALSE);
}


void CcalcDlg::OnBnClickedButton5()
{
	// TODO: 在此添加控件通知处理程序代码
	m_result += L"8";
	UpdateData(FALSE);
}


void CcalcDlg::OnBnClickedButton9()
{
	// TODO: 在此添加控件通知处理程序代码
	m_result += L"9";
	UpdateData(FALSE);
}


void CcalcDlg::OnBnClickedButton11()
{
	// TODO: 在此添加控件通知处理程序代码
	m_result += L"0";
	UpdateData(FALSE);
}


void CcalcDlg::OnBnClickedButton10()
{
	// TODO: 在此添加控件通知处理程序代码
	m_result.Append(L"+");
	UpdateData(FALSE);
}


void CcalcDlg::OnBnClickedButton12()
{
	// TODO: 在此添加控件通知处理程序代码
	m_result.Append(L"-");
	UpdateData(FALSE);
}


void CcalcDlg::OnBnClickedButton13()
{
	// TODO: 在此添加控件通知处理程序代码
	m_result.Append(L"*");
	UpdateData(FALSE);
}


void CcalcDlg::OnBnClickedButton14()
{
	// TODO: 在此添加控件通知处理程序代码
	m_result.Append(L"/");
	UpdateData(FALSE);
}




void CcalcDlg::OnBnClickedButton15()
{
	// TODO: 在此添加控件通知处理程序代码
	m_result = "";
	UpdateData(FALSE);
}


void CcalcDlg::OnBnClickedButton16()
{
	// TODO: 在此添加控件通知处理程序代码
	float a, b;
	TCHAR oper;
	TCHAR result[50] = {};
	_stscanf_s(m_result, L"%f%c%f", &a, &oper, 1, &b);
	switch (oper)
	{
	case L'+':
		a += b;break;
	case L'-':
		a -= b;break;
	case L'*':
		a *= b;break;
	case L'/':
		a /= b;break;
	default:
		break;
	}
	_stprintf_s(result, L"%.1f", a);
	m_result = result;
	UpdateData(FALSE);
}
