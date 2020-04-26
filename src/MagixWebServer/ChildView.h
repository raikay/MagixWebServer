// ChildView.h : CChildView ��Ľӿ�
//


#pragma once

// CChildView ����

class CChildView : public CWnd, public slogger::Appender
{
// ����
public:
	CChildView();

// ����
public:
	CFont m_font;
	CEdit m_edt;
	HBRUSH m_hBlackBrush;

public:
	void SetConsolePos();
	void RefreshConsole();

	// log appender
	virtual int append(const slogger::tstring &logMsg);
	virtual bool open();
	virtual void close();
	virtual bool autoDelete();

// ����
public:

// ��д
	protected:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);

// ʵ��
public:
	virtual ~CChildView();

	// ���ɵ���Ϣӳ�亯��
protected:
	afx_msg void OnPaint();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnSize(UINT nType, int cx, int cy);
	virtual BOOL Create(LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID, CCreateContext* pContext = NULL);
//	afx_msg void OnDestroy();
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	afx_msg void OnDestroy();
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
};

