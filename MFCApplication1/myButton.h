#pragma once


// myButton

class myButton : public CButton
{
	DECLARE_DYNAMIC(myButton)

public:
	myButton();
	virtual ~myButton();

protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};


