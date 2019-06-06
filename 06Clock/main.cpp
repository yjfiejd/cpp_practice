#include <iostream>
#include <time.h>
#include <iomanip>
#include <unistd.h>
#include <stdlib.h>
using namespace std;

// 初始化数据来自系统

class Clock
{
public:
    Clock() // 构造函数处似乎还
    {
        time_t t = time(NULL);
        struct tm ti = *localtime(&t);  //struct tm *localtime(const time_t *);

        hour = ti.tm_hour;
        min = ti.tm_min;
        sec = ti.tm_sec;
    }

    void run()
    {
        while (1)
        {
            show();   // 完成显示
            tick();  // 完成数据更新
        }
    }

private:
    void show()
    {
        system("cls");
        cout << setw(2) << setfill('0')<< hour<< ":";
        cout << setw(2) << setfill('0')<< min<< ":";
        cout << setw(2) << setfill('0')<< sec<< ":";
    }
    void tick()
    {
        sleep(1);
        if (++sec == 60)
        {
            sec = 0;
            min += 1;
            if (++min == 60)
            {
                min = 0;
                hour += 1;
                if (hour == 24)
                {
                    hour = 0;

                }
            }
        }
    }

    int hour;
    int min;
    int sec;

};









int main() {

    Clock c;
    c.run();

    return 0;
}