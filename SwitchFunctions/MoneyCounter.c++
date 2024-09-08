// #include<iostream>
// using namespace std;

// int main() {
//     int money, final_amount;
//     cin >> money;
//     if (money > 100) {
//         int count = money / 100;
//         money -= count * 100;
//         cout << "100 Notes are " << count << endl;
//     } 
//     if (money < 100 && money > 50) {
//         int count = money / 50;
//         money -= count * 50;
//         cout << "50 Notes are " << count << endl;
//     }
//     if (money < 50 && money > 20) {
//         int count = money / 20;
//         money -= count * 20;
//         cout << "20 Notes are " << count << endl;
//     }
//     if (money < 20 && money > 10) {
//         int count = money / 10;
//         money -= count * 10;
//         cout << "10 Notes are " << count << endl;
//     }
//     if (money < 10 && money > 5) {
//         int count = money / 5;
//         money -= count * 5;
//         cout << "5 Notes are " << count << endl;
//     }
//     if (money < 5) {
//         int count = money / 1;
//         money -= count;
//         cout << "1 Notes are " << count << endl;
//     }
//     return 0;
// }


#include<iostream>
using namespace std;

int main() {
    int total, count;
    cin >> total;
    while (total > 0) {
        switch (total) {
            case 2001 ... INT32_MAX : count = total/2000;
                                    total -= count * 2000;
                                    cout << "Total 2000rs Notes Are " << count << endl;
                                    break;
            case 501 ... 2000 : count = total/500;
                                    total -= count * 500;
                                    cout << "Total 500rs Notes Are " << count << endl;
                                    break;
            case 101 ... 500 : count = total/100;
                                    total -= count * 100;
                                    cout << "Total 100rs Notes Are " << count << endl;
                                    break;
            case 51 ... 100 : count = total/50;
                            total -= count * 50;
                            cout << "Total 50rs Notes Are " << count << endl;
                    break;
            case 21 ... 50 : count = total/20;
                            total -= count * 20;
                            cout << "Total 20rs Notes Are " << count << endl;
                    break;
            case 11 ... 20 : count = total/10;
                            total -= count * 10;
                            cout << "Total 10rs Notes Are " << count << endl;
                    break;
            case 6 ... 10 : count = total/5;
                            total -= count * 5;
                            cout << "Total 5rs Notes Are " << count << endl;
                    break;
            default: count = total/1;
                    total -= count * 1;
                    cout << "Total 1rs Notes Are " << count << endl;
                    break;
        }
    }
    return 0;
}