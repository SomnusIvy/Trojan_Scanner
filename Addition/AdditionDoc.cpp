// AdditionDoc.cpp : implementation of the CAdditionDoc class
//

#include "stdafx.h"
#include "Addition.h"

#include "AdditionDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAdditionDoc

IMPLEMENT_DYNCREATE(CAdditionDoc, CDocument)

BEGIN_MESSAGE_MAP(CAdditionDoc, CDocument)
	//{{AFX_MSG_MAP(CAdditionDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CAdditionDoc construction/destruction

CAdditionDoc::CAdditionDoc()
{
	// TODO: add one-time construction code here

}

CAdditionDoc::~CAdditionDoc()
{
}

BOOL CAdditionDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CAdditionDoc serialization

void CAdditionDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CAdditionDoc diagnostics

#ifdef _DEBUG
void CAdditionDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CAdditionDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CAdditionDoc commands
