#include <iostream>
#include <string.h>
using namespace std;


// 单变量空间
//数组

int main1() {
    int *p = new int(200); // 开辟一个空间
    cout << *p << endl;


    string *ps = new string; // 字符串
    *ps = "china";
    cout << *ps << endl;

    struct Stu
    {
        int age;
        string name;
    };

    Stu *pStu = new Stu{10, "bob"}; // 结构体
    cout << pStu->age << endl;
    cout << pStu->name << endl;


    return 0;
}


int main2()
{
    char *p  = new char[40];
    strcpy(p, "china");
    cout << p << endl;

    int *pi = new int[5];  // 开辟多变量空间
    memset(pi, 0, sizeof(int[5]));
    for(int i = 0; i<5; i++)
    {
        cout << pi[i] << endl;
    }

    char **ppc = new char*[5]{NULL};

    ppc[0] = "china";
    strcpy(ppc[0], "china");
    ppc[1] = "automan";
    ppc[2] = "grateWall";

    while (*ppc)
    {
        cout << *ppc++ << endl;
    }

    // 生成二维数组
    int(*par)[4] = new int[3][4]{{0}}; // 初始化

    for(int i=0; i<sizeof(int[3][4])/ sizeof(int[4]); i++)
    {
        for(int j=0; j < 4; j++)
        {
            cout << par[i][j] << " " << endl;
        }

    }

}


int main()
{
    int *p = new int;
    delete p;

    int *q = new int[1000];
    delete []q;  // 注意写法


}




//  内联函数

