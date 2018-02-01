#include <iostream>
using namespace std;

int main()
{
	char a;
	while (1)
	{
		a = getchar();
		if (a == EOF)
			break;
		// EOF를 써야되는 이유는 마지막 문장이 입력되었을때
		// ENTER가 입력되지 않아도 작동해야 되기 때문에
		// (내가 콘솔에서 입력할때와는 다른 환경)
		cout << a;
	}
	//system("PAUSE");
	return 0;
}