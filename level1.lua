local composer = require( "composer" );
local scene = composer.newScene();
local xx = display.contentWidth;
local yy = display.contentHeight;


--scene:create

function scene:create( event )
local sceneGroup = self.view
local sheet = event.params.ss;
local bg = display.newImage (sheet, 1);
--scene:show
--scene:hide
--scene:destroy
return scene;
end


function scene:create( event )
local sceneGroup = self.view
local options =
{
frames = {
{ x = 257, y = 0, width = 256, height = 168}, --frame 1
{ x = 513, y = 0, width = 256, height = 168}, --2
{ x = 513, y = 168, width = 256, height = 168}, --3
}
};
local sheet = graphics.newImageSheet( "zeldaDungeon1.png", options );
local bg = display.newImage (sheet, 1);
bg.x = display.contentWidth / 2;
bg.y= display.contentHeight / 2;
sceneGroup:insert(bg);
end


function scene:show( event )
local sceneGroup = self.view
local phase = event.phase
if ( phase == "will" ) then
elseif ( phase == "did" ) then
local function next (event)
Runtime:removeEventListener("tap", next);
composer.gotoScene( "level2", {effect="slideLeft",
time=500});
end
Runtime:addEventListener("tap", next);
end
end

--[[
local params = event.params;
print (params);
local function next (event)
Runtime:removeEventListener("tap", next);
composer.gotoScene( "level2", {effect="slideLeft", time=500, params=params});
end
--]]