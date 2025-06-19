#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctime>
using namespace std;

/*
1. Tạo mảng 10x10 kiểu char, tất cả là '.'
2. Gán vị trí bắt đầu (playerX = 0, playerY = 0)
3. Gán vị trí kết thúc (endX = 9, endY = 9)
4. Đặt ký tự '@' tại vị trí người chơi
5. Đặt ký tự 'E' tại vị trí kết thúc
6. Duyệt toàn bộ mảng để in ra màn hình

*/
int main()
{
    cout << "Dùng phím W/A/S/D để di chuyển, ESC để thoát.\n\n";
    const int SIZE = 10;
    char grid[SIZE][SIZE];

    // Bước 1: Khởi tạo mảng với ký tự '.'
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            grid[i][j] = '.';
        }
    }

    // Bước 2: Gán vị trí bắt đầu
    int playerX = 0, playerY = 0;
    grid[playerX][playerY] = '@'; // Ký tự người chơi

    // Bước 3:Random vị trí kết thúc:
    int endX, endY;
    srand(time(0));
    endX = rand() % SIZE;
    endY = rand() % SIZE;
    grid[endX][endY] = 'E'; // Ký tự kết thúc

    // Bước 4: In ra mảng
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << grid[i][j] << ' ';
        }
        cout << endl;
    }

    /*
    Lặp lại:
    - Nhận một phím từ người dùng
    - Nếu phím là ESC → thoát game
    - Nếu phím là W/A/S/D:
        - Tính vị trí mới (newX, newY)
        - Kiểm tra nếu nằm trong lưới:
            - Đặt lại vị trí cũ là '.'
            - Nếu vị trí mới là 'E' → báo thắng và thoát
            - Cập nhật playerX/Y
            - Đặt '@' vào vị trí mới
    - In lại lưới
    */
   while(true)
   {
    char move = _getch(); // Nhận phím từ người dùng
    if (move == 27)
    {
        cout << "\nBạn đã thoát trò chơi." << endl;
        break;
    }
    int newX = playerX, newY = playerY;
    if (move == 'w' || move == 'W') {
        newX--; // Di chuyển lên
    } else if (move == 's' || move == 'S') {
        newX++; // Di chuyển xuống
    } else if (move == 'a' || move == 'A') {
        newY--; // Di chuyển sang trái
    } else if (move == 'd' || move == 'D') {
        newY++; // Di chuyển sang phải
    } else {
        cout << "Phím không hợp lệ. Vui lòng nhập W/A/S/D hoặc ESC để thoát." << endl;
        continue; // Bỏ qua vòng lặp nếu phím không hợp lệ
    }
    if(newX >=0 && newX < SIZE && newY >= 0 && newY < SIZE)
    {
        if(grid[newX][newY] == 'E')
        {
            cout << "Chúc mừng! Bạn đã đến đích!" << endl;
            break; // Thoát vòng lặp nếu đến đích
        }
        else
        {
            grid[playerX][playerY] = '.'; // Đặt lại vị trí cũ là '.'
            playerX = newX; // Cập nhật vị trí người chơi
            playerY = newY;
            grid[playerX][playerY] = '@'; // Đặt '@' vào vị trí mới

            // In lại lưới
            for (int i = 0; i < SIZE; i++) {
                for (int j = 0; j < SIZE; j++) {
                    cout << grid[i][j] << ' ';
                }
                cout << endl;
            }
            //xuống dòng sau khi in lưới
            cout << endl;
        }
    }
   }

    return 0;

}