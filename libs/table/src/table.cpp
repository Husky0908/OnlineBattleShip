#include <battleship/table/table.h>


Table::Table(size_t table_size)
{
    m_rows.resize(table_size);
    for(auto& row : m_rows) {
        row.resize(table_size, TableCellType::Splash);
    }
}

std::vector<std::string> Table::draw()
{
    std::vector<std::string> result;

    std::string beggining_line = "┌";
    std::string middle_line = "├";
    std::string ending_line = "└";
    for(size_t tmp = 0; tmp != m_rows.size() - 1; ++tmp) {
        beggining_line += "―┬";
        middle_line += "─┼";
        ending_line += "─┴";
    }
    beggining_line += "─┐";
    middle_line += "─┤";
    ending_line += "─┘";

    result.push_back(beggining_line);

    for(const auto& row : m_rows) {
        std::string line = "│";
        for(const auto& col : row) {
            switch(col) {
            case TableCellType::Water:
                line += "🌊";
                break;
            case TableCellType::Splash:
                line += "💦";
                break;
            case TableCellType::Ship:
                break;
            case TableCellType::DamagedShip:
                break;
            case TableCellType::ShrunkShip:
                break;
            }
            line += "│";
        }
        result.push_back(line);
        result.push_back(middle_line);
    }

    result.back() = ending_line;

    return result;
}
