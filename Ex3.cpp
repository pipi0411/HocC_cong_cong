/*
1. Tạo lưới 5x5 (có thể chỉ dùng để hiển thị)
2. Biến lưu điểm = 0

3. Vòng lặp 10 lượt:
   a. Sinh ngẫu nhiên tọa độ mục tiêu (targetX, targetY)
   b. Hiện lưới (có thể ẩn mục tiêu)
   c. Yêu cầu người chơi nhập tọa độ (guessX, guessY)
   d. So sánh:
       - Nếu trúng: +10 điểm, báo trúng
       - Nếu trượt: -5 điểm, báo trượt + in vị trí đúng
   e. Hiện điểm hiện tại

4. Kết thúc: In tổng điểm
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h> // Để sử dụng Sleep

using namespace std;

int main() {
    srand(time(0));
    const int SIZE = 5;
    int score = 0;

    for (int round = 0; round < 10; round++) {
        // Bước a: Sinh ngẫu nhiên tọa độ mục tiêu
        int targetX = rand() % SIZE;
        int targetY = rand() % SIZE;

        // Bước b: Hiện lưới (có thể ẩn mục tiêu)
        cout << "Round " << round + 1 << ": Guess the target position (x y): \n";
        for (int i = 0; i < SIZE; i++)
        {
            for (int j = 0; j < SIZE; j++)
            {
                if (i == targetX && j == targetY)
                {
                    cout << "O "; // Ẩn mục tiêu
                }
                else
                {
                    cout << ". "; // Hiển thị ô trống
                }
            }
            cout << endl;
        }
        Sleep(2000);

        // Ghi đè lại bằng lưới trống (che đáp án)
        cout << "\033[" << (SIZE+1) << "A"; // Di chuyển con trỏ lên lại vị trí đáp án (nếu terminal hỗ trợ)
        cout << "                                        \n"; // Xóa dòng tiêu đề đáp án
        for (int i = 0; i < SIZE; i++) {
            for (int j = 0; j < SIZE; j++) {
                cout << ". ";
            }
            cout << endl;
        }

        cout << "Round " << round + 1 << ": Guess the target position (x y) (input 'exit' to quit): \n";
        // Bước c: Yêu cầu người chơi nhập tọa độ
        int guessX, guessY;
        string input;
        cin >> input;
        if (input == "exit")
        {
            cout << "Exiting the game." << endl;
            cout << "Your total score is: " << score << endl;
            return 0;
        }
        try {
            guessX = stoi(input);
            cin >> guessY;
        } catch (const invalid_argument& e) {
            cout << "Invalid input. Please enter valid coordinates." << endl;
            round--; // Giữ nguyên lượt chơi nếu nhập sai
            continue;
        }

        cout << "Your guess on the grid:\n";
        for (int i = 0; i < SIZE; i++)
        {
            for (int j = 0; j < SIZE; j++)
            {
                if (i == guessX && j == guessY)
                {
                    cout << "X ";
                }
                else
                cout << ". ";
            }
            cout << endl;
        }
        // Bước d: So sánh
        if (guessX == targetX && guessY == targetY) {
            score += 10; // Trúng
            cout << "Hit! You scored 10 points." << endl;
        } else {
            score -= 5; // Trượt
            cout << "Miss! The correct position was (" << targetX << ", " << targetY << "). You lost 5 points." << endl;
        }

        // Bước e: Hiện điểm hiện tại
        cout << "Current score: " << score << endl;
    }

    // Kết thúc: In tổng điểm
    cout << "Game over! Your total score is: " << score << endl;

    return 0;
}