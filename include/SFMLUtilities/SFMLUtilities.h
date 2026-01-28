#pragma once

#include "SFML/System/Vector2.hpp"

namespace SFMLUtilities
{

    /**
     * @brief Compute the desktop size scaled by a factor.
     *
     * Queries the current desktop video mode and scales its width and height
     * by @p scaleFactor. The resulting floating-point dimensions are truncated
     * to unsigned integers before being returned in an sf::Vector2u.
     *
     * @param scaleFactor Factor to scale the desktop dimensions by (e.g. 0.25 for 25%).
     *                    Values <= 0 will produce 0 for width and/or height.
     * @return sf::Vector2u Scaled desktop size as (width, height).
     */
    sf::Vector2u ScaledDesktopSize(double scaleFactor);

}
