//读入字符并显示，直到读入'$'字符为止，要求如果有小写字母，均转成大写字母显示
#include <stdio.h>
void main()
{
	char ch;
	//当输入字符不是'$'时进行判断和显示
	while((ch=getchar())!='$')
	{	//如果输入字符为小写，减32转为大写字符	
		if((ch>='a')&&(ch<='z'))
			ch=ch+'A'-'a';
		putchar(ch);
	}
}