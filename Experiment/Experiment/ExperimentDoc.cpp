// ExperimentDoc.cpp : implementation of the CExperimentDoc class
//

#include "stdafx.h"
#include "Experiment.h"

#include "ExperimentDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CExperimentDoc

IMPLEMENT_DYNCREATE(CExperimentDoc, CDocument)

BEGIN_MESSAGE_MAP(CExperimentDoc, CDocument)
END_MESSAGE_MAP()


// CExperimentDoc construction/destruction

CExperimentDoc::CExperimentDoc()
{
	// TODO: add one-time construction code here

}

CExperimentDoc::~CExperimentDoc()
{
}

BOOL CExperimentDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}




// CExperimentDoc serialization

void CExperimentDoc::Serialize(CArchive& ar)
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


// CExperimentDoc diagnostics

#ifdef _DEBUG
void CExperimentDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CExperimentDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CExperimentDoc commands
