// // // #include <iostream>
// // // using namespace std;
// // // int main() {
// // //         int a = 1, b = 2;
// // //         int c = a << b;
// // //         int d = 1 << c;
// // //         int e = d >> d;
// // //         cout << e;
// // //         return 0;
// // // }
// // // #include <iostream>
// // // using namespace std;
// // // int main() {
// // //         int a = 1, b = 2;
// // //         int c = a | b;
// // //         int d = c & a;
// // //         int e = d ^ 0;
// // //         cout << e << d << c;
// // //         return 0;
// // // }

// // #include <iostream>
// // using namespace std;
// // int main() {
// //         int a = 2;
// //         switch(a << a) {
// //         case 8 : a++;
// //         case 4 : a++;
// //         case 2 : break;
// //         case 1 : a--;
// //         }
// //         cout << a;
// //         return 0;
// // }
// // #include <iostream>
// // using namespace std;
// // int main() {
// //         int t[] = { 8, 4, 3, 2, 1 }, i;
// //         for(i = t[4]; i < t[0]; i++)
// //             t[i - 1] = -t[3];
// //         cout << i;
// //         return 0;
// // }
// #include <iostream>
// using namespace std;
// int main() {
//         // bool t[5];
//         // for(int i = 0; i < 5; i++)
//         //     t[4 - i] = !(i % 2);
//         // cout << t[0] && t[2];

//        int g[3][3] = {{2, 4, 8}, {3, 6, 9}, {5, 10, 15}};
//        for(int i = 2; i >= 0; i--)
//            for(int j = 0; i < 3; j++)
//               g[i][j] += g[j][i];
//        cout << g[1][1]<<endl;
       


        
//         int a[] = {4, 0, 3, 1, 2};
//         int b[] = {1, 2, 3, 4, 5};
//         for(int i = 0; i < 5; i++)
//             b[a[i]] = b[4 - i];
//         cout << b[0] << b[4];
//         return 0;
// }
#include <iostream>
using namespace std;
    int main() {
        char arr[5] = { 'a', 'b', 'c', 'd', 'e' };
        for(int i = 1; i < 5; i++) {
            cout << "*";
            if((arr[i] - arr[i - 1]) % 2)
                continue;
            cout << "*";
        }
        return 0;
}









