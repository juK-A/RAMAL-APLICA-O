/*
 * Copyright (C) 2011-2024 MicroSIP (http://www.microsip.org)
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#pragma once

#include "resource.h"
#include "global.h"

class ShortcutsDlg :
	public CDialog
{
public:
	ShortcutsDlg(CWnd* pParent = NULL);	// standard constructor
	~ShortcutsDlg();
	enum { IDD = IDD_SHORTCUTS };

protected:
	virtual BOOL OnInitDialog();
	afx_msg void OnDestroy();
	virtual void PostNcDestroy();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnClose();
	afx_msg void OnBnClickedCancel();
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedToggle();
	afx_msg void OnNMClickSyslinkToggle(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnNMClickSyslinkBLF(NMHDR *pNMHDR, LRESULT *pResult);
	void UpdateToggle(bool check, int i);
};

