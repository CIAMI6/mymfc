#pragma once


// CmyBu

class CmyBu : public CButton
{
	DECLARE_DYNAMIC(CmyBu)

public:
	CmyBu();
	virtual ~CmyBu();

protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};


