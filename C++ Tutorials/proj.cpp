// #include <iostream>
// #include <windows.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int h, m, s, a, err;
//     err = a = 0;
//     while (err == 0)
//     {
//         cout << "enter hour\n";
//         cin >> h;
//         cout << "enter minute\n";
//         cin >> m;
//         cout << "enter second\n";
//         cin >> s;
//         if (h < 24 && m < 60 && s < 60)
//         {
//             err++;
//         }
//         system("cls");
//     }
//     while (a == 0)
//     {
//         system("cls");
//         cout << h << ":" << m << ":" << s << "\n";
//         Sleep(1000);
//         s++;
//         if (s > 59)
//         {
//             s = 0;
//             m++;
//         }
//         if (m < 60)
//         {
//             m = 0;
//             h++;
//         }
//         if (h < 24)
//         {
//             h = 0;
//             a++;
//         }
//     }
//     return 0;
// }