#include <iostream>
using namespace std;
#include <ctime>
#include <cstdlib>
#include <conio.h>

int main()
{
    char playAgain;
    do {
    srand(time(0)); // Khởi tạo seed cho hàm rand()
    //1. Khởi tạo số ngẫu nhiên từ 1 đến 100
    int randomNumber = rand() % 100 + 1;
    //2. Khởi tạo biến để lưu số lần đoán
    int attempts = 0;
    //3. Khởi tạo biến để lưu số đoán
    int guess = 0;
    //4. In ra hướng dẫn cho người dùng
    cout << "Chào mừng bạn đến với trò chơi đoán số!" << endl;
    cout << "Tôi đã chọn một số ngẫu nhiên từ 1 đến 100. Hãy đoán xem đó là số nào!" << endl;
    //5. Vòng lặp để người dùng đoán số
    while (guess != randomNumber) {
        cout << "Nhập số đoán của bạn (ESC để thoát): ";
        string input;
        char ch;
        // kiểm tra xem người chơi có nhập ESC không?
        while (true){
            ch = _getch(); 
            if (ch == 27) { // 27 là mã ASCII cho phím ESC
                cout << "\nBạn đã thoát trò chơi." << endl;
                return 0; 
            } else if (isdigit(ch) || ch == '-') { 
                input += ch; // Thêm ký tự vào chuỗi input
                cout << ch; // Hiển thị ký tự đã nhập
            } else if (ch == '\b' && !input.empty()) { // Kiểm tra phím Backspace
                input.pop_back(); // Xóa ký tự cuối cùng trong chuỗi input
                cout << "\b \b"; // Xóa ký tự đã hiển thị
            }
            else if (ch == '\r') { // Kiểm tra phím Enter
                cout << endl; // Xuống dòng khi nhấn Enter
                break; // Thoát vòng lặp khi nhấn Enter
            }
        }
        // Chuyển đổi chuỗi input sang số nguyên
        if (!input.empty()) {
            guess = stoi(input); // Chuyển đổi chuỗi sang số nguyên
        } else {
            cout << "\nBạn chưa nhập số nào. Vui lòng thử lại!" << endl;
            continue; // Quay lại vòng lặp nếu không có số được nhập
        }

        attempts++;
        
        if (guess < randomNumber) {
            cout << "Số bạn đoán quá nhỏ. Hãy thử lại!" << endl;
        } else if (guess > randomNumber) {
            cout << "Số bạn đoán quá lớn. Hãy thử lại!" << endl;
        } else {
            cout << "Chúc mừng! Bạn đã đoán đúng số " << randomNumber << " sau " << attempts << " lần đoán." << endl;
            
        }
    }
    cout << "Bạn có muốn chơi lại không? (y/n): ";
    cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');
    cout << "Cảm ơn bạn đã chơi! Hẹn gặp lại!" << endl;
    return 0;
}