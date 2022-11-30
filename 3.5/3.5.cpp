#include <iostream>
#include <fstream>

using namespace std;

void CheckValidParams(int n)
{
    if (n <= 0)
    {
        throw "Incorrect input";;
    }
}
void CheckStep(int h)
{
    if (h <= 0)
    {
        throw "Incorrect input";
    }
}
int calculate(int n, int x, int a, int b, int h)
{            
        int y = 0;
        if (a > b) swap(a, b);             
            for (int x = a; x <= b; x += h)
            {
                if (x < 0)
                {
                    for (int i = 1; i <= n; i++)
                    {
                        y += (i + x) * (i + x);
                    }
                    std::cout << "y = " << y << endl;
                    std::cout << "x = " << x << endl;
                    ofstream fout("test.txt");
                    ifstream file("a:\c++\3.5\x64\Debug\test.txt");
                    bool m;
                    cout << "Save result in file txt?\n yes = 1, no = 0" << endl;
                    cin >> m;
                    if (m == 1)
                    {
                        fout << "y = " << y << endl;
                        fout << "x = " << x << endl;
                        fout << "n = " << n << endl;
                    }
                }
            }
            return y;  
}
int calculate2(int n, int x, int a, int b, int h)
{   
    int i = 0, y = 0;
    if (a > b) swap(a, b);
    for (int x = a; x <= b; x += h)
    {
        if (x >= 0)
        {
            if (i < (n - 1))
            {
                int p = 1;
                for (int j = 1; j < n; j++)
                {
                    for (i; i < (n - 1); i++)
                    {
                        p *= (x + i) / (i + j);
                    }                 
                        y += p;                    
                }
            }
            std::cout << "y = " << y << endl;
            std::cout << "x = " << x << endl;
            ofstream fout("test.txt");
            ifstream file("a:\c++\3.5\x64\Debug\test.txt");
            bool m;
            cout << "Save result in file txt?\n yes = 1, no = 0" << endl;
            cin >> m;
            if (m == 1)
            {
                fout << "y = " << y << endl;
                fout << "x = " << x << endl;
                fout << "n = " << n << endl;
            }
        }
    }    
    return y;
}
int main()
{
    double i, x, n, y, p, a, b, h;

    std::cout << "Input x:";
    std::cin >> x;

    std::cout << "Input n:";
    std::cin >> n;
    CheckValidParams(n);
        
    std::cout << "Input a:";
    std::cin >> a;

    std::cout << "Input b:";
    std::cin >> b;

    std::cout << "Input h:";
    std::cin >> h;
    CheckStep(h);

    calculate(n, x, a, b, h);
    calculate2(n, x, a, b, h);

    return 0;
}