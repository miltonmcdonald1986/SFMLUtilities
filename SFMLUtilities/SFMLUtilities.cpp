// SFMLUtilities.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"

#include "SFML/System/Vector2.hpp"
#include "SFML/Window/VideoMode.hpp"

#include "SFMLUtilities/SFMLUtilities.h"

namespace SFMLUtilities
{

    sf::Vector2u ScaledDesktopSize(double scaleFactor)
    {
        const sf::VideoMode desktopMode = sf::VideoMode::getDesktopMode();
        const sf::Vector2u desktopSize = desktopMode.size;
        const double scaledDesktopWidth = scaleFactor * desktopSize.x;
        const double scaledDesktopHeight = scaleFactor * desktopSize.y;
        const unsigned int width = static_cast<unsigned int>(scaledDesktopWidth);
        const unsigned int height = static_cast<unsigned int>(scaledDesktopHeight);
        const sf::Vector2u newSize(width, height);
        return sf::Vector2u(width, height);
    }

}
