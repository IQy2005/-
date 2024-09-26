#include<stdio.h>//主函数
int main()//定义主函数
{
    int max(int x,int y); //对被调用函数max声明
    int a,b,c;             //定义a,b,c
    scanf("%d,%d",&a,&b);//输入变量a和b的值
    c=max(a,b);            //调用max函数，将得到的值赋给c
    printf("max=%d\n",c); //输出c的值
    return 0;
}
//求两个数较大者的max函数
int max(int x,int y)  //定义max函数，函数值为整形，形式参数x，y为整形
{
    int z;  //定义函数中用到的z为整形
    if(x>y)z=x;  //若x>y成立，则将x的值赋给变量z
    else z=y;  //否则将y的值赋给变量z
    return(z);  //将z作为max的值，返回到调用max函数的位置，及c=max(a,b)中的max（a，b）
}
