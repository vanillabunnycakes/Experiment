// ExperimentView.cpp : implementation of the CExperimentView class
//

#include "stdafx.h"
#include "Experiment.h"

#include "ExperimentDoc.h"
#include "ExperimentView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CExperimentView

IMPLEMENT_DYNCREATE(CExperimentView, CView)

BEGIN_MESSAGE_MAP(CExperimentView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_SETTINGS_OPTIONS, &CExperimentView::OnSettingsOptions)
END_MESSAGE_MAP()

// CExperimentView construction/destruction

CExperimentView::CExperimentView()
{
	// TODO: add construction code here

}

CExperimentView::~CExperimentView()
{
}

BOOL CExperimentView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CExperimentView drawing

void CExperimentView::OnDraw(CDC* /*pDC*/)
{
	CExperimentDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// CExperimentView printing

BOOL CExperimentView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CExperimentView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CExperimentView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}


// CExperimentView diagnostics

#ifdef _DEBUG
void CExperimentView::AssertValid() const
{
	CView::AssertValid();
}

void CExperimentView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CExperimentDoc* CExperimentView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CExperimentDoc)));
	return (CExperimentDoc*)m_pDocument;
}
#endif //_DEBUG


// CExperimentView message handlers

void CExperimentView::OnSettingsOptions()
{
	// TODO: Add your command handler code here
	COptions dlgOptions;
	dlgOptions.DoModal();
}
