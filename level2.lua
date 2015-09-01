
local composer = require( "composer" );
local options = {
effect = "fade",
time = 800,
}
-- load first scene
composer.gotoScene( "level1", options);


function scene:hide( event )
local sceneGroup = self.view
local phase = event.phase
if ( phase == "will" ) then
transition.cancel(enemy);
elseif ( phase == "did" ) then
end
end