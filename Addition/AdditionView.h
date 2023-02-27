// AdditionView.h : interface of the CAdditionView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_ADDITIONVIEW_H__8E8D36DD_B926_4D87_B189_43BFD6F980DD__INCLUDED_)
#define AFX_ADDITIONVIEW_H__8E8D36DD_B926_4D87_B189_43BFD6F980DD__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CAdditionView : public CView
{
protected: // create from serialization only
	CAdditionView();
	DECLARE_DYNCREATE(CAdditionView)

// Attributes
public:
	CAdditionDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAdditionView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CAdditionView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CAdditionView)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in AdditionView.cpp
inline CAdditionDoc* CAdditionView::GetDocument()
   { return (CAdditionDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ADDITIONVIEW_H__8E8D36DD_B926_4D87_B189_43BFD6F980DD__INCLUDED_)
