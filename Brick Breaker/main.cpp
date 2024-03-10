#include <SFML/Graphics.hpp>
#include <vector>
#include <iostream>
#include "ImageManager.h"

int main()
{
    ImageManager T;
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

    T.loadTextures(T.tiles, T.brokenTiles);
    T.loadSprites(T.tiles, T.brokenTiles, T.tileSprites, T.brokenTilesSprites);
    for (size_t i = 0; i < 10; i++)
    {
        T.tileSprites[i].setPosition(desktopMode.width / 2, desktopMode.height / 2);

    }
    for (size_t i = 0; i < 10; i++)
    {
        T.brokenTilesSprites[i].setPosition(desktopMode.width / 2, desktopMode.height / 2);

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
            window.draw(T.tileSprites[i]);
            window.draw(T.brokenTilesSprites[i]);

        }
        window.display();

    }

    return 0;
}





