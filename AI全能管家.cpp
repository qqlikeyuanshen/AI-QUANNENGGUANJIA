#include <iostream>

int main() {
    int temp;
    std::cout << "AI  全能管家：今日温度：";
    std::cin >> temp;

    if (temp >= 30) {
        std::cout << "今天热，多喝水、注意防晒" << std::endl;
    } else if (temp >= 20) {
        std::cout << "温度舒服，认真学习" << std::endl;
    } else {
        std::cout << "今天冷，多穿衣，注意保暖" << std::endl;
    }
    std::cout << "AI 祝你开心每一天！" << std::endl;
    std::cout << "已开源" << std::endl;

    return 0;
}