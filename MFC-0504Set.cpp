
// MFC-0504Set.cpp : CMFC0504Set ���ʵ��
//

#include "stdafx.h"
#include "MFC-0504.h"
#include "MFC-0504Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC0504Set ʵ��

// ���������� 2020��5��11��, 19:19

IMPLEMENT_DYNAMIC(CMFC0504Set, CRecordset)

CMFC0504Set::CMFC0504Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0;
	m_1 = L"";
	m_2 = L"";
	m_3 = L"";
	m_4 = L"";
	m_nFields = 5;
	m_nDefaultType = dynaset;
}
//#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString CMFC0504Set::GetDefaultConnect()
{
	return _T("DSN=\x6570\x636e\x6e90-\x5b66\x751f\x4fe1\x606f;DBQ=C:\\\x6570\x636e\x5e93\\Database1.accdb;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString CMFC0504Set::GetDefaultSQL()
{
	return _T("[ѧ����Ϣ��]");
}

void CMFC0504Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[�ֶ�1]"), m_1);
	RFX_Text(pFX, _T("[�ֶ�2]"), m_2);
	RFX_Text(pFX, _T("[�ֶ�3]"), m_3);
	RFX_Text(pFX, _T("[�ֶ�4]"), m_4);

}
/////////////////////////////////////////////////////////////////////////////
// CMFC0504Set ���

#ifdef _DEBUG
void CMFC0504Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void CMFC0504Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

