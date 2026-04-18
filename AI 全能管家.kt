fun main() {
    print("AI  全能管家：今日温度：")
    val temp = readLine()?.toIntOrNull() ?: return

    when {
        temp >= 30 -> println("今天热，多喝水、注意防晒")
        temp >= 20 -> println("温度舒服，认真学习")
        else -> println("今天冷，多穿衣，注意保暖")
    }
    println("AI 祝你开心每一天！")
    println("已开源")
}