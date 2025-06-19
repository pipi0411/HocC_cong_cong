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

using namespace std;

int main() {
    const int SIZE = 5;
    int score = 0;

    for (int round = 0; round < 10; round++) {
        // Bước a: Sinh ngẫu nhiên tọa độ mục tiêu
        int targetX = rand() % SIZE;
        int targetY = rand() % SIZE;

        // Bước b: Hiện lưới (có thể ẩn mục tiêu)
        cout << "Round " << round + 1 << ": Guess the target position (x y): ";
        // cout << "  ";
        // for (int j = 0; j < SIZE; j++) cout << j << " ";
        // cout << endl;
        // for (int i = 0; i < SIZE; i++) {
        //     cout << i << " ";
        //     for (int j = 0; j < SIZE; j++) {
        //         if (i == targetX && j == targetY) {
        //             cout << "O "; // Ẩn mục tiêu
        //         } else {
        //             cout << ". "; // Hiển thị ô trống
        //         }
        //     }
        //     cout << endl;
        // }
        // Bước c: Yêu cầu người chơi nhập tọa độ
        int guessX, guessY;
        cin >> guessX >> guessY;
        // Kiểm tra nhập hợp lệ
        // if (guessX < 0 || guessX >= SIZE || guessY < 0 || guessY >= SIZE) {
        //     cout << "Invalid input! Please enter coordinates between 0 and " << SIZE - 1 << "." << endl;
        //     round--; // Giảm lượt để không tính điểm
        //     continue; // Bỏ qua vòng lặp này
        // }

        cout << "Your guess on the grid:\n";
        for (int i = 0; i < SIZE; i++)
        {
            for (int j = 0; j < SIZE; j++)
            {
                if (i == targetX && j == targetY)
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