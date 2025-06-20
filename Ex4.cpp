#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

/*Lặp lại:
    - In trạng thái của nhân vật và địch
    - Hiển thị menu hành động
    - Nhập lựa chọn từ người chơi

    Nếu chọn 1 (tấn công):
        - Trừ 20 energy
        - Nếu đủ năng lượng:
            - Gây sát thương ngẫu nhiên 10–20
            - Trừ HP của địch
        - Nếu không đủ:
            - In thông báo không đủ năng lượng

    Nếu chọn 2 (phòng thủ):
        - Trừ 10 energy
        - Nếu đủ:
            - Bật trạng thái "giảm sát thương" trong lượt đó
        - Nếu không đủ:
            - In thông báo

    Nếu chọn 3 (hồi phục):
        - Trừ 30 energy
        - Nếu đủ:
            - Hồi +20 HP (không vượt quá giới hạn)
        - Nếu không đủ:
            - In thông báo

    Nếu chọn 4:
        - Thoát trò chơi

    Kiểm tra nếu máu <= 0 hoặc energy <= 0 → in "Game over" và kết thúc
*/

int main()
{
    struct Character {
        string name;
        int hp;
        int energy;
    };
    Character hero = {"Hero", 100, 50};
    Character villain = {"Villain", 80, 40};
    srand(time(0)); // Seed for random number generation
    while (hero.hp > 0 && hero.energy > 0 && villain.hp > 0 && villain.energy > 0) {
        // In trạng thái của nhân vật và địch
        cout << "Hero - HP: " << hero.hp << ", Energy: " << hero.energy << endl;
        cout << "Villain - HP: " << villain.hp << ", Energy: " << villain.energy << endl;

        // Hiển thị menu hành động
        cout << "Choose action:\n";
        cout << "1. Attack" << endl;
        cout << "2. Defend" << endl;
        cout << "3. Heal" << endl;
        cout << "4. Quit" << endl;
        int choice;
        cin >> choice;

        switch (choice) {
            case 1: // Attack
                if (hero.energy >= 20) {
                    hero.energy -= 20;
                    int damage = rand() % 11 + 10; // Random damage between 10 and 20
                    villain.hp -= damage;
                    cout << "Hero attacks Villain for " << damage << " damage!" << endl;
                } else {
                    cout << "Not enough energy to attack!" << endl;
                }
                break;
            case 2: // Defend
                if (hero.energy >= 10) {
                    hero.energy -= 10;
                    cout << "Hero is defending this turn!" << endl;
                } else {
                    cout << "Not enough energy to defend!" << endl;
                }
                break;
            case 3: // Heal
                if (hero.energy >= 30) {
                    hero.hp += 20;
                    hero.energy -= 30;
                    if (hero.hp > 100) hero.hp = 100; // Giới hạn HP tối đa
                    cout << "Hero heals for 20 HP!" << endl;
                } else {
                    cout << "Not enough energy to heal!" << endl;
                }
                break;
            case 4: // Quit
                cout << "Quitting game..." << endl;
                return 0;
            default:
                cout << "Invalid choice!" << endl;
                break;
        }

        // Kiểm tra nếu máu <= 0 hoặc energy <= 0
        if (hero.hp <= 0 || hero.energy <= 0) {
            cout << "Game over" << endl;
            break;
        }
    }

    return 0;
}
// ...existing code...
        // Kiểm tra nếu máu <= 0 hoặc energy <= 0
        if (hero.hp <= 0 || hero.energy <= 0) {
            cout << "Game over" << endl;
            break;
        }

        // --- Villain AI ---
        if (villain.hp <= 0 || villain.energy <= 0) {
            cout << "You win! Villain is defeated." << endl;
            break;
        }

        cout << "\n--- Villain's turn ---" << endl;
        int villainAction = 0;
        if (villain.hp <= 30 && villain.energy >= 30) {
            villainAction = 3; // Heal
        } else if (villain.energy >= 20 && (rand() % 2 == 0)) {
            villainAction = 1; // Attack
        } else if (villain.energy >= 10) {
            villainAction = 2; // Defend
        } else {
            villainAction = 0; // Skip turn
        }

        switch (villainAction) {
            case 1: // Attack
                villain.energy -= 20;
                {
                    int damage = rand() % 11 + 10;
                    hero.hp -= damage;
                    cout << "Villain attacks Hero for " << damage << " damage!" << endl;
                }
                break;
            case 2: // Defend
                villain.energy -= 10;
                cout << "Villain is defending this turn!" << endl;
                break;
            case 3: // Heal
                villain.hp += 20;
                villain.energy -= 30;
                if (villain.hp > 80) villain.hp = 80;
                cout << "Villain heals for 20 HP!" << endl;
                break;
            default:
                cout << "Villain skips the turn (not enough energy)." << endl;
                break;
        }

        // Kiểm tra lại sau lượt villain
        if (villain.hp <= 0 || villain.energy <= 0) {
            cout << "You win! Villain is defeated." << endl;
            break;
        }
        if (hero.hp <= 0 || hero.energy <= 0) {
            cout << "Game over" << endl;
            break;
        }
// ...existing code...