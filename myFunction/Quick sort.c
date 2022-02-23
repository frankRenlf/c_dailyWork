#define _CRT_SECURE_NO_WARNINGS 

#include<stdio.h>
#include<string.h>    //字符串头文件 
int a[1000001];     //在主函数外面定义数组可以大一点（很多很多） 
void kuaisu_sheng(int left,int right)
{
    int i = left;     //将区间记录下来 
    int j = right;
    int key = a[i];    //记录参考值 
    if(left>=right)  //如果左边索引大于或者等于右边的索引就代表已经整理完成一个组了
        return ;
    while(i<j)   //控制在当组内寻找一遍
    {
        while(i<j&&key<=a[j])   //而寻找结束的条件就是，1，找到一个小于或者大于key的数（大于或小于取决于你想升序还是降序）2，没有符合条件1的，并且i与j的大小没有反转 
            j--;    //向前寻找
        a[i]=a[j];     //找到一个这样的数后就把它赋给前面的被拿走的i的值（如果第一次循环且key是a[left]，那么就是给key）
        while(i<j&&key>=a[i])   //这是i在当组内向前寻找，同上，不过注意与key的大小关系停止循环和上面相反，因为排序思想是把数往两边扔，所以左右两边的数大小与key的关系相反
            i++;
        a[j]=a[i];
    }
    a[i]=key;                  //当在当组内找完一遍以后就把中间数key回归
    kuaisu_sheng(left,i-1);     //最后用同样的方式对分出来的左边的小组进行同上的做法
    kuaisu_sheng(i+1,right);    //用同样的方式对分出来的右边的小组进行同上的做法
                               //当然最后可能会出现很多分左右，直到每一组的i = j 为止
}
void kuaisu_jiang(int left,int right)
{
    if(left>=right)
        return ;
    int i=left;
    int j=right;
    int key=a[i]; 
    while(i<j)  
    {
        while(i<j&&key>=a[j])   //顺序这里改 
            j--;    
        a[i]=a[j];    
        while(i<j&&key<=a[i])   //还有这里（不清楚怎么改可以对照上面升序的函数） 
        i++;
        a[j]=a[i];
    }
    a[i]=key;              
    kuaisu_jiang(left,i-1);
    kuaisu_jiang(i+1,right);
}
//int main()
//{
//    int n,i,choice;
//    printf("快速排序小程序(By STY)\n\n");
//    printf("升序还是降序\n");
//    printf("升序选“1 ”\n");
//    printf("降序选“2 ”\n");
//    printf("请输入:(1~2)\n");
//    printf("退出请按“0 ”(在键盘上)，并按回车，谢谢使用！\n");
//    scanf("%d", &choice);
//    while(choice != 0)
//    {
//        memset(a,0,sizeof(a));    //清空数组 
//        if(choice==1)
//        {
//            printf("请输入要排序的数字个数:\n");
//            scanf("%d", &n);
//            printf("请输入%d个数字:\n", n);
//            for(int ii=0;ii<n;ii++)
//                scanf("%d",&a[ii]);
//            kuaisu_sheng(0,n);    //引用函数 
//            printf("结果：\n");
//            for(i=1;i<n;i++)      //循环输出 
//                printf("%d ",a[i]);
//            printf("%d(升序)\n\n\n\n",a[i]);
//        }
//        else if(choice==2)
//        {
//            printf("请输入要排序的数字个数:\n");
//            scanf("%d", &n);
//            printf("请输入%d个数字:\n", n);
//            for(int ii=0;ii<n;ii++)
//                scanf("%d",&a[ii]);
//            kuaisu_jiang(0,n);
//            printf("结果：\n");
//            for(i=0;i<n-1;i++)
//                printf("%d ",a[i]);
//            printf("%d(降序)\n\n\n\n",a[i]);
//        }
//        else
//            printf("开玩笑吧!\n");
//
//        printf("快速排序小程序(By STY)\n\n");
//        printf("升序还是降序\n");
//        printf("升序选“1”\n");
//        printf("降序选“2”\n");
//        printf("请输入:(1~2)\n");
//        printf("退出请按“0”(在键盘上)，并按回车，谢谢使用！\n");      
//    }
//    return 0;   
//}
//ENDING 
