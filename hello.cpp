#include <iostream>
using namespace std;

// Biến toàn cục và biến cục bộ

// int globalVar = 10; 
// void func() {
//     int localVar = 20;
//     cout << "Giá trị biến cục bộ: " << localVar << endl;
// }
// int main() {
//     cout << "Giá trị biến toàn cục: " << globalVar << endl;
//     func();
//     return 0;
// }

// Biến động năng cao 
// int main() {
//     int a;
//     cout << "Enter a number: ";
//     cin >> a;

//     int* arr = new int[a];
//     for (int i = 0; i < a; i++){
//         cout << "Arr[" << i << "] = ";
//         cin >> arr[i];
//     }

//     cout << "The array is: ";
//     for (int i = 0; i < a; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     delete[] arr;
//     return 0;
// }

// Kiểu dữ liệu
// int main() {
//     int a = 10, b = 5;
//     // Toán tử số học
//     cout << "Tổng: " << a + b << endl;
//     cout << "Hiệu: " << a - b << endl;
//     cout << "Tích: " << a * b << endl;
//     cout << "Thương: " << a / b << endl;
//     cout << "Chia lấy dư: " << a % b << endl;

//     // Toán tử so sánh
//     cout << "So sánh: " << (a > b) << endl; // 1 là đúng, 0 là sai
//     cout << "So sánh: " << (a < b) << endl; // 1 là đúng, 0 là sai
//     cout << "So sánh: " << (a == b) << endl; // 1 là đúng, 0 là sai
//     cout << "So sánh: " << (a != b) << endl; // 1 là đúng, 0 là sai
//     cout << "So sánh: " << (a >= b) << endl; // 1 là đúng, 0 là sai

//     // Toán tử logic
//     cout << "Logic: " << (a > b && a < 20) << endl; // 1 là đúng, 0 là sai
//     cout << "Logic: " << (a > b || a < 20) << endl; // 1 là đúng, 0 là sai
//     cout << "Logic: " << !(a > b) << endl; // 1 là đúng, 0 là sai
//     cout << "Logic: " << !(a < b) << endl; // 1 là đúng, 0 là sai
//     cout << "Logic: " << !(a == b) << endl; // 1 là đúng, 0 là sai
//     cout << "Logic: " << !(a != b) << endl; // 1 là đúng, 0 là sai

//     cout << "Logic: " << !(a >= b) << endl; // 1 là đúng, 0 là sai
//     cout << "Logic: " << !(a <= b) << endl; // 1 là đúng, 0 là sai
//     return 0;
// }

// Câu điều kiện 
// int main(){
//     int number;
//     cout << "Enter a number: ";
//     cin >> number;

//     if (number % 2 == 0){
//         cout << "Số chẵn." << endl;
//     }else {
//         cout << "Số lẻ." << endl;
//     }
//     return 0;
// }

// Câu lệnh vòng lặp
int main() {
    for (int i = 0; i <= 10; i++){
        for (int j = 1; j <= 10; j++){
            // cout << i << " X " << j << " = " << i * j << endl;
            // in bảng cửu chương
            cout << i << " * " << j << " = " << i * j << "\t"; // ký tự đặc biệt dùng để tạo khoảng cách dạng tab (tab character).
        }
        cout << endl;
    }
    return 0;
}