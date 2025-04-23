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
// int main() {
//     for (int i = 0; i <= 10; i++){
//         for (int j = 1; j <= 10; j++){
//             // cout << i << " X " << j << " = " << i * j << endl;
//             // in bảng cửu chương
//             cout << i << " * " << j << " = " << i * j << "\t"; // ký tự đặc biệt dùng để tạo khoảng cách dạng tab (tab character).
//         }
//         cout << endl;
//     }
//     return 0;
// }

// Hàm 
// double areaRectangle(double length, double width) {
//     return length * width;
// }

// double preimeterRectangle(double length, double width) {
//     return 2 * (length + width);
// }

// int main() {
//     double length, width;
//     cout << "Enter length: ";
//     cin >> length;
//     cout << "Enter width: ";
//     cin >> width;

//     cout << "Area of rectangle: " << areaRectangle(length, width) << endl;
//     cout << "Perimeter of rectangle: " << preimeterRectangle(length, width) << endl;
//     return 0;
// }


// Hàm đệ quy
// int fibonacci(int n){
//     if (n <= 1) return n;
//     return fibonacci(n - 1) + fibonacci(n - 2);
// }

// int main(){
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;

//     cout << "Fibonacci of " << n << " is: " << fibonacci(n) << endl;
//     return 0;
// }

// Cấu trúc dữ liệu
// class HinhChuNhat {
//     private:
//         float length;
//         float width;
//     public:
//         HinhChuNhat(float l, float w){
//             length = l;
//             width = w;
//         }
//         float area(){
//             return length * width;
//         }
// };

// int main() {
//     HinhChuNhat hcn(5.0, 3.0);
//     cout << "Area of rectangle: " << hcn.area() << endl;
//     return 0;
// }

// Kế thừa
// class DongVat {
//     public:
//         void an() {
//             cout << "Động vật đang ăn." << endl;
//         }
//         void ngu() {
//             cout << "Động vật đang ngủ." << endl;
//         }
// };

// class Cho : public DongVat {
//     public:
//         void sua() {
//             cout << "Chó đang sủa. Gâu Gâu !" << endl;
//         }
// };

// class Meo : public DongVat {
//     public:
//         void keu() {
//             cout << "Mèo đang kêu. Meo Meo !" << endl;
//         }
// };

// int main() {
//     Cho dog;
//     dog.an();
//     dog.ngu();
//     dog.sua();

//     cout << "-----" << endl;

//     Meo cat;
//     cat.an();
//     cat.ngu();
//     cat.keu();

//     return 0;
// }

// Đa hình biên dịch - Nạp chồng hàm
// class MayTinh {
//     public:
//         int cong(int a, int b) {
//             return a + b;
//         }
//         float cong(float a, float b) {
//             return a + b;
//         }
//         int cong(int a, int b, int c) {
//             return a + b + c;
//         }
// };

// int main() {
//     MayTinh mt;
//     cout << "Tổng 2 số nguyên: " << mt.cong(5, 10) << endl;
//     cout << "Tổng 2 số thực: " << mt.cong(5.5f, 10.1f) << endl;
//     cout << "Tổng 3 số nguyên: " << mt.cong(5, 10, 15) << endl;
//     return 0;
// }

// Đa hình lúc chạy 
class DongVat {
    public:
        virtual void keu() {
            cout << "Động vật đang kêu." << endl;
        }
};

class Cho : public DongVat {
    public:
        void keu() override {
            cout << "Chó đang sủa. Gâu Gâu !" << endl;
        }
};

class Meo : public DongVat {
    public:
        void keu() override {
            cout << "Mèo đang kêu. Meo Meo !" << endl;
        }
};

int main() {
    DongVat* dv1 = new Cho();
    DongVat* dv2 = new Meo();

    dv1->keu(); // Gọi hàm keu() của lớp Cho
    dv2->keu(); // Gọi hàm keu() của lớp Meo

    delete dv1;
    delete dv2;

    return 0;
}