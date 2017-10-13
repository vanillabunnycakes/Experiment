// ExperimentView.h : interface of the CExperimentView class
//


#pragma once


class CExperimentView : public CView
{
protected: // create from serialization only
	CExperimentView();
	DECLARE_DYNCREATE(CExperimentView)

// Attributes
public:
	CExperimentDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~CExperimentView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnSettingsOptions();
};

#ifndef _DEBUG  // debug version in ExperimentView.cpp
inline CExperimentDoc* CExperimentView::GetDocument() const
   { return reinterpret_cast<CExperimentDoc*>(m_pDocument); }
#endif

