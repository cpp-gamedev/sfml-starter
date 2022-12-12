#include <SFML/Graphics.hpp>

namespace {
void run() {
	auto window = sf::RenderWindow{sf::VideoMode{1280, 720}, "sfml-starter"};
	auto circle = sf::CircleShape{300.0f, 256};
	circle.setFillColor(sf::Color::Yellow);
	while (window.isOpen()) {
		auto event = sf::Event{};
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) { return; }
		}

		window.clear();
		window.draw(circle);
		window.display();
	}
}
} // namespace

int main() { run(); }
