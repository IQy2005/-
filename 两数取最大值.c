#include<stdio.h>//������
int main()//����������
{
    int max(int x,int y); //�Ա����ú���max����
    int a,b,c;             //����a,b,c
    scanf("%d,%d",&a,&b);//�������a��b��ֵ
    c=max(a,b);            //����max���������õ���ֵ����c
    printf("max=%d\n",c); //���c��ֵ
    return 0;
}
//���������ϴ��ߵ�max����
int max(int x,int y)  //����max����������ֵΪ���Σ���ʽ����x��yΪ����
{
    int z;  //���庯�����õ���zΪ����
    if(x>y)z=x;  //��x>y��������x��ֵ��������z
    else z=y;  //����y��ֵ��������z
    return(z);  //��z��Ϊmax��ֵ�����ص�����max������λ�ã���c=max(a,b)�е�max��a��b��
}
