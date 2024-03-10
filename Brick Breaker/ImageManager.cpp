#include "ImageManager.h"

void ImageManager::loadTextures(sf::Texture tiles[], sf::Texture brokenTiles[])
{
    if (!tiles[0].loadFromFile("Textures/01-Breakout-Tiles.png"))
    {
        std::cout << "Failed to load image 01 to texture" << std::endl;
    }
    if (!tiles[1].loadFromFile("Textures/03-Breakout-Tiles.png"))
    {
        std::cout << "Failed to load image 03 to texture" << std::endl;
    }
    if (!tiles[2].loadFromFile("Textures/05-Breakout-Tiles.png"))
    {
        std::cout << "Failed to load image 05 to texture" << std::endl;
    }
    if (!tiles[3].loadFromFile("Textures/07-Breakout-Tiles.png"))
    {
        std::cout << "Failed to load image 07 to texture" << std::endl;
    }
    if (!tiles[4].loadFromFile("Textures/09-Breakout-Tiles.png"))
    {
        std::cout << "Failed to load image 09 to texture" << std::endl;
    }
    if (!tiles[5].loadFromFile("Textures/11-Breakout-Tiles.png"))
    {
        std::cout << "Failed to load image 11 to texture" << std::endl;
    }
    if (!tiles[6].loadFromFile("Textures/13-Breakout-Tiles.png"))
    {
        std::cout << "Failed to load image 13 to texture" << std::endl;
    }
    if (!tiles[7].loadFromFile("Textures/15-Breakout-Tiles.png"))
    {
        std::cout << "Failed to load image 15 to texture" << std::endl;
    }
    if (!tiles[8].loadFromFile("Textures/17-Breakout-Tiles.png"))
    {
        std::cout << "Failed to load image 17 to texture" << std::endl;
    }
    if (!tiles[9].loadFromFile("Textures/19-Breakout-Tiles.png"))
    {
        std::cout << "Failed to load image 19 to texture" << std::endl;
    }
    if (!brokenTiles[0].loadFromFile("Textures/02-Breakout-Tiles.png"))
    {
        std::cout << "Failed to load image 02 to texture" << std::endl;
    }
    if (!brokenTiles[1].loadFromFile("Textures/04-Breakout-Tiles.png"))
    {
        std::cout << "Failed to load image 04 to texture" << std::endl;
    }
    if (!brokenTiles[2].loadFromFile("Textures/06-Breakout-Tiles.png"))
    {
        std::cout << "Failed to load image 06 to texture" << std::endl;
    }
    if (!brokenTiles[3].loadFromFile("Textures/08-Breakout-Tiles.png"))
    {
        std::cout << "Failed to load image 08 to texture" << std::endl;
    }
    if (!brokenTiles[4].loadFromFile("Textures/10-Breakout-Tiles.png"))
    {
        std::cout << "Failed to load image 10 to texture" << std::endl;
    }
    if (!brokenTiles[5].loadFromFile("Textures/12-Breakout-Tiles.png"))
    {
        std::cout << "Failed to load image 12 to texture" << std::endl;
    }
    if (!brokenTiles[6].loadFromFile("Textures/14-Breakout-Tiles.png"))
    {
        std::cout << "Failed to load image 14 to texture" << std::endl;
    }
    if (!brokenTiles[7].loadFromFile("Textures/16-Breakout-Tiles.png"))
    {
        std::cout << "Failed to load image 16 to texture" << std::endl;
    }
    if (!brokenTiles[8].loadFromFile("Textures/18-Breakout-Tiles.png"))
    {
        std::cout << "Failed to load image 18 to texture" << std::endl;
    }
    if (!brokenTiles[9].loadFromFile("Textures/20-Breakout-Tiles.png"))
    {
        std::cout << "Failed to load image 20 to texture" << std::endl;
    }
}

void ImageManager::loadSprites(sf::Texture tiles[], sf::Texture brokenTiles[], sf::Sprite tileSprites[], sf::Sprite brokenTilesSprites[])
{
    for (int i = 0; i < 10; i++)
    {
        tileSprites[i].setTexture(tiles[i]);

    }
    for (int i = 0; i < 10; i++)
    {
        brokenTilesSprites[i].setTexture(brokenTiles[i]);

    }




}
