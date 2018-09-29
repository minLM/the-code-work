/*************************************************
** Դ�ļ�   : score.c
** ����˵�� : Function Definations
** ����ʱ�� : 2018-9-2/17:35
/**************************************************/

/*----------------ͷ�ļ�--------------*/

#include "score.h"
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

/*----------------��������-------------*/

bool compare(Student a, Student b)
{
    return a.score[3]>b.score[3];
}




//1.����N��ѧ�����Ե������ɼ�������
void calcuScore(SS stu[], int N)
{
	int i;

	 ifstream fin("D:/data.txt");
    if(!fin)
    {
        cout<<"Cannot open the file!";
        return 0;
    }
    while(!fin.eof())
    {
        for(i = 0; i < 6; i++)
        {
            fin>>stu[i].sid;
            fin>>stu[i].name;
            fin>>stu[i].score[0];
            fin>>stu[i].score[1];
            fin>>stu[i].score[2];
            stu[i].score[3] = 0.2*stu[i].score[0] + 0.2*stu[i].score[1] + 0.6*stu[i].score[2];
        }
    }
    sort(stu,stu+6,compare);
    for(i = 0; i < 6; i++)
    {
        stu[i].ran = k;
        k++;
        cout<<stu[i].ran<<" "<<stu[i].sid<<" "<<stu[i].name<<" "<<stu[i].score[0]<<" "<<stu[i].score[1]<<" "<<stu[i].score[2]<<" "<<endl;

    }
}




//2.����һ���ĸ�ʽ���N��ѧ������Ϣ
void searchScore(SS stu[], int N)
{
	int i;
	char s;
	cout<<"������ѧ�Ų�ѯ��"<<endl;
    cin>>s;
    for(i = 0; i < 6; i++)
    {
        if(stu[i].sid == s)
            cout<<stu[i].ran<<" "<<stu[i].name<<" "<<stu[i].score[0]<<" "<<stu[i].score[1]<<" "<<stu[i].score[2]<<" "<<endl;
    }


}

//3.�����ֵ�ͷ���
void printOut(SS stu[], int N)
{
	int i,a, aver, sum, var;
	 for(i = 0; i < 6; i++)
    {
        sum = stu[i].score[3] + sum;
    }
    aver = sum / 6;
    for(i = 0; i < 6; i++)
    {
        a = (stu[i].score[3]-aver)*(stu[i].score[3]-aver) + a;
    }
    var = a / 6;
    cout<<"��ֵΪ��"<<aver<<" "<<"����Ϊ:"<<var<<endl;

}