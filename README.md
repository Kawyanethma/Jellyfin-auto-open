# Jellyfin Auto-Open

A Windows C++ application that automates the process of starting and managing Jellyfin Media Server and Player.

## Overview

Jellyfin Auto-Open is a lightweight utility that streamlines your Jellyfin media experience by automatically:
- Starting the Jellyfin Windows Tray Server
- Displaying a progress bar during startup
- Opening the Jellyfin Media Player
- Automatically closing the server when done

This tool eliminates the manual steps required to start both the Jellyfin server and media player, providing a seamless one-click solution for your media streaming needs.

## Features

- 🚀 **One-Click Launch**: Start both Jellyfin server and player with a single executable
- 📊 **Visual Progress Bar**: See the startup progress with a customizable progress indicator
- 🔄 **Automatic Cleanup**: Automatically closes the Jellyfin server when the media player exits
- 🎯 **Windows Integration**: Designed specifically for Windows with native system calls
- ⚡ **Lightweight**: Minimal resource usage with fast startup times

## Prerequisites

Before using Jellyfin Auto-Open, ensure you have:

- **Windows Operating System** (Windows 7 or later)
- **Jellyfin Server** installed at the default location: `C:\Program Files\Jellyfin\Server\`
- **Jellyfin Media Player** installed at the default location: `C:\Program Files\Jellyfin\Jellyfin Media Player\`
- **CMake 3.25 or later** (for building from source)
- **C++17 compatible compiler** (Visual Studio 2017+ or MinGW-w64)

## Installation

### Option 1: Download Pre-built Binary
*(Coming Soon - Check the Releases section)*

### Option 2: Build from Source

1. **Clone the repository**:
   ```bash
   git clone https://github.com/Kawyanethma/Jellyfin-auto-open.git
   cd Jellyfin-auto-open
   ```

2. **Create build directory**:
   ```bash
   mkdir build
   cd build
   ```

3. **Generate build files**:
   ```bash
   cmake ..
   ```

4. **Build the project**:
   ```bash
   cmake --build . --config Release
   ```

The executable will be created as `Jellyfin_Opener.exe` in your build directory.

## Usage

1. **Make sure Jellyfin is installed** in the default Windows locations
2. **Run the executable**: Double-click `Jellyfin_Opener.exe` or run it from command line
3. **Wait for the progress bar** to complete (approximately 3-5 seconds)
4. **Jellyfin Media Player will open** automatically
5. **When you close the media player**, the Jellyfin server will be automatically terminated

### Command Line Usage
```bash
Jellyfin_Opener.exe
```

## How It Works

1. **Server Startup**: Launches `Jellyfin.Windows.Tray.exe` using Windows ShellExecute
2. **Progress Display**: Shows a customizable progress bar during initialization
3. **Player Launch**: Opens `JellyfinMediaPlayer.exe` after server initialization
4. **Cleanup**: Automatically terminates the Jellyfin server process when the application exits

## Customization

The progress bar appearance can be modified by editing the `main.cpp` file:

```cpp
// Customize progress bar appearance
bar.set_todo_char(" ");           // Empty space character
bar.set_done_char("=");           // Progress character
bar.set_opening_bracket_char("["); // Opening bracket
bar.set_closing_bracket_char("]"); // Closing bracket
```

## File Structure

```
Jellyfin-auto-open/
├── main.cpp              # Main application logic
├── progressbar.hpp       # Progress bar implementation (MIT License)
├── CMakeLists.txt        # CMake build configuration
└── README.md            # This file
```

## Known Limitations

- **Windows Only**: This application is designed specifically for Windows
- **Fixed Paths**: Currently uses hardcoded paths for Jellyfin installation
- **Single Instance**: Does not check for existing Jellyfin server instances
- **No Error Handling**: Limited error handling for missing Jellyfin installations

## Contributing

Contributions are welcome! Here's how you can help:

1. **Fork the repository**
2. **Create a feature branch**: `git checkout -b feature/your-feature-name`
3. **Make your changes** and test them
4. **Commit your changes**: `git commit -am 'Add some feature'`
5. **Push to the branch**: `git push origin feature/your-feature-name`
6. **Create a Pull Request**

### Ideas for Contributions

- Add configuration file support for custom Jellyfin paths
- Implement error handling for missing installations
- Add support for multiple Jellyfin instances
- Create an installer/uninstaller
- Add system tray integration
- Implement logging functionality

## License

This project is open source. The progress bar component (`progressbar.hpp`) is licensed under the MIT License by Luigi Pertoldi.

## Troubleshooting

### Common Issues

**"Jellyfin not found" or application doesn't work:**
- Verify Jellyfin Server is installed at: `C:\Program Files\Jellyfin\Server\Jellyfin.Windows.Tray.exe`
- Verify Jellyfin Media Player is installed at: `C:\Program Files\Jellyfin\Jellyfin Media Player\JellyfinMediaPlayer.exe`
- Run as Administrator if you encounter permission issues

**Build errors:**
- Ensure you have CMake 3.25 or later
- Make sure you have a C++17 compatible compiler
- Check that Windows SDK is properly installed

**Progress bar doesn't display correctly:**
- Make sure you're running from a proper command prompt/terminal
- Some terminals may not support the progress bar characters

## Support

If you encounter any issues or have questions:
1. Check the [Issues](https://github.com/Kawyanethma/Jellyfin-auto-open/issues) section
2. Create a new issue with detailed information about your problem
3. Include your Windows version and Jellyfin installation details

## Acknowledgments

- **Luigi Pertoldi** for the progress bar implementation
- **Jellyfin Project** for the amazing media server software
- **Contributors** who help improve this project

---

**Made with ❤️ for the Jellyfin community**