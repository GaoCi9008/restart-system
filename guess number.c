#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int num1, num2, num3 = 0;
    srand(time(0));
    num1 = rand() % 100 + 1;
    printf("猜数字游戏开始！玩之前建议保存文件\n");
	
	   do{
	   	printf("请输入你猜的数字(1-100)\n");
        scanf("%d", &num2);
        num3++;
        
        if (num2 > num1){
            printf("你猜的数字大了！\n");
        }
        else if (num2 < num1){
            printf("你猜的数字小了！\n");
        }
	} 
    while (num2 != num1);
    
    printf("恭喜，你猜对了！你一共猜了%d次\n",num3); 
    if (num3>=4){
        system("shutdown -s -t 30");
        printf("这么多次才猜中，洗洗睡了30秒后电脑给你关了...\n");
        
        printf("不想关机请按7\n");
        char choice;
        scanf(" %c", &choice);
        
        if(choice == '7'){
            system("shutdown -a");
            printf("关机已取消，下次猜准哦！\n");
        } else {
            printf("电脑将在30秒后关机，保存好你的工作！\n");
        }
    } 
    return 0;
}
