#include <iostream>
#include <battleship/table/table.h>
#include <battleship/event_loop/event_loop.h>

using namespace std;

int main()
{
  Table table(10);
  Loop loop;

    auto str_table = table.draw();

    for(const auto& row : str_table)
    {
        std::cout << "           " << row << std::endl;
    }

    loop.loop();
    
    return 0;
}
