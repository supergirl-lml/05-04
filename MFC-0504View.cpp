
// MFC-0504View.cpp : CMFC0504View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC-0504.h"
#endif

#include "MFC-0504Set.h"
#include "MFC-0504Doc.h"
#include "MFC-0504View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC0504View

IMPLEMENT_DYNCREATE(CMFC0504View, CRecordView)

BEGIN_MESSAGE_MAP(CMFC0504View, CRecordView)
END_MESSAGE_MAP()

// CMFC0504View ����/����

CMFC0504View::CMFC0504View()
	: CRecordView(IDD_MFC0504_FORM)
	, ID(0)
	, name(_T(""))
	, age(_T(""))
	, number(_T(""))
	, phone(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������

}

CMFC0504View::~CMFC0504View()
{
}

void CMFC0504View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet-> m_ID);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->m_1);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->m_3);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->m_2);
	DDX_Text(pDX, IDC_EDIT5, m_pSet->m_4);
}

BOOL CMFC0504View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void CMFC0504View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_MFC0504Set;
	CRecordView::OnInitialUpdate();

}


// CMFC0504View ���

#ifdef _DEBUG
void CMFC0504View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CMFC0504View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CMFC0504Doc* CMFC0504View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC0504Doc)));
	return (CMFC0504Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC0504View ���ݿ�֧��
CRecordset* CMFC0504View::OnGetRecordset()
{
	return m_pSet;
}



// CMFC0504View ��Ϣ�������
