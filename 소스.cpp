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
		// EOF�� ��ߵǴ� ������ ������ ������ �ԷµǾ�����
		// ENTER�� �Էµ��� �ʾƵ� �۵��ؾ� �Ǳ� ������
		// (���� �ֿܼ��� �Է��Ҷ��ʹ� �ٸ� ȯ��)
		cout << a;
	}
	//system("PAUSE");
	return 0;
}