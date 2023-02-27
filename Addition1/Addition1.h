// Addition1.h : main header file for the ADDITION1 application
//

#if !defined(AFX_ADDITION1_H__C25C5380_5224_4073_9D1F_EB178D6E0EC5__INCLUDED_)
#define AFX_ADDITION1_H__C25C5380_5224_4073_9D1F_EB178D6E0EC5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CAddition1App:
// See Addition1.cpp for the implementation of this class
//

class CAddition1App : public CWinApp
{
public:
	CAddition1App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAddition1App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CAddition1App)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ADDITION1_H__C25C5380_5224_4073_9D1F_EB178D6E0EC5__INCLUDED_)
