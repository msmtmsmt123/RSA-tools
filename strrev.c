char* strrev(char* s)
{  
	//h指向s的头部
	char* h = s;
	char* t = s;
	char ch;

	//t指向s的尾部
	while(*t++){};
	t--;    //与t++抵消
	t--;    //回跳过结束符'\0'

	//当h和t未重合时，交换它们所指向的字符
	while(h < t)
	{
		ch = *h;
		*h++ = *t;    //h向尾部移动
		*t-- = ch;    //t向头部移动
	}

	return(s);
}

void strrevn(char* s, const int len)
{  
	//h指向s的头部
	char* h = s;
	char* t = s + len - 1;
	char ch;

	//当h和t未重合时，交换它们所指向的字符
	while(h < t)
	{
		ch = *h;
		*h++ = *t;    //h向尾部移动
		*t-- = ch;    //t向头部移动
	}
}

inline unsigned char convertInt2BCD(unsigned char value)   //整形数转换成8421BCD码
{
    //asdfasdf
    return (unsigned char)(value + (value / 10) * 6);
}

inline int IsBigEndian()      //大端字节序返回1， 小端返回0
{
	int i = 1;
	char* p = (char*)&i;
	return !p[0];
}


