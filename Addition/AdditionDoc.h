// AdditionDoc.h : interface of the CAdditionDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_ADDITIONDOC_H__7FB85FA6_74F0_4F65_B5DB_0884FABC43A6__INCLUDED_)
#define AFX_ADDITIONDOC_H__7FB85FA6_74F0_4F65_B5DB_0884FABC43A6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CAdditionDoc : public CDocument
{
protected: // create from serialization only
	CAdditionDoc();
	DECLARE_DYNCREATE(CAdditionDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAdditionDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CAdditionDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CAdditionDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ADDITIONDOC_H__7FB85FA6_74F0_4F65_B5DB_0884FABC43A6__INCLUDED_)
