#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
class ImageManager
{
public:
	sf::Texture tiles[10];
	sf::Texture brokenTiles[10];
	sf::Sprite tileSprites[10];
	sf::Sprite brokenTilesSprites[10];
	void loadTextures(sf::Texture tiles[10], sf::Texture brokenTiles[10]);
	void loadSprites(sf::Texture tiles[], sf::Texture brokenTiles[], sf::Sprite tileSprites[], sf::Sprite brokenTilesSprites[]);

};

