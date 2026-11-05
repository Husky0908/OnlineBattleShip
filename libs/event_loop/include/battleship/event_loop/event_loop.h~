#pragma once

#include <string>
#include <vector>

enum class TableCellType {
    Water,
    Ship,
    Splash,
    DamagedShip,
    ShrunkShip
};

class Table {
public:
    Table(size_t table_size);

    std::vector<std::string> draw();

protected:
    std::vector<std::vector<TableCellType>> m_rows;
};
