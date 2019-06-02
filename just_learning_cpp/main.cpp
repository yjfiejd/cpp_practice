#include <iostream>
using namespace std;
//
//
//int main()
//{
//    int i = 1;
//    int b = 4;
//
//    int& rr = i;
//
//    cout <<  "rr是i的引用: "<< rr << endl;



// 把引用作为参数, 交换值
//#include <iostream>
//using namespace std;

//int main()
//{
//    int i = 1;
//    int j = 2;
//
//    cout << i  << "----"<< j << endl;
//
//    swap(i, j);
//
//    cout << i  << "----"<< j << endl;
//}
//
//void swap(int& i, int& j)
//{
//    int temp = i;
//    i = j;
//    j = temp;
//
//}


double vals[] = {10.1, 12.5, 33.1, 24.1, 50.0};
double& setValues(int i)
{
    return vals[i];
}

int main()
{
//    int i = 1;
    for (int i=0; i< sizeof(vals)/ sizeof(double); i++)
    {

    }
    cout << setValues(i) << endl;
}




