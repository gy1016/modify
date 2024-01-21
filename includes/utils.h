#include <filesystem>

std::string getAbsolutePath(const std::string &relativePath)
{
    // 获取当前工作目录
    std::filesystem::path currentPath = std::filesystem::current_path();

    // 将相对路径追加到当前工作目录
    std::filesystem::path fullPath = currentPath / relativePath;

    // 将路径转换为绝对路径
    fullPath = std::filesystem::absolute(fullPath);

    std::cout << fullPath << std::endl;

    // 返回绝对路径的字符串表示
    return fullPath.string();
}