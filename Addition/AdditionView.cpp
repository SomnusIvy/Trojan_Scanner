// AdditionView.cpp : implementation of the CAdditionView class
//

#include "stdafx.h"
#include "Addition.h"

#include "AdditionDoc.h"
#include "AdditionView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAdditionView

IMPLEMENT_DYNCREATE(CAdditionView, CView)

BEGIN_MESSAGE_MAP(CAdditionView, CView)
	//{{AFX_MSG_MAP(CAdditionView)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CAdditionView construction/destruction

CAdditionView::CAdditionView()
{
	// TODO: add construction code here

}

CAdditionView::~CAdditionView()
{
}

BOOL CAdditionView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CAdditionView drawing

void CAdditionView::OnDraw(CDC* pDC)
{
	CAdditionDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CAdditionView printing

BOOL CAdditionView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CAdditionView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CAdditionView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CAdditionView diagnostics

#ifdef _DEBUG
void CAdditionView::AssertValid() const
{
	CView::AssertValid();
}

void CAdditionView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CAdditionDoc* CAdditionView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CAdditionDoc)));
	return (CAdditionDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CAdditionView message handlers
