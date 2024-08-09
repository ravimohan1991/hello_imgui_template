<p align="center">
 <img src="https://github.com/user-attachments/assets/9b3fe128-a9f4-4319-9139-5bc4606250eb" alt="image" width="300" height="auto">
</p>

# hello_imgui_template: get started with HelloImGui in 5 minutes (almost) 

This template pitches the restoration of C++ native programming for iOS and android's appified market.

Based upon C++ software: [hello_imgui](https://github.com/pthom/hello_imgui.git) and a variant of [hello_imgui_template](https://github.com/pthom/hello_imgui_template).

## Explanation

With the tenet of "no Turing Machine should be devoid of native programming", I'd like to recommend the following [article](https://www.patreon.com/posts/satisfactory-of-109285927?utm_medium=clipboard_copy&utm_source=copyLink&utm_campaign=postshare_fan&utm_content=web_share). This repository is an attempt towards achieving just that.


### Assets folder structure 

Anything in the assets/ folder located beside the application's CMakeLists will be bundled 
together with the application (for macOS, iOS, Android, Emscripten).

The files in assets/app_settings/ will be used to generate the app icon, 
and the application settings.

```
assets/
├── world.jpg                   # A custom asset. Any file or folder here will be deployed 
│                               # with the app.
├── fonts/
│    ├── DroidSans.ttf           # Default fonts used by HelloImGui
│    └── fontawesome-webfont.ttf # (if not found, the default ImGui font will be used)
│               
├── app_settings/               # Application settings
│    ├── icon.png               # This will be the app icon, it should be square
│    │                          # and at least 256x256. It will  be converted
│    │                          # to the right format, for each platform (except Android)
│    ├── apple/
│    │    │── Info.plist         # macOS and iOS app settings
│    │    │                      # (or Info.ios.plist + Info.macos.plist)
│    │    └── Resources/
│    │      └── ios/             # iOS specific settings: storyboard
│    │        └── LaunchScreen.storyboard
│    │
│    ├── android/                # Android app settings: any file placed here will be deployed 
│    │   │── AndroidManifest.xml # (Optional manifest, HelloImGui will generate one if missing)
│    │   └── res/                
│    │       └── mipmap-xxxhdpi/ # Optional icons for different resolutions
│    │           └── ...         # Use Android Studio to generate them: 
│    │                           # right click on res/ => New > Image Asset
│    └── emscripten/
│      ├── shell.emscripten.html # Emscripten shell file
│      │                         #   (this file will be cmake "configured"
│      │                         #    to add the name and favicon) 
│      └── custom.js             # Any custom file here will be deployed
│                                #   in the emscripten build folder
```

## Build instructions

### Build for iOS

#### 1. Clone hello_imgui with its submodules

```bash
mkdir -p external && cd external
git clone --recurse-submodules https://github.com/ravimohan1991/hello_imgui_template.git
cd ..
```

#### 2. Create the Xcode project
```bash
cd hello_imgui_template
./GenerateProjects.sh
```

Then, open the XCode project in KarmaiOSLighthouse/helloworld_with_helloimgui.xcodeproj
