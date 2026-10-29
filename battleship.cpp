#include <iostream>
#include <battleship/table/table.h>

using namespace std;

int main()
{
    Table table(10);

    auto str_table = table.draw();

    for(const auto& row : str_table)
    {
        std::cout << "           " << row << std::endl;
    }
    return 0;
}
