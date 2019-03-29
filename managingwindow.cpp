#include <SFML/Graphics.hpp>

int main(){
  sf::Window window(sf::VideoMode(800, 600), "My Window");
  window.setPosition(sf::Vector2i(100,50));
  window.setSize(sf::Vector2u(640,480));
  while(window.isOpen()){
    sf::Event event;
    while(window.pollEvent(event)){
      if(event.type == sf::Event::Closed){
        window.close();
      }
    }
  }
  return 0;
}
