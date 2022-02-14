
#include <stdio.h>
int main()
{
	printf("% d\n", '\041');//这里后面加三个数代表八进制数字，转为十进制是33
	printf("% c\n", '\041');//对应的ASCII表是感叹号，因为没有定义变量，所以需要用单引号
	return 0;
}