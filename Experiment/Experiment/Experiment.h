// Experiment.h : main header file for the Experiment application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CExperimentApp:
// See Experiment.cpp for the implementation of this class
//

class CExperimentApp : public CWinApp
{
public:
	CExperimentApp();


// Overrides
public:
	virtual BOOL InitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CExperimentApp theApp;