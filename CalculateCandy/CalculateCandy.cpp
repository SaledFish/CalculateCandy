/*********************************************
����2017
��Ŀ������
A,B,C�������Ǻ�����,ÿ�������ﶼ��һЩ�ǹ�,���ǲ�
֪������ÿ�������Ͼ����ж��ٸ��ǹ�,��������֪����
�µ���Ϣ��A - B, B - C, A + B, B + C. ���ĸ���ֵ
.ÿ����ĸ����ÿ������ӵ�е��ǹ���.
������Ҫͨ�����ĸ���ֵ�����ÿ���������ж��ٸ��ǹ�
,��A,B,C�����ﱣ֤���ֻ��һ������A,B,C����������
��������
����������
����Ϊһ�У�һ��4���������ֱ�ΪA - B��B - C��A + B
��B + C���ÿո������ ��Χ����-30��30֮��(������)��
���������
���Ϊһ�У�����������������A��B��C��˳�����A��
B��C���ÿո��������ĩ�޿ո� �������������������
A��B��C�������No
**********************************************/
#include <iostream>
using namespace std;

int main()
{
	int num1, num2, num3, num4;
	while (cin >> num1 >> num2 >> num3 >> num4)
	{
		int A, B, C;
		if ((num1 + num3) % 2 == 0 && (num2 + num4) % 2 == 0)
		{
			A = (num1 + num3) / 2;
			B = (num2 + num4) / 2;
			if (A >= 0 && B >= 0)
			{
				C = num4 - B;
				cout << A << " " << B << " " << C << endl;
			}
			else
				cout << "No" << endl;
		}
		else
			cout << "No" << endl;
	}
	return 0;
}