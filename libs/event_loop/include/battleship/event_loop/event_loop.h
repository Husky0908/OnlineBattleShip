#pragma once

#include <deque>
#include <string>
#include <utility>

struct Event {
    virtual ~Event() {}
};

class Loop {
public:
  Loop();
  int loop();
  int attack();
  int defend();

protected:
  std::pair<std::string, int> m_coordinate;
  std::deque<Event*> m_events;
};
