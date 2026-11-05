#include <battleship/event_loop/event_loop.h>
#include <iostream>

struct DefendEvent : public Event {};

struct AttackEvent : public Event {};

struct EndEvent : public Event {};

Loop::Loop() {
  m_events.push_back(new DefendEvent);
}

int Loop::defend() { return 0; }

int Loop::attack() {
  std::cin >> m_coordinate.first;
  std::cin >> m_coordinate.second;
  std::cout << "Loves ide: " << m_coordinate.first << m_coordinate.second << std::endl;
  return 0;
}


int Loop::loop() {
  bool end = false;

  while (!end) {
    Event *event = m_events.front();
    m_events.pop_front();

    if (dynamic_cast<DefendEvent *>(event) != nullptr) {
      std::cout << "Ellenseg tamad!" << std::endl;
      defend();
      m_events.push_back(new AttackEvent);
    } else if (dynamic_cast<AttackEvent *>(event) != nullptr) {
      std::cout << "Most te tamadsz!" << std::endl;
      attack();
      m_events.push_back(new EndEvent);
    } else {
      std::cout << "Vege a jateknak!" << std::endl;
      end = true;
    }

    delete event;
  }
  
  return 0;
}
