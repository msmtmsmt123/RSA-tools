char* strrev(char* s)
{  
	//hָ��s��ͷ��
	char* h = s;
	char* t = s;
	char ch;

	//tָ��s��β��
	while(*t++){};
	t--;    //��t++����
	t--;    //������������'\0'

	//��h��tδ�غ�ʱ������������ָ����ַ�
	while(h < t)
	{
		ch = *h;
		*h++ = *t;    //h��β���ƶ�
		*t-- = ch;    //t��ͷ���ƶ�
	}

	return(s);
}

void strrevn(char* s, const int len)
{  
	//hָ��s��ͷ��
	char* h = s;
	char* t = s + len - 1;
	char ch;

	//��h��tδ�غ�ʱ������������ָ����ַ�
	while(h < t)
	{
		ch = *h;
		*h++ = *t;    //h��β���ƶ�
		*t-- = ch;    //t��ͷ���ƶ�
	}
}

inline int IsBigEndian()      //����ֽ��򷵻�1�� С�˷���0
{
	int i = 1;
	char* p = (char*)&i;
	return !p[0];
}

inline unsigned char convertInt2BCD(unsigned char value)   //������ת����8421BCD��
{
	return (unsigned char) (value + (value / 10) * 6);
}
