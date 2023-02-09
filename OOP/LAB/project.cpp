#include <iostream>
#include <vector>

class Token {
 public:
  Token(int level, int place) : level_(level), place_(place) {}

  int getLevel() const { return level_; }
  int getPlace() const { return place_; }

 private:
  int level_;
  int place_;
};

class Parking {
 public:
  Parking()
      : levels_(6),
        places_per_level_(100),
        occupied_places_(levels_, std::vector<bool>(places_per_level_, false)) {}

  Token allocatePlace() {
    for (int level = 0; level < levels_; ++level) {
      for (int place = 0; place < places_per_level_; ++place) {
        if (!occupied_places_[level][place]) {
          occupied_places_[level][place] = true;
          return Token(level, place);
        }
      }
    }
    throw std::runtime_error("No parking place available");
  }

  void releasePlace(const Token& token) {
    if (occupied_places_[token.getLevel()][token.getPlace()]) {
      occupied_places_[token.getLevel()][token.getPlace()] = false;
    } else {
      throw std::runtime_error("Place already released");
    }
  }

 private:
  int levels_;
  int places_per_level_;
  std::vector<std::vector<bool>> occupied_places_;
};

int main() {
  Parking parking;

  try {
    Token token = parking.allocatePlace();
    std::cout << "Parking place allocated at level " << token.getLevel()
              << " and place " << token.getPlace() << std::endl;

    parking.releasePlace(token);
    std::cout << "Parking place released" << std::endl;
  } catch (const std::runtime_error& e) {
    std::cout << e.what() << std::endl;
  }

  return 0;
}
