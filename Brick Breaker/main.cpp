#include <SFML/Graphics.hpp>
#include <vector>
#include <iostream>
void loadTextures(std::vector<sf::Texture> tiles, std::vector<sf::Texture> brokenTiles);
std::vector<sf::Sprite> loadSprites(std::vector<sf::Sprite>& tileSprites, std::vector<sf::Sprite>& brokenTileSprites, std::vector<sf::Texture> tiles,
    std::vector<sf::Texture> brokenTiles);

int main()
{
    /*
    png 1 and 2 are blue
    png 3 and 4 are green
    png 5 and 6 are purple
    png 7 and 8 are red
    png 9 and 10 are orange
    png 11 and 12 are lightblue
    png 13 and 14 are yellow
    png 15 and 16 are mintgreen
    png 17 and 18 are grey
    png 19 and 20 are brown
    xx-Breakout-Tiles is the name of each tile where xx are their numbers starting from 01 to 20
    */
    sf::VideoMode desktopMode = sf::VideoMode::getDesktopMode();
    int screenWidth = desktopMode.width;
    int screenHeight = desktopMode.height;
    sf::RenderWindow window(sf::VideoMode(screenWidth, screenHeight), "Brick Breaker");
    std::vector<sf::Texture> tiles(10);
    std::vector<sf::Texture> brokenTiles(10);
    loadTextures(tiles, brokenTiles);
    std::vector<sf::Sprite> tileSprites(10);
    std::vector<sf::Sprite> brokenTileSprites(10);
    loadSprites(tileSprites, brokenTileSprites, tiles, brokenTiles);
    int posx = screenWidth / 2;
    int posy = screenHeight / 2;
    for (size_t i = 0; i < 10; i++)
    {
        tileSprites[i].setScale(10, 10);
        tileSprites[i].setPosition(posx, posy);
        posx += 10;
        posy += 10;

    }

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        for (size_t i = 0; i < 10; i++)
        {
            window.draw(tileSprites[i]);
            window.draw(brokenTileSprites[i]);

        }
        window.display();
        
    }

    return 0;
}

void loadTextures(std::vector<sf::Texture> tiles, std::vector<sf::Texture> brokenTiles)
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

std::vector<sf::Sprite> loadSprites(std::vector<sf::Sprite>& tileSprites, std::vector<sf::Sprite>& brokenTileSprites, std::vector<sf::Texture> tiles,
    std::vector<sf::Texture> brokenTiles)
{
    std::vector<sf::Sprite> allSprites;

    for (int i = 0; i < tileSprites.size(); i++)
    {
        tileSprites[i].setTexture(tiles[i]);
        allSprites.push_back(tileSprites[i]);
    }

    for (int i = 0; i < brokenTileSprites.size(); i++)
    {
        brokenTileSprites[i].setTexture(brokenTiles[i]);
        allSprites.push_back(brokenTileSprites[i]);
    }

    return allSprites;
}



