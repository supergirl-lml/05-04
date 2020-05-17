
// MFC-0504View.cpp : CMFC0504View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
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

// CMFC0504View 构造/析构

CMFC0504View::CMFC0504View()
	: CRecordView(IDD_MFC0504_FORM)
	, ID(0)
	, name(_T(""))
	, age(_T(""))
	, number(_T(""))
	, phone(_T(""))
{
	m_pSet = NULL;
	// TODO: 在此处添加构造代码

}

CMFC0504View::~CMFC0504View()
{
}

void CMFC0504View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// 可以在此处插入 DDX_Field* 函数以将控件“连接”到数据库字段，例如
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// 有关详细信息，请参阅 MSDN 和 ODBC 示例
	DDX_Text(pDX, IDC_EDIT1, m_pSet-> m_ID);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->m_1);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->m_3);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->m_2);
	DDX_Text(pDX, IDC_EDIT5, m_pSet->m_4);
}

BOOL CMFC0504View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void CMFC0504View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_MFC0504Set;
	CRecordView::OnInitialUpdate();

}


// CMFC0504View 诊断

#ifdef _DEBUG
void CMFC0504View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CMFC0504View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CMFC0504Doc* CMFC0504View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC0504Doc)));
	return (CMFC0504Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC0504View 数据库支持
CRecordset* CMFC0504View::OnGetRecordset()
{
	return m_pSet;
}



// CMFC0504View 消息处理程序
