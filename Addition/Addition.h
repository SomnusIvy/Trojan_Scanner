// Addition.h : main header file for the ADDITION application
//

#if !defined(AFX_ADDITION_H__B27147AD_E84F_41F7_8AA6_E7614E1D0EA4__INCLUDED_)
#define AFX_ADDITION_H__B27147AD_E84F_41F7_8AA6_E7614E1D0EA4__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CAdditionApp:
// See Addition.cpp for the implementation of this class
//

class CAdditionApp : public CWinApp
{
public:
	CAdditionApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAdditionApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CAdditionApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ADDITION_H__B27147AD_E84F_41F7_8AA6_E7614E1D0EA4__INCLUDED_)
