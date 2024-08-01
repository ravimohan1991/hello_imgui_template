#!/bin/sh
mkdir KarmaiOSLightHouse
cd KarmaiOSLightHouse
cmake -DCMAKE_TOOLCHAIN_FILE=hello_imgui_cmake/ios-cmake/ios.toolchain.cmake -GXcode -DPLATFORM=OS64COMBINED -DCMAKE_XCODE_ATTRIBUTE_DEVELOPMENT_TEAM=RaviMohan -DHELLOIMGUI_USE_FREETYPE=off ..
