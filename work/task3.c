#include<stdio.h>

char *int2str( char *buf, unsigned int value)
{
	static	int i=-1;// need for from next step i=0
	i++;
if ((value) == 0)
{
	buf[i] = 0;
		i = 0;
	return buf;
}
		else
		int2str(buf, (value/10));
		buf[i++]=value % 10 +'0';
		return buf;
		
}
/*�������� ���������, ������� ��������� �������� ������������������ ����� � ������ � �������������� �������� 
� ��� �����-���� ������������ ������� ��������������
���������

������

��������� ������ �������� �� �������:

    - char* int2str(char *buf, unsigned int value) - �������, ����������� ����� � ������ 
    - main() - ����������� ����� ������
	��������� ��� �����: task3.h,task3.c,main3.c.*/