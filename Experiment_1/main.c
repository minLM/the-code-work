/*************************************************
** ���� : ѧ���ɼ�����ϵͳ
** ���� : Qingke Zhang/tsingke@sdnu.edu.cn
** �汾 : 2018-9-2 / 17:13
** ��Ȩ : GNU General Public License(GNU GPL)
/**************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "score.h"


/*----------------------------------*
		  Main Function
*-----------------------------------*/

int main()
{
    int i, j, aver, var, k = 1;
    int sum = 0, a = 0;
    string s;
    Student t;
    void calcuScore(SS stu[], int N); //1.����N��ѧ���������ɼ�������
	void searchScore(SS stu[], int N); //2.��ѯ
    void printOut(SS stu[], int N);//3.�����ֵ�ͷ���
	return 0;
} 