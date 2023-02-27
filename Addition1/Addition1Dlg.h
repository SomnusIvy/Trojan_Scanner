// Addition1Dlg.h : header file
//

#if !defined(AFX_ADDITION1DLG_H__DF37EA69_DA48_49E7_B9BF_255D86860133__INCLUDED_)
#define AFX_ADDITION1DLG_H__DF37EA69_DA48_49E7_B9BF_255D86860133__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CAddition1Dlg dialog

class CAddition1Dlg : public CDialog
{
// Construction
public:
	CAddition1Dlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CAddition1Dlg)
	enum { IDD = IDD_ADDITION1_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAddition1Dlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CAddition1Dlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void check();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ADDITION1DLG_H__DF37EA69_DA48_49E7_B9BF_255D86860133__INCLUDED_)
