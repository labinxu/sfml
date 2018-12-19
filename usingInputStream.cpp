#include <SFML/Graphics.hpp>
int main(){
  sf::FileInputStream stream;
  stream.open("image.png");
  sf::Texture texture;
  texture.loadFromStream(stream);
  return 0;
}
