//
//  main.cpp
//  CPPStruct
//
//  Created by 朱利 on 2021/9/19.
//

#include <iostream>

struct Student {
    int no;
    char name[20];
    int *age;
    
    Student(){
        no = 1;
        strcpy(name, "name");
        age = new int(20);
    }
};

struct Student1: Student {
    
}stu;

typedef Student student;

/**
 结构体位域 8位=1字节 4->00000100
 */
struct Teacher{
    unsigned int a:1;//1位
    unsigned int b:2;
}tc, *ptc;

/**
 & 与
 | 或
 ~ 非
 ^ 异或（两个相异为1）
 */

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    printf("%d\n",stu.no);
    struct Student *pStu = &stu;
    printf("%d\n",pStu->no);//结构体属性通过->访问，前面不需要加*
    
    printf("%lu\n",sizeof(Teacher));
    ptc = &tc;
    ptc->a = 1;//1
    ptc->b = 2;//min:10 max:11
    return 0;
}



