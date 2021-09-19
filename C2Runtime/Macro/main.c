//
//  main.c
//  Macro
//
//  Created by 朱利 on 2021/9/19.
//

#include <stdio.h>

//宏定义常量
#define PI 3.141592624

//宏定义方法
#define swap(x,y)\
x=x+y;\
y=x-y;\
x=x-y;

//宏定义代码
#define LOG\
    int a =3;\
    int b = 4;\
    printf("%d %d\n",a,b);

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("%.9lf\n",PI);
    int x = 1;
    int y = 2;
    swap(x, y);
    
    printf("%d %d\n",x,y);
    
    LOG
    
    return 0;
}
