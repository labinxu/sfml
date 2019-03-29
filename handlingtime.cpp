#include <iostream>
#include <SFML/Graphics.hpp>
void converting_time(){
  sf::Time t1 = sf::microseconds(10000);
  sf::Time t2 = sf::milliseconds(10);
  sf::Time t3 = sf::seconds(0.01f);
  std::cout<<t1.asSeconds()<<" "<<t2.asSeconds()<<t3.asSeconds();
}
void usingInputStream(){
  sf::FileInputStream stream;
  stream.open("image.png");
  sf::Texture texture;
  texture.loadFromStream(stream);
}

int main_(){
  sf::Clock clock;
  sf::Time elapsed1 = clock.getElapsedTime();
  std::cout<<elapsed1.asSeconds()<<std::endl;
  clock.restart();
  sf::Time elasped2 = clock.getElapsedTime();
  std::cout<<elasped2.asSeconds()<<std::endl;
  return 0;
}
int main(){
  sf::Window win(sf::VideoMode(800,600),"My Window");
  while(win.isOpen())
    {
      sf::Event event;
      while(win.pollEvent(event)){
        if(event.type == sf::Event::Closed){
          win.close();
        }
      }
    }
  return 0;
}
