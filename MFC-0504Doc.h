
// MFC-0504Doc.h : CMFC0504Doc ��Ľӿ�
//


#pragma once
#include "MFC-0504Set.h"


class CMFC0504Doc : public CDocument
{
protected: // �������л�����
	CMFC0504Doc();
	DECLARE_DYNCREATE(CMFC0504Doc)

// ����
public:
	CMFC0504Set m_MFC0504Set;

// ����
public:

// ��д
public:
	virtual BOOL OnNewDocument();
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// ʵ��
public:
	virtual ~CMFC0504Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// ����Ϊ����������������������ݵ� Helper ����
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
