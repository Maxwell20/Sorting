local composer = require( "composer" );
local options =
{
frames = {
{ x = 257, y = 0, width = 256, height = 168}, --frame 1
{ x = 513, y = 0, width = 256, height = 168}, --2
{ x = 513, y = 168, width = 256, height = 168}, --3
}
};
local sheet = graphics.newImageSheet( "zeldaDungeon1.png", options );
local sceneOpt = { effect = "fade",
time = 800,
params = {ss = sheet;} }
-- load first scene
composer.gotoScene( "level1", sceneOpt);
--composer.gotoScene( sceneName [, options] )