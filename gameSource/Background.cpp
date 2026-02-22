#include "Background.h"

#include "minorGems/game/drawUtils.h"


Background::Background( const char *inImageName, float inOpacity, doublePair inPosition )
        : PageComponent( 0, 0 ),
          mImage( loadSprite( inImageName, false ) ),
          mOpacity( inOpacity ),
          mPosition( inPosition ) {
    }

   
void Background::draw() {
    setDrawColor( 0, 0, 0, 1.0 );
    drawRect( -1000, -1000, 1000, 1000 );

    setDrawColor( 1, 1, 1, mOpacity );
    
    if ( mImage != NULL ) {
        drawSprite( mImage, mPosition );
        }
    }